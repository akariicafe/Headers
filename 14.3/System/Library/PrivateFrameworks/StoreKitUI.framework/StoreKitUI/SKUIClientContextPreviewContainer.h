@class SKUIPreviewContainerViewController, SKUIClientContext;

@interface SKUIClientContextPreviewContainer : IKJSObject <SKUIClientContextPreviewContainer> {
    SKUIClientContext *_clientContext;
    SKUIPreviewContainerViewController *_previewContainerViewController;
}

- (void).cxx_destruct;
- (id)initWithAppContext:(id)a0 clientContext:(id)a1 previewContainerViewController:(id)a2;
- (void)previewDocument:(id)a0 :(id)a1;

@end
