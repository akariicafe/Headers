@class PKPayLaterCardRenderer, NSString, PKMetalRenderLoop, PKPayLaterCardMagnitudes;
@protocol PKPayLaterCardMagnitudesProvider;

@interface PKPayLaterCardView : UIView <PKMetalRenderLoopDelegate, PKMotionManagerClientProtocol, PKInvalidatable> {
    BOOL _invalidated;
    BOOL _draw;
    BOOL _effectivePaused;
    BOOL _effectiveMotionEnabled;
    struct { void /* unknown type, empty encoding */ vector; } _lastRotation;
    unsigned long long _framesToRender;
    PKMetalRenderLoop *_renderLoop;
    PKPayLaterCardRenderer *_renderer;
    PKPayLaterCardMagnitudes *_pendingMagnitudes;
    id<PKPayLaterCardMagnitudesProvider> _magnitudesProvider;
}

@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic, getter=isMotionEnabled) BOOL motionEnabled;
@property (nonatomic, getter=isPresented) BOOL presented;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;

- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layoutSubviews;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)refreshMagnitudes;
- (id)initWithOverlay:(struct CGImage { } *)a0 magnitudesProvider:(id)a1;
- (void)renderLoop:(id)a0 didChangeRunnable:(BOOL)a1;
- (void)renderLoop:(id)a0 drawAtTime:(double)a1;
- (void)renderLoop:(id)a0 drawableSizeDidChange:(struct CGSize { double x0; double x1; })a1;
- (void)motionManager:(id)a0 didReceiveMotion:(id)a1;

@end
