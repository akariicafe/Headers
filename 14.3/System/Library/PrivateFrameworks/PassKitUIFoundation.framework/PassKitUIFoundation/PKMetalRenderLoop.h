@class CALayer, CAMetalLayer;
@protocol PKMetalRenderLoopDelegate, MTLDevice, CAMetalDrawable;

@interface PKMetalRenderLoop : PKRenderLoop {
    CAMetalLayer *_layer;
    BOOL _drawableSizeDirty;
    id<CAMetalDrawable> _currentDrawable;
}

@property (readonly, nonatomic) unsigned long long pixelFormat;
@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) CALayer *layer;
@property (nonatomic) BOOL framebufferOnly;
@property (nonatomic) struct CGSize { double width; double height; } drawableSize;
@property (weak, nonatomic) id<PKMetalRenderLoopDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (id)layer;
- (BOOL)isDrawableAvailable;
- (id)currentDrawable;
- (void)_didDraw;
- (void)invalidate;
- (void)_willDraw;
- (BOOL)_subclassPreferredPauseState;
- (id)initWithPixelFormat:(unsigned long long)a0 forDevice:(id)a1;

@end
