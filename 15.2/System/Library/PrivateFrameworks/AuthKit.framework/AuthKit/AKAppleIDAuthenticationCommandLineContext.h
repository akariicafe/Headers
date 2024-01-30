@class NSString, AKCommandLineUtilities, NSNumber, NSDate;

@interface AKAppleIDAuthenticationCommandLineContext : AKAppleIDAuthenticationContext <AKAppleIDServerAuthenticationUIProvider>

@property (retain, nonatomic) NSString *securityCode;
@property (readonly, nonatomic) AKCommandLineUtilities *utility;
@property (readonly, nonatomic) NSString *rootPath;
@property (copy, nonatomic) NSNumber *secondFactorCode;
@property (readonly, nonatomic) long long verificationType;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSDate *birthday;
@property (nonatomic) BOOL termsAccepted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setNeedsNewAppleID:(BOOL)a0;
- (id)initWithVerificationType:(long long)a0;
- (id)_promptForUsername;
- (id)_promptForPassword;
- (void)_presentServerUISecondFactorWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)_beginDataTaskWithRequest:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;
- (id)_parseHeaderTitleForPasscodeView:(id)a0;
- (id)_promptForVerificationCodeWithSecureEntry:(BOOL)a0 forTrustedNumber:(id)a1;
- (id)_xmlUIRequestForURL:(id)a0 withPostbackDictionary:(id)a1;
- (void)_verifySecondFactorCodeWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)_handleServerUIBirthdayVerificationWithResponseDictionary:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;
- (void)_handleServerUISMSVerificationWithResponseDictionary:(id)a0 statusCode:(long long)a1 configuration:(id)a2 completion:(id /* block */)a3;
- (id)_accountCreationRequestBodyFromResponseDictionary:(id)a0 shouldIncludePhoneNumber:(BOOL)a1 shouldIncludeForSecurityCode:(BOOL)a2;
- (void)_handleServerUIPasswordVerificationWithResponseDictionary:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;
- (id)_promptUserForTermsWithResponseDictionary:(id)a0;
- (void)_handleServerUIPhoneVerificationWithResponseDictionary:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;
- (void)_collectAndPostSecondFactorCodeWithRequestBody:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;
- (id)_jsonPostbackDictionaryForCode:(id)a0 numberId:(id)a1;
- (id)_accountDictionary;
- (id)_promptUserForSelectionWithTrustedNumbers:(id)a0;
- (void)_collectAndHandleTermsAndConditionsWithResponseDictionary:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;
- (id)_createContextDictionaryFromResponse:(id)a0;
- (id)_promptForPhoneNumber;
- (id)_promptForFirstName;
- (id)_promptForLastName;
- (id)_parseTrustedPhoneNumberFromResponseDictionary:(id)a0;
- (id)_promptForBirthday;
- (void)_handleServerUIWithDictionary:(id)a0 statusCode:(long long)a1 configuration:(id)a2 completion:(id /* block */)a3;
- (id)_xmlUIRequestForURL:(id)a0 withServerInfo:(id)a1;
- (void)_handleServerUISecondFactorWithObjectModel:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (unsigned long long)_capabilityForUIDisplay;
- (id)init;
- (id)_rootPath;
- (void)presentBasicLoginUIWithCompletion:(id /* block */)a0;
- (void)dismissBasicLoginUIWithCompletion:(id /* block */)a0;
- (void)presentLoginAlertWithError:(id)a0 title:(id)a1 message:(id)a2 completion:(id /* block */)a3;
- (void)presentSecondFactorUIWithCompletion:(id /* block */)a0;
- (void)dismissSecondFactorUIWithCompletion:(id /* block */)a0;
- (void)presentSecondFactorAlertWithError:(id)a0 title:(id)a1 message:(id)a2 completion:(id /* block */)a3;
- (void)presentServerProvidedUIWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)dismissServerProvidedUIWithCompletion:(id /* block */)a0;

@end
