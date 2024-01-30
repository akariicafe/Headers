@protocol HMDRemoteLoginInitiatorAuthenticationDelegate;

@interface HMDRemoteLoginInitiatorAuthentication : HMDRemoteLoginAuthentication

@property (readonly, weak, nonatomic) id<HMDRemoteLoginInitiatorAuthenticationDelegate> delegate;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_handleAuthenticationResponse:(id)a0 error:(id)a1;
- (void)authenticate;
- (id)initWithSessionID:(id)a0 remoteDevice:(id)a1 workQueue:(id)a2 remoteMessageSender:(id)a3 delegate:(id)a4;
- (int)loginType;

@end
