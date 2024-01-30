@class NSString, WKWebView;
@protocol _WKInspectorDelegate;

@interface _WKInspector : NSObject <WKObject, _WKInspectorExtensionHost, _WKInspectorIBActions> {
    struct ObjectStorage<WebKit::WebInspectorUIProxy> { struct type { unsigned char __lx[88]; } data; } _inspector;
    struct WeakObjCPtr<id<_WKInspectorDelegate>> { id m_weakReference; } _delegate;
}

@property (weak, nonatomic) id<_WKInspectorDelegate> delegate;
@property (readonly, nonatomic) WKWebView *webView;
@property (readonly, nonatomic) BOOL isConnected;
@property (readonly, nonatomic) BOOL isVisible;
@property (readonly, nonatomic) BOOL isFront;
@property (readonly, nonatomic) BOOL isProfilingPage;
@property (readonly, nonatomic) BOOL isElementSelectionActive;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) WKWebView *extensionHostWebView;

- (void)attach;
- (void)_openURLExternallyForTesting:(id)a0 useFrontendAPI:(BOOL)a1;
- (void)connect;
- (void)printErrorToConsole:(id)a0;
- (void)_fetchURLForTesting:(id)a0;
- (void)_setDiagnosticLoggingDelegate:(id)a0;
- (void)registerExtensionWithID:(id)a0 extensionBundleIdentifier:(id)a1 displayName:(id)a2 completionHandler:(id /* block */)a3;
- (id).cxx_construct;
- (void)show;
- (void)detach;
- (void)toggleElementSelection;
- (void)navigateExtensionTabWithIdentifier:(id)a0 toURL:(id)a1 completionHandler:(id /* block */)a2;
- (void)showResources;
- (void)unregisterExtension:(id)a0 completionHandler:(id /* block */)a1;
- (void)showConsole;
- (void)dealloc;
- (void)close;
- (id)inspectorWebView;
- (void)showMainResourceForFrame:(id)a0;
- (void)hide;
- (void)togglePageProfiling;
- (void).cxx_destruct;
- (void)showExtensionTabWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;

@end
