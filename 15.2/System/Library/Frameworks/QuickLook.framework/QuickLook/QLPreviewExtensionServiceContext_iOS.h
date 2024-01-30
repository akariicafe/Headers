@class NSString, QLPreviewProvider;
@protocol QLPreviewingController;

@interface QLPreviewExtensionServiceContext_iOS : NSExtensionContext <QLRemotePreviewHost, QLPreviewProviderContext> {
    BOOL _isObservingPreviewController;
    id _contents;
}

@property (retain, nonatomic) QLPreviewProvider<QLPreviewingController> *previewProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (id)previewViewController;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)loadPreviewControllerWithContents:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (void)invalidateService;
- (void)setAppearance:(id)a0 animated:(BOOL)a1;
- (void)previewWillAppear:(BOOL)a0;
- (void)previewDidAppear:(BOOL)a0;
- (void)previewWillDisappear:(BOOL)a0;
- (void)previewDidDisappear:(BOOL)a0;
- (void)setHostViewControllerProxy:(id)a0;
- (void)generatePreviewForURL:(id)a0 completion:(id /* block */)a1;
- (void)previewControllerWantsFullScreen:(BOOL)a0;
- (void)previewControllerDidUpdateTitle:(id)a0;
- (void)previewControllerDidUpdatePreferredContentSize:(id)a0;
- (void)getPrinterProxyWithCompletionHandler:(id /* block */)a0;
- (void)getARQLInlineProxyWithCompletionHandler:(id /* block */)a0;
- (void)getARQLInlineProxy2WithCompletionHandler:(id /* block */)a0;
- (id)protocolHost;
- (void)_startObservingPreviewControllerAttributeChanges;
- (void)_stopObservingPreviewControllerAttributeChanges;

@end
