@class CALayer, CAMetalLayer;
@protocol PKMetalRenderLoopDelegate, MTLDevice, CAMetalDrawable;

@interface PKMetalRenderLoop : PKRenderLoop {
    CAMetalLayer *_layer;
    BOOL _paused;
    BOOL _forcingPaused;
    BOOL _effectivePaused;
    BOOL _drawableSizeDirty;
    id<CAMetalDrawable> _currentDrawable;
}

@property (readonly, nonatomic) unsigned long long pixelFormat;
@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) CALayer *layer;
@property (nonatomic) BOOL framebufferOnly;
@property (nonatomic) struct CGSize { double width; double height; } drawableSize;
@property (weak, nonatomic) id<PKMetalRenderLoopDelegate> delegate;

- (void)setFramebufferOnly:(BOOL)a0;
- (BOOL)framebufferOnly;
- (void).cxx_destruct;
- (void)setPaused:(BOOL)a0;
- (id)init;
- (BOOL)isPaused;
- (id)layer;
- (void)invalidate;
- (BOOL)isDrawableAvailable;
- (id)currentDrawable;
- (void)_didDraw;
- (BOOL)isForcingPause;
- (void)_willDraw;
- (id)initWithPixelFormat:(unsigned long long)a0 forDevice:(id)a1;

@end
