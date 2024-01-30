@class NSMutableArray, NSString, NSDictionary, NSOperationQueue, NSObject, RTCReporting;
@protocol OS_dispatch_queue;

@interface MPRTCReportingSession : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSDictionary *_additionalUserInfo;
    NSString *_clientName;
    int _clientType;
    long long _clientVersion;
    BOOL _hasCompleteSessionSetup;
    BOOL _hasInitializedSession;
    id _hierarchyToken;
    RTCReporting *_internalSession;
    NSOperationQueue *_operationQueue;
    NSMutableArray *_pendingReportingEvents;
    NSString *_serviceIdentifier;
    unsigned int _sessionID;
    NSDictionary *_sessionUserInfo;
}

@property (copy, nonatomic) NSDictionary *additionalUserInfo;
@property (copy, nonatomic) NSString *clientName;
@property (nonatomic) int clientType;
@property (nonatomic) long long clientVersion;
@property (copy, nonatomic) NSString *serviceIdentifier;
@property (retain, nonatomic) id hierarchyToken;
@property (nonatomic) unsigned int sessionID;
@property (readonly, nonatomic) BOOL hasCompleteSessionSetup;
@property (readonly, nonatomic) BOOL hasInitializedSession;

+ (id)newHierarchyTokenFromParentToken:(id)a0;
+ (void)_recordEvent:(id)a0 withInternalSession:(id)a1;
+ (BOOL)_isRTCReportingSupported;

- (id)init;
- (void).cxx_destruct;
- (void)initializeSession;
- (void)finalizeSession;
- (void)completeSessionSetup;
- (void)recordEvent:(id)a0;

@end
