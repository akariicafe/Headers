@class CALayer, CAMetalLayer;
@protocol LAUIMetalRenderLoopDelegate, MTLDevice, CAMetalDrawable;

@interface LAUIMetalRenderLoop : LAUIRenderLoop {
    CAMetalLayer *_layer;
    BOOL _drawable_size_dirty;
    id<CAMetalDrawable> _current_drawable;
}

@property (readonly, nonatomic) unsigned long long pixelFormat;
@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) CALayer *layer;
@property (nonatomic) BOOL framebufferOnly;
@property (nonatomic) struct CGSize { double width; double height; } drawableSize;
@property (weak, nonatomic) id<LAUIMetalRenderLoopDelegate> delegate;

- (void).cxx_destruct;
- (id)init;
- (void)_didInvalidate;
- (id)layer;
- (BOOL)isDrawableAvailable;
- (id)currentDrawable;
- (void)_didDraw;
- (void)_willDraw;
- (id)initWithPixelFormat:(unsigned long long)a0 forDevice:(id)a1;
- (BOOL)_preferredPauseState;

@end
