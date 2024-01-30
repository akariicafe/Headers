@protocol WBSSVGImageRenderingObserver;

@interface WBSSVGImageRenderingWebProcessPlugInPageController : WBSWebProcessPlugInPageController {
    id<WBSSVGImageRenderingObserver> _svgImageRenderingObserver;
}

- (void)webProcessPlugInBrowserContextController:(id)a0 didFinishLoadForFrame:(id)a1;
- (void).cxx_destruct;
- (id)svgImageRenderingObserver;

@end
