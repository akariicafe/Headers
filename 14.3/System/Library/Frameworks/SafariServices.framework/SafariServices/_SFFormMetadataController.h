@class _SFWebProcessPlugInPageController, NSString, NSDictionary, WKWebProcessPlugInFrame, WKWebProcessPlugInScriptWorld, WBSFormMetadata;
@protocol SFFormMetadataObserver;

@interface _SFFormMetadataController : WBSFormMetadataController <WKWebProcessPlugInFormDelegatePrivate> {
    WKWebProcessPlugInScriptWorld *_scriptWorld;
    _SFWebProcessPlugInPageController *_pageController;
    id<SFFormMetadataObserver> _observer;
    NSDictionary *_assistedNodeMetadata;
    BOOL _shouldListenForFormChanges;
    WBSFormMetadata *_unsubmittedForm;
    WKWebProcessPlugInFrame *_unsubmittedFormFrame;
    BOOL _autoFillInProgress;
    BOOL _focusingFormForStreamlinedLogin;
}

@property (readonly, nonatomic) WKWebProcessPlugInScriptWorld *scriptWorld;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_webProcessPlugInBrowserContextController:(id)a0 willSendSubmitEventToForm:(id)a1 inFrame:(id)a2 targetFrame:(id)a3 values:(id)a4;
- (void).cxx_destruct;
- (void)clearField:(id)a0 inFrame:(id)a1;
- (id)initWithPageController:(id)a0;
- (void)_webProcessPlugInBrowserContextController:(id)a0 textDidChangeInTextField:(id)a1 inFrame:(id)a2 initiatedByUserTyping:(BOOL)a3;
- (void)dealloc;
- (void)_collectFormMetadataForPreFilling:(BOOL)a0;
- (void)passwordFieldFocused:(id)a0 inFrame:(id)a1 isPasswordFieldForUserCredentials:(BOOL)a2;
- (void)collectURLsForPreFilling;
- (void)_willNavigateFrameWithUnsubmittedForm:(id)a0;
- (id)_webProcessPlugInBrowserContextController:(id)a0 willSubmitForm:(id)a1 toFrame:(id)a2 fromFrame:(id)a3 withValues:(id)a4;
- (void)focusFormForStreamlinedLogin:(double)a0 inFrame:(id)a1;
- (void)removeAutomaticPasswordElementsInFrame:(id)a0 focusedPasswordControlUniqueID:(id)a1 passwordControlUniqueIDs:(id)a2 blurAfterRemoval:(BOOL)a3;
- (id)fillForm:(double)a0 inFrame:(id)a1 withPassword:(id)a2 focusedFieldControlID:(id)a3;
- (void)finishedAutoFillingForm:(id)a0 inFrame:(id)a1 shouldSubmit:(BOOL)a2;
- (BOOL)shouldIncludeNonEmptyFields;
- (void)autoFillFormInFrame:(id)a0 withValues:(id)a1 fillSynchronously:(BOOL)a2 setAutoFilled:(BOOL)a3 selectFieldAfterFilling:(id)a4;
- (id)_assistedNodeMetadataWithPasswordField:(id)a0 passwordFieldMetadata:(id)a1 formMetadata:(id)a2 inFrame:(id)a3;
- (void)creditCardFieldFocused:(id)a0 inFrame:(id)a1;
- (id)_webProcessPlugInBrowserContextController:(id)a0 willBeginInputSessionForElement:(id)a1 inFrame:(id)a2 userIsInteracting:(BOOL)a3;
- (void)clearScriptWorld;
- (void)collectMetadataForTextField:(id)a0 inFrame:(id)a1 completionHandler:(id /* block */)a2;
- (void)collectFormMetadataForPreFilling;
- (BOOL)_formContainsAutoFilledElements:(id)a0;
- (void)didFindSearchURLTemplateString:(id)a0 inFrame:(id)a1 pageController:(id)a2;
- (void)didStartProvisionalLoadForFrame:(id)a0;
- (void)didSameDocumentNavigation:(long long)a0 inFrame:(id)a1;
- (void)usernameFieldFocused:(id)a0 fieldMetadata:(id)a1 inForm:(id)a2 inFrame:(id)a3;
- (BOOL)_webProcessPlugInBrowserContextControllerShouldNotifyOnFormChanges:(id)a0;
- (id)formAutoFillNodeForJSWrapper:(struct OpaqueJSValue { } *)a0 inContext:(struct OpaqueJSContext { } *)a1;
- (void)autoFillFormInFrame:(id)a0 withValues:(id)a1 fillSynchronously:(BOOL)a2 setAutoFilled:(BOOL)a3 focusFieldAfterFilling:(BOOL)a4 fieldToFocus:(id)a5 submitForm:(BOOL)a6;
- (void)removeAutomaticPasswordVisualTreatmentInFrame:(id)a0 passwordControlUniqueIDs:(id)a1;
- (void)invalidate;
- (id)_observer;

@end
