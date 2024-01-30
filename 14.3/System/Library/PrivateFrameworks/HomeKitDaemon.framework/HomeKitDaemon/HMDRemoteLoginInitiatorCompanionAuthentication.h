@class ACAccount;

@interface HMDRemoteLoginInitiatorCompanionAuthentication : HMDRemoteLoginInitiatorAuthentication

@property (readonly, nonatomic) ACAccount *account;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (int)loginType;
- (void)_authenticate;
- (void)authenticate;
- (id)initWithSessionID:(id)a0 remoteDevice:(id)a1 workQueue:(id)a2 remoteMessageSender:(id)a3 delegate:(id)a4 account:(id)a5;

@end
