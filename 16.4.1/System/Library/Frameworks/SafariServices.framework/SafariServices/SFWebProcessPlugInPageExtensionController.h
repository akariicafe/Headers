@class WKWebProcessPlugInBrowserContextController, NSMutableDictionary, _WKRemoteObjectInterface;

@interface SFWebProcessPlugInPageExtensionController : NSObject {
    WKWebProcessPlugInBrowserContextController *_browserContextController;
    _WKRemoteObjectInterface *_extensionControllerInterface;
    NSMutableDictionary *_extensionToScriptWorldMap;
}

- (void)dealloc;
- (void)evaluateJavaScriptForSharingExtension:(id)a0 extraArguments:(id)a1 completionHandler:(id /* block */)a2;
- (void)finalizeJavaScriptForSharingExtension:(id)a0 arguments:(id)a1;
- (void)prepareJavaScriptWorldForSharingExtension:(id)a0 javaScript:(id)a1;
- (void)_setUpExtensionControllerInterface;
- (void)_clearExtensionControllerInterface;
- (void).cxx_destruct;
- (id)initWithBrowserContextController:(id)a0;
- (void)clearExtensionScriptWorlds;

@end
