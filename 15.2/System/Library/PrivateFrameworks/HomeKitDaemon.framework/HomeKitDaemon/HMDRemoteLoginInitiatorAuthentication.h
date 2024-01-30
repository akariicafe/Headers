@protocol HMDRemoteLoginInitiatorAuthenticationDelegate;

@interface HMDRemoteLoginInitiatorAuthentication : HMDRemoteLoginAuthentication

@property (readonly, weak, nonatomic) id<HMDRemoteLoginInitiatorAuthenticationDelegate> delegate;

+ (id)logCategory;

- (void).cxx_destruct;
- (int)loginType;
- (void)authenticate;
- (void)_handleAuthenticationResponse:(id)a0 error:(id)a1;
- (id)initWithSessionID:(id)a0 remoteDevice:(id)a1 workQueue:(id)a2 remoteMessageSender:(id)a3 delegate:(id)a4;

@end
