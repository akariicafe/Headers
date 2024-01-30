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

- (void)mouseUp:(id)a0;
- (void)setWebView:(id)a0;
- (void)reshape;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)plugInView;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)willProvidePluginLayer;
- (id)initWithWebView:(id)a0 plugInView:(id)a1;
- (BOOL)isParented;
- (void)mouseDown:(id)a0;
- (void)forwardInvocation:(id)a0;
- (id)pluginLayer;
- (void)layout;
- (void)dealloc;
- (void)webPlugInStart;
- (void)webPlugInStop;
- (void)viewDidMoveToWindow;
- (void)_viewDidMoveToWindowOnMainThread;
- (void)invalidateGState;
- (void)_reshapeOnMainThread;
- (void)webPlugInInitialize;
- (void)webPlugInDestroy;
- (id)objectForWebScript;
- (void)_connectPluginLayers;
- (void)_disconnectPluginLayers;
- (void)_attachPluginLayerOnMainThread;
- (void)_detachPluginLayerOnMainThread;
- (void)attachPluginLayer;
- (void)detachPluginLayer;
- (BOOL)respondsToSelector:(SEL)a0;

@end
