@class NSString, UIWebView;

@interface UIWebViewWebViewDelegate : NSObject <WebFrameLoadDelegate, WebPolicyDelegate, WebResourceLoadDelegate, WebUIDelegate> {
    UIWebView *uiWebView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_clearUIWebView;
- (void)webView:(id)a0 decidePolicyForMIMEType:(id)a1 request:(id)a2 frame:(id)a3 decisionListener:(id)a4;
- (id)initWithUIWebView:(id)a0;
- (id)webThreadWebView:(id)a0 resource:(id)a1 willSendRequest:(id)a2 redirectResponse:(id)a3 fromDataSource:(id)a4;
- (id)webView:(id)a0 connectionPropertiesForResource:(id)a1 dataSource:(id)a2;
- (id)webView:(id)a0 createWebViewWithRequest:(id)a1;
- (void)webView:(id)a0 decidePolicyForGeolocationRequestFromOrigin:(id)a1 frame:(id)a2 listener:(id)a3;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 request:(id)a2 frame:(id)a3 decisionListener:(id)a4;
- (void)webView:(id)a0 decidePolicyForNewWindowAction:(id)a1 request:(id)a2 newFrameName:(id)a3 decisionListener:(id)a4;
- (void)webView:(id)a0 didChangeLocationWithinPageForFrame:(id)a1;
- (void)webView:(id)a0 didClearWindowObject:(id)a1 forFrame:(id)a2;
- (void)webView:(id)a0 didCommitLoadForFrame:(id)a1;
- (void)webView:(id)a0 didFailLoadWithError:(id)a1 forFrame:(id)a2;
- (void)webView:(id)a0 didFailProvisionalLoadWithError:(id)a1 forFrame:(id)a2;
- (void)webView:(id)a0 didFinishLoadForFrame:(id)a1;
- (void)webView:(id)a0 didFirstLayoutInFrame:(id)a1;
- (void)webView:(id)a0 didReceiveServerRedirectForProvisionalLoadForFrame:(id)a1;
- (void)webView:(id)a0 didReceiveTitle:(id)a1 forFrame:(id)a2;
- (void)webView:(id)a0 didStartProvisionalLoadForFrame:(id)a1;
- (void)webView:(id)a0 exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)a1 totalSpaceNeeded:(unsigned long long)a2;
- (void)webView:(id)a0 frame:(id)a1 exceededDatabaseQuotaForSecurityOrigin:(id)a2 database:(id)a3;
- (id)webView:(id)a0 identifierForInitialRequest:(id)a1 fromDataSource:(id)a2;
- (void)webView:(id)a0 printFrameView:(id)a1;
- (BOOL)webView:(id)a0 resource:(id)a1 canAuthenticateAgainstProtectionSpace:(id)a2 forDataSource:(id)a3;
- (void)webView:(id)a0 resource:(id)a1 didCancelAuthenticationChallenge:(id)a2 fromDataSource:(id)a3;
- (void)webView:(id)a0 resource:(id)a1 didFailLoadingWithError:(id)a2 fromDataSource:(id)a3;
- (void)webView:(id)a0 resource:(id)a1 didFinishLoadingFromDataSource:(id)a2;
- (void)webView:(id)a0 resource:(id)a1 didReceiveAuthenticationChallenge:(id)a2 fromDataSource:(id)a3;
- (void)webView:(id)a0 runJavaScriptAlertPanelWithMessage:(id)a1 initiatedByFrame:(id)a2;
- (BOOL)webView:(id)a0 runJavaScriptConfirmPanelWithMessage:(id)a1 initiatedByFrame:(id)a2;
- (id)webView:(id)a0 runJavaScriptTextInputPanelWithPrompt:(id)a1 defaultText:(id)a2 initiatedByFrame:(id)a3;
- (void)webView:(id)a0 unableToImplementPolicyWithError:(id)a1 frame:(id)a2;
- (void)webViewClose:(id)a0;
- (void)webViewSupportedOrientationsUpdated:(id)a0;

@end
