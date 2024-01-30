@class NSDictionary, NSString;

@interface MPRTCReportingPrepareInternalSessionOperation : MPAsyncOperation

@property (copy, nonatomic) NSDictionary *additionalUserInfo;
@property (copy, nonatomic) NSString *clientName;
@property (nonatomic) int clientType;
@property (nonatomic) long long clientVersion;
@property (retain, nonatomic) id hierarchyToken;
@property (copy, nonatomic) NSString *serviceIdentifier;
@property (nonatomic) long long sessionID;
@property (copy, nonatomic) id /* block */ responseHandler;

+ (BOOL)isRTCReportingSupported;
+ (id)RTCReportingFrameworkPath;
+ (id)newHierarchyTokenFromParentToken:(id)a0;

- (void).cxx_destruct;
- (void)execute;

@end
