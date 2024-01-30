@class NSNumber, NSString;

@interface AKAppleIDAuthenticationCommandLineContext : AKAppleIDAuthenticationContext <AKAppleIDServerAuthenticationUIProvider>

@property (nonatomic) long long verificationType;
@property (copy, nonatomic) NSNumber *secondFactorCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_mutableJSONRequestForPath:(id)a0;
- (void)presentServerProvidedUIWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)_handleServerUISMSSecondFactorWithDictionary:(id)a0 statusCode:(long long)a1 configuration:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)_presentServerUISecondFactorWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (id)_mutableJSONRequestForURL:(id)a0;
- (unsigned long long)_capabilityForUIDisplay;
- (void)_collectAndPostSecondFactorCodeForTrustedNumber:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;
- (id)initWithVerificationType:(long long)a0;
- (id)_xmlUIRequestForURL:(id)a0 withPostbackDictionary:(id)a1;
- (void)_verifySecondFactorCodeWithRequest:(id)a0 completion:(id /* block */)a1;
- (id)_promptForVerificationCodeWithSecureEntry:(BOOL)a0;
- (void)dismissSecondFactorUIWithCompletion:(id /* block */)a0;
- (void)presentSecondFactorAlertWithError:(id)a0 title:(id)a1 message:(id)a2 completion:(id /* block */)a3;
- (void)_handleServerUISecondFactorWithObjectModel:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;
- (id)_promptUserForSelectionWithTrustedNumbers:(id)a0;
- (void)presentBasicLoginUIWithCompletion:(id /* block */)a0;
- (id)_jsonDictionaryForData:(id)a0 error:(id)a1;
- (void)presentLoginAlertWithError:(id)a0 title:(id)a1 message:(id)a2 completion:(id /* block */)a3;
- (id)_jsonPostbackDictionaryForCode:(id)a0 numberId:(id)a1;
- (void)dismissServerProvidedUIWithCompletion:(id /* block */)a0;
- (void)dismissBasicLoginUIWithCompletion:(id /* block */)a0;
- (void)presentSecondFactorUIWithCompletion:(id /* block */)a0;
- (id)_parseHeaderTitleForPasscodeView:(id)a0;
- (void)_beginDataTaskWithRequest:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;
- (id)_xmlUIRequestForURL:(id)a0 withServerInfo:(id)a1;

@end
