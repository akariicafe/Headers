@class NSString, ACAccount, AMSAuthenticateOptions;
@protocol AMSAuthKitUpdateTaskDelegate;

@interface AMSAuthKitUpdateTask : AMSTask <AKAppleIDAuthenticationDelegate>

@property (weak, nonatomic) id<AMSAuthKitUpdateTaskDelegate> delegate;
@property (readonly, nonatomic) ACAccount *account;
@property (readonly, nonatomic) AMSAuthenticateOptions *options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_updateAccountRawPasswordUsingSecondaryAccounts:(id)a0;

- (BOOL)authenticationController:(id)a0 shouldContinueWithAuthenticationResults:(id)a1 error:(id)a2 forContext:(id)a3;
- (void).cxx_destruct;
- (void)_configureClientInfoForContext:(id)a0;
- (unsigned long long)_authenticationType;
- (BOOL)_canPresentBackgroundPrompt;
- (void)_configureAuthKitContext:(id)a0;
- (void)_configureCompanionDeviceForContext:(id)a0;
- (void)_configureIdentifiersForContext:(id)a0;
- (void)_configureProxyIdentifiersForContext:(id)a0;
- (void)_configureStringsForContext:(id)a0;
- (id)_createAuthKitContext;
- (id)_createAuthKitController;
- (void)_logPromptSummaryForResults:(id)a0 context:(id)a1;
- (id)initWithAccount:(id)a0 options:(id)a1;
- (id)performAuthKitUpdate;

@end
