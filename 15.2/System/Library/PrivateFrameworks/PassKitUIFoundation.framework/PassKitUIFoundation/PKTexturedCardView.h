@class NSString, PKMetalRenderLoop, PKTexturedCardRenderer;

@interface PKTexturedCardView : UIView <PKMetalRenderLoopDelegate, PKMotionManagerClientProtocol, PKInvalidatable> {
    BOOL _invalidated;
    BOOL _draw;
    BOOL _effectivePaused;
    BOOL _motionAllowed;
    BOOL _effectiveMotionEnabled;
    struct { void /* unknown type, empty encoding */ vector; } _lastRotation;
    PKMetalRenderLoop *_renderLoop;
    PKTexturedCardRenderer *_renderer;
}

@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic, getter=isMotionEnabled) BOOL motionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)renderLoop:(id)a0 drawAtTime:(double)a1;
- (void)renderLoop:(id)a0 didChangeForcingPause:(BOOL)a1;
- (void)motionManager:(id)a0 didReceiveMotion:(id)a1;
- (void)renderLoop:(id)a0 drawableSizeDidChange:(struct CGSize { double x0; double x1; })a1;

@end
