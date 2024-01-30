@class NSString, NSXPCConnection;

@interface POServiceLoginManagerConnection : NSObject <POServiceLoginManagerProtocol>

@property (retain) NSXPCConnection *xpcConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)xpcQueue;

- (BOOL)_connectToService;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)isUserRegisteredWithCompletion:(id /* block */)a0;
- (void)attestKey:(long long)a0 clientDataHash:(id)a1 completion:(id /* block */)a2;
- (void)copyDeviceAttestationCertificateWithCompletion:(id /* block */)a0;
- (void)deviceRegistrationsNeedsRepairWithCompletion:(id /* block */)a0;
- (void)isDeviceRegisteredWithCompletion:(id /* block */)a0;
- (void)loginConfigurationWithCompletion:(id /* block */)a0;
- (void)loginUserNameWithCompletion:(id /* block */)a0;
- (void)presentRegistrationViewControllerWithCompletion:(id /* block */)a0;
- (void)registrationTokenWithCompletion:(id /* block */)a0;
- (void)resetKeysWithCompletion:(id /* block */)a0;
- (void)secIdentityProxyEndpointForKeyType:(long long)a0 completion:(id /* block */)a1;
- (void)secKeyProxyEndpointForKeyType:(long long)a0 completion:(id /* block */)a1;
- (void)setCertificateData:(id)a0 keyType:(long long)a1 completion:(id /* block */)a2;
- (void)setLoginConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)setLoginUserName:(id)a0 completion:(id /* block */)a1;
- (void)setRegistrationToken:(id)a0 completion:(id /* block */)a1;
- (void)setSsoTokens:(id)a0 completion:(id /* block */)a1;
- (void)ssoTokensWithCompletion:(id /* block */)a0;
- (void)userNeedsReauthenticationWithCompletion:(id /* block */)a0;
- (void)userRegistrationsNeedsRepairWithCompletion:(id /* block */)a0;

@end
