@class _SFAutoFillInputView, WBSFormMetadata, NSDictionary, SFAppAutoFillOneTimeCodeProvider, NSMutableIndexSet, _SFAuthenticationContext, UIView, SFFormAutocompleteState, NSString, WBSCreditCardData, NSSet, CNContact, NSTimer, WKWebView, NSMutableSet, NSArray, _WKRemoteObjectInterface, SFFormAutoFillFrameHandle, _SFFormAutoFillInputSession;
@protocol SFFormAutoFillControllerDelegate, WBUFormAutoFillWebView, SFFormAutoFiller;

@interface _SFFormAutoFillController : NSObject <SFCredentialProviderExtensionManagerObserver, _SFAutoFillInputViewDelegate, SFFormMetadataObserver, _SFAuthenticationClient> {
    WKWebView<WBUFormAutoFillWebView> *_webView;
    id<SFFormAutoFillControllerDelegate> _delegate;
    _WKRemoteObjectInterface *_remoteObjectInterface;
    id<SFFormAutoFiller> _autoFiller;
    BOOL _isCurrentlyAuthenticating;
    long long _authenticationType;
    SFFormAutocompleteState *_state;
    NSTimer *_prefillTimer;
    WBSFormMetadata *_unsubmittedForm;
    SFFormAutoFillFrameHandle *_unsubmittedFormFrame;
    NSMutableIndexSet *_uniqueIDsOfFormsThatWereAutoFilled;
    NSMutableSet *_uniqueIDsOfControlsThatWereAutoFilled;
    NSString *_uniqueIDOfFocusedPasswordElementWithAutomaticPassword;
    NSArray *_uniqueIDsOfPasswordElementsForAutomaticPasswords;
    SFFormAutoFillFrameHandle *_frameHandleForAutomaticPasswords;
    _SFFormAutoFillInputSession *_inputSessionForAutomaticPasswords;
    _SFAutoFillInputView *_autoFillInputView;
    NSArray *_preservedLeadingBarButtonGroups;
    NSArray *_preservedTrailingBarButtonGroups;
    BOOL _attemptedOfferingStreamlinedLogin;
    NSDictionary *_externalCredentialIdentitiesForStreamlinedAutoFill;
}

@property (readonly, nonatomic) UIView<WBUFormAutoFillWebView> *webView;
@property (nonatomic) BOOL metadataCorrectionsEnabled;
@property (readonly, nonatomic) _SFAuthenticationContext *authenticationContext;
@property (readonly, nonatomic) SFAppAutoFillOneTimeCodeProvider *oneTimeCodeProvider;
@property (retain, nonatomic) CNContact *lastFilledContact;
@property (retain, nonatomic) WBSCreditCardData *lastFilledCreditCardData;
@property (retain, nonatomic) NSSet *lastFilledCreditCardDataTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_filterAndSortCredentialIdentities:(id)a0 pageURL:(id)a1 exactMatchesOnly:(BOOL)a2;
+ (void)_getExternalLoginCredentialSuggestionsForDomains:(id)a0 completion:(id /* block */)a1;
+ (void)_getExternalLoginCredentialSuggestionsForDomains:(id)a0 pageURL:(id)a1 completion:(id /* block */)a2;

- (void)insertTextSuggestion:(id)a0;
- (void)textDidChangeInTextField:(id)a0 inForm:(id)a1 inFrame:(id)a2;
- (void)automaticPasswordSheetDismissed;
- (void)fillTextField:(id)a0 inFrame:(id)a1 withGeneratedPassword:(id)a2;
- (void)_dismissKeyboardAndSimulateCarriageReturnKeyEvents:(BOOL)a0;
- (void)autoFillForm:(long long)a0 inFrame:(id)a1 withGeneratedPassword:(id)a2;
- (BOOL)_showingAutoFillInputView;
- (void)didUpdateUnsubmittedForm:(id)a0 inFrame:(id)a1;
- (void)_addUniqueIDsOfAutoFilledForm:(id)a0;
- (void)annotateForm:(long long)a0 inFrame:(id)a1 withValues:(id)a2;
- (BOOL)elementIsBeingFocusedForStreamlinedLogin:(id)a0;
- (id)authenticationMessageForContext:(id)a0;
- (void).cxx_destruct;
- (void)offerToSaveUnsubmittedFormDataIfNeeded;
- (void)fetchMetadataForTextField:(id)a0 inFrame:(id)a1 withCompletion:(id /* block */)a2;
- (void)_authenticateForAutoFillForHighLevelDomain:(id)a0 withCompletion:(id /* block */)a1;
- (id)authenticationCustomUIProgressObserverForContext:(id)a0;
- (id)_simulatedWebEventForReturnKeyWithType:(int)a0;
- (void)_fieldFocusedWithInputSession:(id)a0;
- (void)dealloc;
- (void)willSubmitFormValues:(id)a0 userObject:(id)a1 submissionHandler:(id /* block */)a2;
- (BOOL)shouldShowIconsInPasswordPicker;
- (void)prepareForShowingAutomaticStrongPasswordWithInputSession:(id)a0;
- (id)_websiteForAuthenticationPrompt;
- (void)updateSuggestions;
- (void)_removeAutomaticPasswordButtonInitiatedByUser:(BOOL)a0 removeVisualTreatmentOnly:(BOOL)a1;
- (void)fieldWillFocusWithInputSession:(id)a0;
- (void)fieldDidFocusWithInputSession:(id)a0;
- (BOOL)displayMessageAsTitleForContext:(id)a0;
- (void)didRemoveAutomaticStrongPasswordInForm:(id)a0 inputSessionUserObject:(id)a1 inFrame:(id)a2;
- (void)usernameFieldFocused:(id)a0 inForm:(id)a1 inFrame:(id)a2 inputSession:(id)a3;
- (void)fieldFocusedWithInputSession:(id)a0;
- (id)_preFillDisabledHosts;
- (void)autoFillInputViewDidSelectUseKeyboard:(id)a0;
- (void)authenticateForAutoFillAuthenticationType:(long long)a0 withCompletion:(id /* block */)a1;
- (void)didCollectURLsForPreFilling:(id)a0 atURL:(id)a1;
- (void)passwordFieldFocused:(id)a0 inForm:(id)a1 inFrame:(id)a2 inputSession:(id)a3;
- (void)willNavigateFrame:(id)a0 withUnsubmittedForm:(id)a1;
- (void)removeAutomaticPasswordVisualTreatment;
- (void)autoFillDidFinishWithUpdatedFormMetadata:(id)a0 inFrame:(id)a1 shouldSubmit:(BOOL)a2;
- (id)beginAutomaticPasswordInteractionWithInputSession:(id)a0;
- (void)didFillGeneratedPasswordInForm:(id)a0 inFrame:(id)a1;
- (void)_restoreInputAssistantItemsIfNecessary;
- (void)_removeUniqueIDsOfAutoFilledForm:(id)a0;
- (void)prefillFormsSoonIfNeeded;
- (void)didCollectFormMetadataForPreFilling:(id)a0 atURL:(id)a1 ancestorFramesOfFormToPreFill:(id)a2;
- (id)automaticPasswordForPasswordField:(id)a0 inForm:(id)a1 isFrame:(id)a2;
- (void)_didFocusSensitiveFormField;
- (void)textFieldFocused:(id)a0 inForm:(id)a1 inFrame:(id)a2 inputSession:(id)a3;
- (void)beginAutomaticPasswordInteractionWithInputSession:(id)a0 generatedPassword:(id)a1;
- (void)autoFillInputViewDidSelectMorePasswords:(id)a0;
- (id)passcodePromptForContext:(id)a0;
- (void)removeAutomaticPasswordButtonInitiatedByUser:(BOOL)a0;
- (void)autoFill;
- (void)credentialProviderExtensionManagerExtensionListDidChange:(id)a0;
- (void)setFormControls:(id)a0 areAutoFilled:(BOOL)a1 andClearField:(id)a2 inFrame:(id)a3;
- (id)_beginAutomaticPasswordInteractionWithInputSession:(id)a0 generatedPassword:(id)a1 ignorePreviousDecision:(BOOL)a2;
- (void)_fieldFocused:(id)a0 inForm:(id)a1 inFrame:(id)a2 inputSession:(id)a3;
- (void)invalidate;
- (void)autoFillOneTimeCodeFieldsInFrame:(id)a0 withValue:(id)a1;
- (void)_prefillTimerFired:(id)a0;
- (void)_hideInputAssistantItemsIfNecessary;
- (void)willSubmitForm:(id)a0 inFrame:(id)a1 submissionHandler:(id /* block */)a2;
- (void)autoFillFormInFrame:(id)a0 withValues:(id)a1 setAutoFilled:(BOOL)a2 focusFieldAfterFilling:(BOOL)a3 fieldToFocus:(id)a4 submitForm:(BOOL)a5;
- (id)initWithWebView:(id)a0 delegate:(id)a1;

@end
