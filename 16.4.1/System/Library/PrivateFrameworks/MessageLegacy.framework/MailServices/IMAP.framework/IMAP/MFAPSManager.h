@class NSCountedSet, NSString, APSConnection, NSMutableSet, NSConditionLock, NSObject, NSData;
@protocol OS_dispatch_queue;

@interface MFAPSManager : NSObject <APSConnectionDelegate, MFDiagnosticsGenerator, MFAPSManager> {
    NSObject<OS_dispatch_queue> *_queue;
    APSConnection *_pushService;
    NSCountedSet *_watchedTopics;
    NSMutableSet *_unwatchedTopics;
    NSConditionLock *_deviceTokenLock;
    NSData *_deviceToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;
+ (Class)APSConnection;

- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void)connect;
- (void)dealloc;
- (id)init;
- (id)copyDiagnosticInformation;
- (id)copyDeviceToken;
- (void)_startAPS_nts;
- (void)_stopAPS_nts;
- (void)startWatchingForTopic:(id)a0;
- (void)stopWatchingForTopic:(id)a0;
- (void)swapTopic:(id)a0 forNewTopic:(id)a1;

@end
