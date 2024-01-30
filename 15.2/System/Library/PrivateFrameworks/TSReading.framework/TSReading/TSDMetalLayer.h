@class CADisplayLink, NSObject;
@protocol TSDMetalLayerDelegate, MTLCommandQueue;

@interface TSDMetalLayer : CAMetalLayer {
    CADisplayLink *_displayLink;
    BOOL _isAnimationStopping;
}

@property (weak) NSObject<TSDMetalLayerDelegate> *delegate;
@property (readonly, nonatomic) id<MTLCommandQueue> commandQueue;
@property (nonatomic) BOOL shouldSkipNextDisplayLink;

- (void)startAnimation;
- (void)pauseAnimation;
- (void)tearDown;
- (void)resumeAnimation;
- (void)p_drawFrameAtLayerTime:(double)a0;
- (void)setDevice:(id)a0;
- (void)p_drawFrameFromDisplayLink:(id)a0;
- (void)displayAtCurrentLayerTime;
- (void).cxx_destruct;
- (void)p_performWorkOnMainThread:(id /* block */)a0;
- (id)device;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isOpaque:(BOOL)a1 isWideGamut:(BOOL)a2 delegate:(id)a3 metalDevice:(id)a4;
- (void)stopAnimation;

@end
