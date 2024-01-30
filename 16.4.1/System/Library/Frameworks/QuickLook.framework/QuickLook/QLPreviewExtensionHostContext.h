@class NSString, QLRemoteItemViewController;

@interface QLPreviewExtensionHostContext : NSExtensionContext <QLRemotePreviewService>

@property (weak, nonatomic) QLRemoteItemViewController *remoteItemViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (id)protocolService;
- (id)protocolServiceWithErrorHandler:(id /* block */)a0;
- (void)generatePreviewForURL:(id)a0 completion:(id /* block */)a1;
- (void)loadPreviewControllerWithContents:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (void)previewDidAppear:(BOOL)a0;
- (void)previewDidDisappear:(BOOL)a0;
- (void)previewWillAppear:(BOOL)a0;
- (void)previewWillDisappear:(BOOL)a0;
- (void)setAppearance:(id)a0 animated:(BOOL)a1;
- (void)setHostViewControllerProxy:(id)a0;
- (void)getARQLInlineProxy3WithCompletionHandler:(id /* block */)a0;
- (void)getARQLInlineProxy2WithCompletionHandler:(id /* block */)a0;
- (void)getARQLInlineProxyWithCompletionHandler:(id /* block */)a0;
- (void)getPrinterProxyWithCompletionHandler:(id /* block */)a0;
- (void)invalidateService;
- (void)previewControllerDidUpdatePreferredContentSize:(id)a0;
- (void)previewControllerDidUpdateTitle:(id)a0;
- (void)previewControllerWantsFullScreen:(BOOL)a0;

@end
