@class NSString, WKWebView;
@protocol _WKInspectorDelegate;

@interface _WKInspector : NSObject <WKObject, _WKInspectorExtensionHost> {
    struct ObjectStorage<WebKit::WebInspectorUIProxy> { struct type { unsigned char __lx[80]; } data; } _inspector;
    struct WeakObjCPtr<id<_WKInspectorDelegate>> { id m_weakReference; } _delegate;
}

@property (weak, nonatomic) id<_WKInspectorDelegate> delegate;
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
@property (readonly, nonatomic) WKWebView *extensionHostWebView;

- (void)connect;
- (void)attach;
- (void)detach;
- (void)close;
- (void)unregisterExtension:(id)a0 completionHandler:(id /* block */)a1;
- (void)showResources;
- (void)registerExtensionWithID:(id)a0 displayName:(id)a1 completionHandler:(id /* block */)a2;
- (void)toggleElementSelection;
- (void)showConsole;
- (void).cxx_destruct;
- (id)inspectorWebView;
- (void)showMainResourceForFrame:(id)a0;
- (void)_openURLExternallyForTesting:(id)a0 useFrontendAPI:(BOOL)a1;
- (void)hide;
- (void)_fetchURLForTesting:(id)a0;
- (void)show;
- (void)dealloc;
- (void)_setDiagnosticLoggingDelegate:(id)a0;
- (void)togglePageProfiling;
- (id).cxx_construct;
- (void)printErrorToConsole:(id)a0;

@end
