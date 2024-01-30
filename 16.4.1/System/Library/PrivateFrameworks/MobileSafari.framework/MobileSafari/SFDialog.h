@class NSArray, SFDialogController;

@interface SFDialog : NSObject {
    BOOL _completed;
}

@property (readonly, copy, nonatomic) NSArray *additionalCancellationExemptions;
@property (readonly, nonatomic) BOOL canceledOnApplicationBackground;
@property (weak, nonatomic) SFDialogController *dialogController;
@property (readonly, nonatomic) BOOL canceledOnProvisionalNavigation;
@property (readonly, nonatomic) BOOL canceledOnCommittedNavigation;
@property (readonly, nonatomic) BOOL completionHandlerBlocksWebProcess;
@property (readonly, nonatomic) long long presentationStyle;
@property (readonly, nonatomic) BOOL shouldIgnoreGlobalModalUIDisplayPolicy;

+ (id)_appLinkRedirectDialogWithMessage:(id)a0 completionHandler:(id /* block */)a1;
+ (id)_dialogWithTitle:(id)a0 message:(id)a1 acceptAction:(id)a2 secondaryAction:(id)a3 cancelAction:(id)a4 applicationModal:(BOOL)a5 completionHandler:(id /* block */)a6;
+ (id)_dialogWithTitle:(id)a0 message:(id)a1 primaryAction:(id)a2 secondaryAction:(id)a3 applicationModal:(BOOL)a4 completionHandler:(id /* block */)a5;
+ (id)authenticationDialogWithAuthenticationChallenge:(id)a0 committedURL:(id)a1 completionHandler:(id /* block */)a2;
+ (id)authenticatorDialogForPanel:(id)a0 dialogController:(id)a1;
+ (id)blockedPopupWindowDialogWithCompletionHandler:(id /* block */)a0;
+ (id)continuePrintingDialogWithTitle:(id)a0 message:(id)a1 applicationModal:(BOOL)a2 completionHandler:(id /* block */)a3;
+ (id)dialogWithWebUIAlert:(id)a0 completionHandler:(id /* block */)a1;
+ (id)formSubmissionDialogWithMessage:(id)a0 completionHandler:(id /* block */)a1;
+ (id)genericErrorDialogWithTitle:(id)a0 message:(id)a1 applicationModal:(BOOL)a2;
+ (id)increaseApplicationCacheQuotaDialogForOrigin:(id)a0 newQuota:(long long)a1 completionHandler:(id /* block */)a2;
+ (id)increaseDatabaseQuotaDialogForOrigin:(id)a0 newQuota:(long long)a1 completionHandler:(id /* block */)a2;
+ (id)javaScriptAlertDialogWithMessage:(id)a0 completionHandler:(id /* block */)a1;
+ (id)javaScriptConfirmDialogWithMessage:(id)a0 completionHandler:(id /* block */)a1;
+ (id)javaScriptPromptDialogWithMessage:(id)a0 defaultText:(id)a1 completionHandler:(id /* block */)a2;
+ (id)noFeedAppDialogWithCompletionHandler:(id /* block */)a0;
+ (id)pageLoadErrorWithMessage:(id)a0;
+ (id)permanentlyAcceptCertificateDialogWithAcceptanceHandler:(id /* block */)a0;
+ (id)printBlockedDialogWithCompletionHandler:(id /* block */)a0;
+ (id)redirectDialogWithMessage:(id)a0 completionHandler:(id /* block */)a1;
+ (id)requestStorageAccessDialogForDomain:(id)a0 underCurrentDomain:(id)a1 completionHandler:(id /* block */)a2;
+ (id)telephonyNavigationDialogWithCompletionHandler:(id /* block */)a0;
+ (id)userMediaPermissionDialogWithHost:(id)a0 devices:(id)a1 completionHandler:(id /* block */)a2;
+ (id)webExtensionAlwaysAllowDialogWithExtension:(id)a0 domains:(id)a1 includeDenyButton:(BOOL)a2 completionHandler:(id /* block */)a3;
+ (id)webExtensionDisabledBecauseItRequestsAdditionalPermissionsDialogForExtension:(id)a0 completionHandler:(id /* block */)a1;
+ (id)webExtensionPermissionDialogWithExtension:(id)a0 domains:(id)a1 callingAPIName:(id)a2 showMoreOptionsForAlwaysAllow:(BOOL)a3 includeDenyButton:(BOOL)a4 completionHandler:(id /* block */)a5;
+ (id)websiteLocationDialogForURL:(id)a0 preciseLocation:(BOOL)a1 completionHandler:(id /* block */)a2;

- (void).cxx_destruct;
- (void)completeWithResponse:(id)a0;
- (void)didCompleteWithResponse:(id)a0;
- (id)newDialogViewRepresentation;
- (id)newViewControllerRepresentationWithCompletionHandler:(id /* block */)a0;

@end
