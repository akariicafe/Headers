@interface WebDefaultFrameLoadDelegate : NSObject

+ (id)sharedFrameLoadDelegate;

- (void)webView:(id)a0 willPerformClientRedirectToURL:(id)a1 delay:(double)a2 fireDate:(id)a3 forFrame:(id)a4;
- (void)webView:(id)a0 didCancelClientRedirectForFrame:(id)a1;
- (void)webView:(id)a0 didChangeLocationWithinPageForFrame:(id)a1;
- (void)webView:(id)a0 didClearWindowObject:(id)a1 forFrame:(id)a2;
- (void)webView:(id)a0 didCommitLoadForFrame:(id)a1;
- (void)webView:(id)a0 didCreateJavaScriptContext:(id)a1 forFrame:(id)a2;
- (void)webView:(id)a0 didFailLoadWithError:(id)a1 forFrame:(id)a2;
- (void)webView:(id)a0 didFailProvisionalLoadWithError:(id)a1 forFrame:(id)a2;
- (void)webView:(id)a0 didFinishLoadForFrame:(id)a1;
- (void)webView:(id)a0 didFirstLayoutInFrame:(id)a1;
- (void)webView:(id)a0 didFirstVisuallyNonEmptyLayoutInFrame:(id)a1;
- (void)webView:(id)a0 didReceiveServerRedirectForProvisionalLoadForFrame:(id)a1;
- (void)webView:(id)a0 didReceiveTitle:(id)a1 forFrame:(id)a2;
- (void)webView:(id)a0 didStartProvisionalLoadForFrame:(id)a1;
- (void)webView:(id)a0 willCloseFrame:(id)a1;
- (void)webView:(id)a0 windowScriptObjectAvailable:(id)a1;
- (void)webView:(id)a0 didClearInspectorWindowObject:(id)a1 forFrame:(id)a2;
- (void)webView:(id)a0 didClearWindowObjectForFrame:(id)a1 inScriptWorld:(id)a2;
- (void)webView:(id)a0 didDetectXSS:(id)a1;
- (void)webView:(id)a0 didFinishDocumentLoadForFrame:(id)a1;
- (void)webView:(id)a0 didHandleOnloadEventsForFrame:(id)a1;
- (void)webView:(id)a0 didLayout:(unsigned long long)a1;
- (void)webView:(id)a0 didPopStateWithinPageForFrame:(id)a1;
- (void)webView:(id)a0 didPushStateWithinPageForFrame:(id)a1;
- (void)webView:(id)a0 didRemoveFrameFromHierarchy:(id)a1;
- (void)webView:(id)a0 didReplaceStateWithinPageForFrame:(id)a1;
- (void)webView:(id)a0 didRunInsecureContent:(id)a1;
- (void)webViewDidDisplayInsecureContent:(id)a0;

@end
