@class WKWebView;
@protocol SFSharingExtensionWebProcessController;

@interface _SFSafariSharingExtensionController : NSObject {
    WKWebView *_webView;
    id<SFSharingExtensionWebProcessController> _extensionControllerProxy;
}

- (id)initWithWebView:(id)a0;
- (void)finalizeJavaScriptForSharingExtension:(id)a0 arguments:(id)a1;
- (void).cxx_destruct;
- (void)prepareJavaScriptWorldForSharingExtension:(id)a0 javaScript:(id)a1;
- (void)runJavaScriptForSharingExtension:(id)a0 extraArguments:(id)a1 completion:(id /* block */)a2;
- (id)_extensionControllerProxy;

@end
