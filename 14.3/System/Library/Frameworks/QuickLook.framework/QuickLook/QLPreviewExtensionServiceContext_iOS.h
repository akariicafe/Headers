@class NSString;

@interface QLPreviewExtensionServiceContext_iOS : NSExtensionContext <QLRemotePreviewHost> {
    BOOL _isObservingPreviewController;
    id _contents;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void).cxx_destruct;
- (void)previewControllerWantsFullScreen:(BOOL)a0;
- (void)previewControllerDidUpdateTitle:(id)a0;
- (void)previewControllerDidUpdatePreferredContentSize:(id)a0;
- (void)getPrinterProxyWithCompletionHandler:(id /* block */)a0;
- (void)_startObservingPreviewControllerAttributeChanges;
- (void)_stopObservingPreviewControllerAttributeChanges;
- (void)dealloc;
- (void)loadPreviewControllerWithContents:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (void)setAppearance:(id)a0 animated:(BOOL)a1;
- (void)previewWillAppear:(BOOL)a0;
- (void)previewDidAppear:(BOOL)a0;
- (void)previewWillDisappear:(BOOL)a0;
- (void)previewDidDisappear:(BOOL)a0;
- (id)protocolHost;
- (void)setHostViewControllerProxy:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)previewViewController;
- (void)invalidateService;

@end
