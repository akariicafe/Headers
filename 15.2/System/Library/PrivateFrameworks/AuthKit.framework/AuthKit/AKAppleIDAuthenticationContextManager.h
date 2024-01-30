@class NSString, NSMutableDictionary, NSObject, AKAppleIDAuthenticationController;
@protocol AKAppleIDAuthenticationDelegate, OS_dispatch_queue;

@interface AKAppleIDAuthenticationContextManager : NSObject <AKAppleIDAuthenticationClientProtocol> {
    NSMutableDictionary *_authContextsByUUID;
    AKAppleIDAuthenticationController *_authController;
    NSObject<OS_dispatch_queue> *_authContextsQueue;
}

@property (weak, nonatomic) id<AKAppleIDAuthenticationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)presentBasicLoginUIForContext:(id)a0 completion:(id /* block */)a1;
- (id)_clientSideContextForServerContext:(id)a0;
- (void)dismissNativeRecoveryUIForContext:(id)a0 completion:(id /* block */)a1;
- (void)dismissBasicLoginUIForContext:(id)a0 completion:(id /* block */)a1;
- (void)presentSecondFactorAlertForContext:(id)a0 withError:(id)a1 title:(id)a2 message:(id)a3 completion:(id /* block */)a4;
- (void)shouldContinueWithAuthenticationResults:(id)a0 error:(id)a1 forContextID:(id)a2 completion:(id /* block */)a3;
- (void)presentSecondFactorUIForContext:(id)a0 completion:(id /* block */)a1;
- (void)legacyAnisetteDataForContext:(id)a0 DSID:(id)a1 withCompletion:(id /* block */)a2;
- (void)eraseAnisetteForContext:(id)a0 withCompletion:(id /* block */)a1;
- (void)dismissKeepUsingUIForContext:(id)a0 withCompletion:(id /* block */)a1;
- (void)provisionAnisetteForContext:(id)a0 withCompletion:(id /* block */)a1;
- (void)dismissSecondFactorUIForContext:(id)a0 completion:(id /* block */)a1;
- (void)dismissServerProvidedUIForContext:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithAuthenticationController:(id)a0;
- (void)unregisterContext:(id)a0;
- (void)presentLoginAlertForContext:(id)a0 withError:(id)a1 title:(id)a2 message:(id)a3 completion:(id /* block */)a4;
- (void)presentBiometricOrPasscodeValidationForContext:(id)a0 completion:(id /* block */)a1;
- (void)presentServerProvidedUIForContext:(id)a0 withConfiguration:(id)a1 completion:(id /* block */)a2;
- (void)launchOutOfProcessAuthentication:(id)a0 surrogateID:(id)a1 withErrorHandler:(id /* block */)a2;
- (id)registerContext:(id)a0;
- (void)presentKeepUsingUIForContext:(id)a0 appleID:(id)a1 completion:(id /* block */)a2;
- (void)syncAnisetteForContext:(id)a0 withSIMData:(id)a1 completion:(id /* block */)a2;
- (void)fetchAnisetteDataForContext:(id)a0 provisionIfNecessary:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)presentNativeRecoveryUIForContext:(id)a0 recoveryContext:(id)a1 completion:(id /* block */)a2;

@end
