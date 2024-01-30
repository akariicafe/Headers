@class NSDictionary;

@interface HMDRemoteLoginInitiatorProxyAuthentication : HMDRemoteLoginInitiatorAuthentication

@property (readonly, nonatomic) NSDictionary *authResults;

+ (id)logCategory;

- (void)_authenticate;
- (id)description;
- (void).cxx_destruct;
- (void)dealloc;
- (int)loginType;
- (id)initWithSessionID:(id)a0 remoteDevice:(id)a1 workQueue:(id)a2 remoteMessageSender:(id)a3 delegate:(id)a4 authResults:(id)a5;
- (void)authenticate;

@end
