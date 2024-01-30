@class WKWebViewConfiguration;

@interface SFWebExtension : WBSWebExtensionData {
    id /* block */ _accessRequestDialogCompletionHandler;
    BOOL _isAccessRequestDialogPresentedOrScheduled;
    BOOL _isBannerShownOrScheduled;
}

@property (readonly, nonatomic) WKWebViewConfiguration *extensionWebViewConfiguration;
@property (readonly, nonatomic) BOOL isDevelopmentBuild;

- (BOOL)_applicationIsActive;
- (id)webView:(id)a0 createWebViewWithConfiguration:(id)a1 forNavigationAction:(id)a2 windowFeatures:(id)a3;
- (void).cxx_destruct;
- (id)_backgroundWebViewConfiguration;
- (BOOL)_canShowBanner;
- (void)_compileDeclarativeNetRequestRules:(id)a0 completionHandler:(id /* block */)a1;
- (void)_hidePermissionBanner;
- (id)_lastInteractionDate;
- (void)_showAccessRequestDialogForPendingRequestsAndAdditionalURLs:(id)a0 additionalCallingAPIName:(id)a1 performingUserGestureInTab:(id)a2 completionHandler:(id /* block */)a3;
- (id)_updateLastInteractionDate;
- (BOOL)canLoadWithErrorString:(id *)a0;
- (void)checkPermissionAndPromptIfNecessaryToAccessURLs:(id)a0 inTab:(id)a1 options:(unsigned long long)a2 callingAPIName:(id)a3 completionHandler:(id /* block */)a4;
- (void)permissionRequestBannerWasDismissed;
- (void)requestPermissionsFromToolbarItemInTab:(id)a0 completionHandler:(id /* block */)a1;
- (void)showAlertForPendingPermissionRequests;
- (void)showOrHidePermissionRequestBannerIfNeeded;
- (void)userGesturePerformedInTab:(id)a0;

@end
