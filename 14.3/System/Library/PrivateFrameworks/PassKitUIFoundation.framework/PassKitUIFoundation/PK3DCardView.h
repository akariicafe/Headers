@class NSString, SCNView, SCNMaterial;
@protocol PK3DLiveCardViewDelegate;

@interface PK3DCardView : UIView <PKMotionManagerClientProtocol, SCNSceneRendererDelegate> {
    SCNView *_sceneView;
    SCNMaterial *_cardMaterial;
    int _design;
    void /* unknown type, empty encoding */ _lastRollPitch;
    BOOL _renderedOnce;
    BOOL _motionEnabled;
    BOOL _invalidated;
}

@property (weak, nonatomic) id<PK3DLiveCardViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopMotionUpdates;
- (void)startMotionUpdates;
- (void).cxx_destruct;
- (void)dealloc;
- (void)renderer:(id)a0 didRenderScene:(id)a1 atTime:(double)a2;
- (void)setMotionEnabled:(BOOL)a0;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)renderSceneWithTextures:(id)a0 shaders:(id)a1;
- (void)invalidate;
- (void)setRollPitch:(SEL)a0;
- (void)motionManager:(id)a0 didReceiveMotion:(id)a1;

@end
