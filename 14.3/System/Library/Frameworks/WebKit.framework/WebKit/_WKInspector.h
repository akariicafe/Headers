@class NSString, WKWebView;

@interface _WKInspector : NSObject <WKObject> {
    struct ObjectStorage<WebKit::WebInspectorProxy> { struct type { unsigned char __lx[64]; } data; } _inspector;
}

@property (readonly, nonatomic) WKWebView *webView;
@property (readonly, nonatomic) BOOL isConnected;
@property (readonly, nonatomic) BOOL isVisible;
@property (readonly, nonatomic) BOOL isFront;
@property (readonly, nonatomic) BOOL isProfilingPage;
@property (readonly, nonatomic) BOOL isElementSelectionActive;
@property (readonly) struct Object { void /* function */ **x0; id x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connect;
- (void)detach;
- (void)_browserExtensionsEnabled:(id)a0;
- (void)showConsole;
- (void)show;
- (void)close;
- (void)showResources;
- (void)_setDiagnosticLoggingDelegate:(id)a0;
- (void)printErrorToConsole:(id)a0;
- (void)showMainResourceForFrame:(id)a0;
- (void)_browserExtensionsDisabled:(id)a0;
- (id)inspectorWebView;
- (void)attach;
- (void)hide;
- (void)toggleElementSelection;
- (void)togglePageProfiling;

@end
