@interface ICAuthentication : NSObject

@property (class, readonly, nonatomic) ICAuthentication *shared;

@property (retain, nonatomic) id currentAuthenticationController;
@property (readonly, nonatomic, getter=isAuthenticating) BOOL authenticating;

- (void).cxx_destruct;
- (void)authenticateBiometricsWithPrompt:(id)a0 displayWindow:(id)a1 completionHandler:(id /* block */)a2;
- (void)authenticateCloudPasswordWithPrompt:(id)a0 displayWindow:(id)a1 completionHandler:(id /* block */)a2;
- (void)authenticateCustomPasswordWithPrompt:(id)a0 displayWindow:(id)a1 completionHandler:(id /* block */)a2;
- (void)authenticateDevicePasswordWithPrompt:(id)a0 displayWindow:(id)a1 completionHandler:(id /* block */)a2;
- (void)authenticateWithPrompt:(id)a0 displayWindow:(id)a1 completionHandler:(id /* block */)a2;
- (void)didAuthenticateBiometricsWithPrompt:(id)a0 error:(id)a1 displayWindow:(id)a2 completionHandler:(id /* block */)a3;
- (void)didAuthenticateCloudPasswordWithPrompt:(id)a0 result:(unsigned long long)a1 displayWindow:(id)a2 completionHandler:(id /* block */)a3;
- (void)didAuthenticateCustomPasswordWithPrompt:(id)a0 result:(unsigned long long)a1 displayWindow:(id)a2 completionHandler:(id /* block */)a3;
- (void)didAuthenticateDevicePasswordWithPrompt:(id)a0 error:(id)a1 displayWindow:(id)a2 completionHandler:(id /* block */)a3;
- (void)didAuthenticateWithPrompt:(id)a0 result:(unsigned long long)a1 displayWindow:(id)a2 completionHandler:(id /* block */)a3;
- (void)requestAllowBiometricsIfNeededForAccount:(id)a0 completionHandler:(id /* block */)a1;
- (void)setBiometricsEnabled:(BOOL)a0 account:(id)a1;
- (void)setCustomPasswordWithPrompt:(id)a0 displayWindow:(id)a1 completionHandler:(id /* block */)a2;
- (void)updateUserRecordForAccount:(id)a0 completionHandler:(id /* block */)a1;

@end
