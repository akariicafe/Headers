@class CALayer, UIView, UIWebDocumentView;

@interface UIWebPlugInView : WAKView {
    UIWebDocumentView *_webView;
    CALayer *_hostingLayer;
    UIView *_uiView;
    struct __CFRunLoopObserver { } *_mainRunLoopDrawObserver;
    BOOL _isFullScreen;
}

@property (nonatomic, getter=isParentedInLayer) BOOL parentedInLayer;
@property (nonatomic) BOOL isQuickTimePlugIn;
@property (nonatomic) BOOL isMapViewPlugIn;
@property (nonatomic) BOOL isiAdPlugIn;

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)setWebView:(id)a0;
- (void)reshape;
- (void)dealloc;
- (BOOL)isParented;
- (void)viewDidMoveToWindow;
- (void)_viewDidMoveToWindowOnMainThread;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)invalidateGState;
- (void)_reshapeOnMainThread;
- (void)webPlugInInitialize;
- (void)webPlugInStart;
- (void)webPlugInStop;
- (void)webPlugInDestroy;
- (id)objectForWebScript;
- (void)_connectPluginLayers;
- (void)_disconnectPluginLayers;
- (void)_attachPluginLayerOnMainThread;
- (void)_detachPluginLayerOnMainThread;
- (void)attachPluginLayer;
- (void)detachPluginLayer;
- (void)mouseUp:(id)a0;
- (void)layout;
- (id)plugInView;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)willProvidePluginLayer;
- (id)initWithWebView:(id)a0 plugInView:(id)a1;
- (void)mouseDown:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)pluginLayer;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
