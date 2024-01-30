@class NSString, HMDRemoteLoginAnisetteDataProviderBridge, HMDRemoteLoginMessageSender, HMDRemoteLoginInitiatorSession;

@interface HMDRemoteLoginInitiator : HMDRemoteLoginBase <HMDRemoteLoginInitiatorAuthenticationDelegate>

@property (retain, nonatomic) HMDRemoteLoginInitiatorSession *loginSession;
@property (retain, nonatomic) HMDRemoteLoginAnisetteDataProviderBridge *anisetteProviderBridge;
@property (retain, nonatomic) HMDRemoteLoginMessageSender *remoteMessageSender;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (BOOL)hasMessageReceiverChildren;

- (void).cxx_destruct;
- (void)registerForMessages;
- (void)_callCompletion:(id)a0 loggedInAccount:(id)a1 authSession:(id)a2;
- (void)_companionLoginWithSessionID:(id)a0 account:(id)a1 remoteDevice:(id)a2 completion:(id /* block */)a3;
- (void)_handleProxyDeviceResponse:(id)a0 error:(id)a1 message:(id)a2;
- (void)_handleRemoteLoginCompanionAuthentication:(id)a0;
- (void)_handleRemoteLoginProxiedDevice:(id)a0;
- (void)_handleRemoteLoginProxyAuthentication:(id)a0;
- (void)_handleRemoteLoginSignout:(id)a0;
- (void)_handleSignoutResponse:(id)a0 error:(id)a1 message:(id)a2;
- (void)_proxyLoginWithSessionID:(id)a0 authResults:(id)a1 remoteDevice:(id)a2 completion:(id /* block */)a3;
- (void)_resetCurrentSession:(id)a0;
- (void)configureWithWorkQueue:(id)a0 messageDispatcher:(id)a1;
- (void)didCompleteAuthentication:(id)a0 error:(id)a1 loggedInAccount:(id)a2;
- (id)initWithUUID:(id)a0 accessory:(id)a1 remoteLoginHandler:(id)a2;
- (id)messageReceiverChildren;

@end
