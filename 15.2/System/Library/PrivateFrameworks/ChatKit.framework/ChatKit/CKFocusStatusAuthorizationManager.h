@interface CKFocusStatusAuthorizationManager : NSObject

@property (class, readonly, nonatomic) CKFocusStatusAuthorizationManager *sharedInstance;

@property (nonatomic, getter=isPresentingFocusStatusAuthorizationPrompt) BOOL presentingFocusStatusAuthorizationPrompt;
@property (nonatomic, getter=isPresentingInconsistentFocusStatusAuthorizationPrompt) BOOL presentingInconsistentFocusStatusAuthorizationPrompt;

- (BOOL)deviceSupportsFocusStatusAuthorizationPrompt;
- (void)promptForFocusStatusAuthorizationFromViewController:(id)a0;
- (void)notifyDNDFocusStatusAuthorizationChanged;
- (void)verifyPublishedStatusIsConsistentWithDeniedFocusStatusAuthorizationFromViewController:(id)a0;
- (id)newDNDGlobalConfigurationService;
- (void)displayFocusStatusAuthorizationInconsistencyRepairAlertIfNotPreviouslyShownFromViewController:(id)a0;
- (void)displayFocusStatusAuthorizationInconsistencyRepairAlertFromViewController:(id)a0;
- (id)focusStatusPreferencesURL;
- (void)presentFocusStatusAuthorizationAlertIfNecessaryFromViewController:(id)a0;

@end
