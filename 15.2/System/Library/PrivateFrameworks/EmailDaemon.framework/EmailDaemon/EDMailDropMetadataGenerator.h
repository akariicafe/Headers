@class NSString, WKWebView, EFPromise, NSMutableArray;

@interface EDMailDropMetadataGenerator : NSObject <WKNavigationDelegate>

@property (retain, nonatomic) WKWebView *webView;
@property (retain, nonatomic) NSMutableArray *scriptHandlers;
@property (retain, nonatomic) EFPromise *activePromise;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void).cxx_destruct;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)dealloc;
- (void)webViewWebContentProcessDidTerminate:(id)a0;
- (void)insertMailDropAttachmentViewForContentURL:(id)a0 HTMLByContentID:(id)a1 completionHandler:(id /* block */)a2;
- (void)generateMailDropMetadataForContentURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)tearDownWebView;
- (void)_findMailDropNodesInFileURL:(id)a0 promise:(id)a1;
- (id)withTimeout:(double)a0 do:(id /* block */)a1 completion:(id /* block */)a2;
- (BOOL)_shouldSearchForMailDropNodesInFileURL:(id)a0;
- (void)_addScriptHandlerForKey:(id)a0 handler:(id /* block */)a1;

@end
