@interface CKFocusStatusAuthorizationManager : NSObject

@property (class, readonly, nonatomic) CKFocusStatusAuthorizationManager *sharedInstance;

@property (nonatomic, getter=isPresentingFocusStatusAuthorizationPrompt) BOOL presentingFocusStatusAuthorizationPrompt;
@property (nonatomic, getter=isPresentingInconsistentFocusStatusAuthorizationPrompt) BOOL presentingInconsistentFocusStatusAuthorizationPrompt;

- (BOOL)deviceSupportsFocusStatusAuthorizationPrompt;
- (void)displayFocusStatusAuthorizationInconsistencyRepairAlertFromViewController:(id)a0;
- (void)displayFocusStatusAuthorizationInconsistencyRepairAlertIfNotPreviouslyShownFromViewController:(id)a0;
- (id)focusStatusPreferencesURL;
- (id)newDNDGlobalConfigurationService;
- (void)notifyDNDFocusStatusAuthorizationChanged;
- (void)presentFocusStatusAuthorizationAlertIfNecessaryFromViewController:(id)a0;
- (void)promptForFocusStatusAuthorizationFromViewController:(id)a0;
- (void)verifyPublishedStatusIsConsistentWithDeniedFocusStatusAuthorizationFromViewController:(id)a0;

@end
