@class NSUUID, CALayer, CALayerHost;
@protocol ARQLInlineService2;

@interface ASVInlinePreview : NSObject {
    CALayer *_loadingLayer;
    CALayerHost *_layerHost;
    id<ARQLInlineService2> _fullscreenService;
}

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) CALayer *layer;

+ (void)_kill:(int)a0;

- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)observeDismissFullscreenWithCompletionHandler:(id /* block */)a0;
- (void)createFullscreenInstanceWithInitialFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 previewOptions:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)preparePreviewOfFileAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)setupRemoteConnectionWithCompletionHandler:(id /* block */)a0;
- (void)updateFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 completionHandler:(id /* block */)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)inlineTouchesFromUITouches:(id)a0;
- (void)setFrameWithinFencedTransaction:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setWantsDebugColors:(BOOL)a0;

@end
