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
- (void)layout;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)dealloc;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (void)reshape;
- (void)_attachPluginLayerOnMainThread;
- (void)_connectPluginLayers;
- (void)_detachPluginLayerOnMainThread;
- (void)_disconnectPluginLayers;
- (void)_reshapeOnMainThread;
- (void)_viewDidMoveToWindowOnMainThread;
- (void)attachPluginLayer;
- (void)detachPluginLayer;
- (id)initWithWebView:(id)a0 plugInView:(id)a1;
- (void)invalidateGState;
- (BOOL)isParented;
- (void)mouseDown:(id)a0;
- (id)objectForWebScript;
- (id)plugInView;
- (id)pluginLayer;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidMoveToWindow;
- (void)webPlugInDestroy;
- (void)webPlugInInitialize;
- (void)webPlugInStart;
- (void)webPlugInStop;
- (BOOL)willProvidePluginLayer;

@end
