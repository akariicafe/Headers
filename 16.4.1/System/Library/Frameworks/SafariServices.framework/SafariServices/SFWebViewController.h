@class NSUUID, NSString, _SFAuthenticationContext, _SFFormAutoFillController, WBSPermissionDialogThrottler, SFDialogController, WKWebViewConfiguration, WKWebView;
@protocol SFWebViewControllerDelegate;

@interface SFWebViewController : UIViewController <SFFormAutoFillControllerDelegate, WKNavigationDelegatePrivate, WKUIDelegatePrivate, SFDialogControllerDelegate, SFDialogViewControllerPresenting, _SFWebViewDelegate, _WKInputDelegate, _WKWebAuthenticationPanelDelegate, _SFAutoFillContextProviding, SFDialogPresenting> {
    _SFFormAutoFillController *_autoFillController;
    BOOL _didFirstLayout;
    BOOL _didFinishDocumentLoad;
    BOOL _shouldSuppressDialogsThatBlockWebProcess;
    NSString *_domainWhereUserDeclinedAutomaticStrongPassword;
    WBSPermissionDialogThrottler *_permissionDialogThrottler;
}

@property (readonly, nonatomic) WKWebView *webView;
@property (weak, nonatomic) id<SFWebViewControllerDelegate> delegate;
@property (nonatomic, getter=isLoading) BOOL loading;
@property (readonly, nonatomic) BOOL didFirstVisuallyNonEmptyLayout;
@property (readonly, nonatomic) WKWebViewConfiguration *webViewConfiguration;
@property (readonly, nonatomic) SFDialogController *dialogController;
@property (readonly, nonatomic) _SFAuthenticationContext *autoFillAuthenticationContext;
@property (readonly, nonatomic) BOOL didFirstPaint;
@property (readonly, nonatomic) BOOL hasFocusedInputFieldOnCurrentPage;
@property (readonly, nonatomic) BOOL hasFormControlInteraction;
@property (copy, nonatomic) NSUUID *UUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *currentStrongPassword;
@property (readonly, nonatomic) NSString *defaultStrongPassword;
@property (readonly, nonatomic) NSString *alphanumericStrongPassword;

- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didStartProvisionalNavigation:(id)a1;
- (BOOL)sfWebViewShouldFillStringForFind:(id)a0;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)panel:(id)a0 decidePolicyForLocalAuthenticatorWithCompletionHandler:(id /* block */)a1;
- (long long)_webView:(id)a0 dataOwnerForDropSession:(id)a1;
- (void)_webView:(id)a0 willStartInputSession:(id)a1;
- (void)_webView:(id)a0 contextMenuConfigurationForElement:(id)a1 completionHandler:(id /* block */)a2;
- (void)_automaticPasswordInputViewNotification:(id)a0;
- (void)makeStrongPasswordFieldViewableAndEditable:(BOOL)a0;
- (void)_webView:(id)a0 checkUserMediaPermissionForURL:(id)a1 mainFrameURL:(id)a2 frameIdentifier:(unsigned long long)a3 decisionHandler:(id /* block */)a4;
- (void)formAutoFillControllerDidFocusSensitiveFormField:(id)a0;
- (BOOL)sfWebViewCanFindNextOrPrevious:(id)a0;
- (void)_webView:(id)a0 mediaCaptureStateDidChange:(unsigned long long)a1;
- (void)_webView:(id)a0 didChangeSafeAreaShouldAffectObscuredInsets:(BOOL)a1;
- (void)_webView:(id)a0 navigationDidFinishDocumentLoad:(id)a1;
- (void)_webView:(id)a0 didResignInputElementStrongPasswordAppearanceWithUserInfo:(id)a1;
- (void)_webView:(id)a0 requestStorageAccessPanelForDomain:(id)a1 underCurrentDomain:(id)a2 completionHandler:(id /* block */)a3;
- (void)_webViewDidEnterFullscreen:(id)a0;
- (id)_webView:(id)a0 contextMenuContentPreviewForElement:(id)a1;
- (void)_webView:(id)a0 requestGeolocationAuthorizationForURL:(id)a1 frame:(id)a2 decisionHandler:(id /* block */)a3;
- (void)_automaticPasswordInputViewAutoFillContextProviderRequiredNotification:(id)a0;
- (void)webView:(id)a0 didCommitNavigation:(id)a1;
- (BOOL)formAutoFillControllerShouldDisableStreamlinedLogin:(id)a0;
- (void)sfWebViewDidEndFormControlInteraction:(id)a0;
- (void)webViewDidClose:(id)a0;
- (void)_webViewDidEndNavigationGesture:(id)a0 withNavigationToBackForwardListItem:(id)a1;
- (void)_webView:(id)a0 queryPermission:(id)a1 forOrigin:(id)a2 completionHandler:(id /* block */)a3;
- (void)_webView:(id)a0 accessoryViewCustomButtonTappedInFormInputSession:(id)a1;
- (void)_webViewWebProcessDidCrash:(id)a0;
- (BOOL)formAutoFillControllerDidUserDeclineAutomaticStrongPasswordForCurrentDomain:(id)a0;
- (void)webView:(id)a0 didReceiveAuthenticationChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void)_webView:(id)a0 contextMenuForElement:(id)a1 willCommitWithAnimator:(id)a2;
- (void)sfWebViewDidStartFormControlInteraction:(id)a0;
- (void)_webView:(id)a0 didFinishLoadForQuickLookDocumentInMainFrame:(id)a1;
- (BOOL)formAutoFillControllerShouldShowIconsInPasswordPicker:(id)a0;
- (id)permissionDialogThrottler;
- (void)dialogController:(id)a0 dismissViewController:(id)a1 withAdditionalAnimations:(id /* block */)a2;
- (void)sfWebViewDidBecomeFirstResponder:(id)a0;
- (void)_webViewWillEndNavigationGesture:(id)a0 withNavigationToBackForwardListItem:(id)a1;
- (void)formAutoFillControllerGetAuthenticationForAutoFill:(id)a0 completion:(id /* block */)a1;
- (void)presentDialog:(id)a0 sender:(id)a1;
- (void)dialogController:(id)a0 willPresentDialog:(id)a1;
- (void)_webView:(id)a0 decidePolicyForSOAuthorizationLoadWithCurrentPolicy:(long long)a1 forExtension:(id)a2 completionHandler:(id /* block */)a3;
- (void)_webView:(id)a0 requestUserMediaAuthorizationForDevices:(unsigned long long)a1 url:(id)a2 mainFrameURL:(id)a3 decisionHandler:(id /* block */)a4;
- (BOOL)formAutoFillControllerCanPrefillForm:(id)a0;
- (void)_webView:(id)a0 didNegotiateModernTLSForURL:(id)a1;
- (void)panel:(id)a0 selectAssertionResponse:(id)a1 source:(long long)a2 completionHandler:(id /* block */)a3;
- (void)webView:(id)a0 runJavaScriptTextInputPanelWithPrompt:(id)a1 defaultText:(id)a2 initiatedByFrame:(id)a3 completionHandler:(id /* block */)a4;
- (void)panel:(id)a0 dismissWebAuthenticationPanelWithResult:(long long)a1;
- (void)_webView:(id)a0 authenticationChallenge:(id)a1 shouldAllowLegacyTLS:(id /* block */)a2;
- (void)_webView:(id)a0 printFrame:(id)a1;
- (void)dealloc;
- (BOOL)_webView:(id)a0 shouldIncludeAppLinkActionsForElement:(id)a1;
- (void)sfWebViewDidChangeSafeAreaInsets:(id)a0;
- (void)_webView:(id)a0 didStartLoadForQuickLookDocumentInMainFrameWithFileName:(id)a1 uti:(id)a2;
- (void)replaceCurrentPasswordWithPassword:(id)a0;
- (id)formAutoFillControllerURLForFormAutoFill:(id)a0;
- (BOOL)_webView:(id)a0 fileUploadPanelContentIsManagedWithInitiatingFrame:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)webView:(id)a0 didReceiveServerRedirectForProvisionalNavigation:(id)a1;
- (id)_presentingViewControllerForWebView:(id)a0;
- (void)_webView:(id)a0 runWebAuthenticationPanel:(id)a1 initiatedByFrame:(id)a2 completionHandler:(id /* block */)a3;
- (void)_webView:(id)a0 navigation:(id)a1 didSameDocumentNavigation:(long long)a2;
- (void)_webViewDidExitFullscreen:(id)a0;
- (long long)dialogController:(id)a0 presentationPolicyForDialog:(id)a1;
- (long long)_webView:(id)a0 decidePolicyForFocusedElement:(id)a1;
- (void)_webView:(id)a0 willGoToBackForwardListItem:(id)a1 inPageCache:(BOOL)a2;
- (void)performPageLevelAutoFill;
- (long long)_webView:(id)a0 dataOwnerForDragSession:(id)a1;
- (void)formAutoFillControllerUserChoseToUseGeneratedPassword:(id)a0;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_webView:(id)a0 contextMenuDidEndForElement:(id)a1;
- (BOOL)_webView:(id)a0 focusRequiresStrongPasswordAssistance:(id)a1;
- (void)_webView:(id)a0 createWebViewWithConfiguration:(id)a1 forNavigationAction:(id)a2 windowFeatures:(id)a3 completionHandler:(id /* block */)a4;
- (void)webView:(id)a0 runJavaScriptAlertPanelWithMessage:(id)a1 initiatedByFrame:(id)a2 completionHandler:(id /* block */)a3;
- (void)invalidate;
- (void)copyCurrentStrongPassword;
- (void)webView:(id)a0 runJavaScriptConfirmPanelWithMessage:(id)a1 initiatedByFrame:(id)a2 completionHandler:(id /* block */)a3;
- (void)panel:(id)a0 updateWebAuthenticationPanel:(long long)a1;
- (void)_webView:(id)a0 willSubmitFormValues:(id)a1 userObject:(id)a2 submissionHandler:(id /* block */)a3;
- (id)sfWebView:(id)a0 didStartDownload:(id)a1;
- (void)_webView:(id)a0 renderingProgressDidChange:(unsigned long long)a1;
- (void)dialogController:(id)a0 presentViewController:(id)a1 withAdditionalAnimations:(id /* block */)a2;
- (void)panel:(id)a0 requestPINWithRemainingRetries:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)webView:(id)a0 decidePolicyForNavigationResponse:(id)a1 decisionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)_webView:(id)a0 insertTextSuggestion:(id)a1 inInputSession:(id)a2;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 preferences:(id)a2 decisionHandler:(id /* block */)a3;
- (id)_webViewAdditionalContextForStrongPasswordAssistance:(id)a0;
- (void)_webView:(id)a0 contextMenuWillPresentForElement:(id)a1;
- (void)loadView;
- (void)_webView:(id)a0 didStartInputSession:(id)a1;
- (void)_webView:(id)a0 requestNotificationPermissionForSecurityOrigin:(id)a1 decisionHandler:(id /* block */)a2;
- (void)_webView:(id)a0 updatedAppBadge:(id)a1 fromSecurityOrigin:(id)a2;
- (void)_webView:(id)a0 willPerformClientRedirectToURL:(id)a1 delay:(double)a2;
- (void)_webViewDidCancelClientRedirect:(id)a0;
- (void)_webViewDidShowSafeBrowsingWarning:(id)a0;
- (int)_analyticsClient;
- (void)_userDeclinedAutomaticStrongPasswordForCurrentDomainOnTabWithUUID:(id)a0;
- (void)_webView:(id)a0 didPresentFocusedElementViewController:(id)a1;
- (id)initWithWebViewConfiguration:(id)a0;
- (BOOL)sfWebViewCanPromptForAccountSecurityRecommendation;
- (void)willActivateWebViewController;
- (void)willBeginUserInitiatedNavigation;

@end
