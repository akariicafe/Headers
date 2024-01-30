@class UIWindow, NSString, UIPointerStyle, UIPointerRegion, _UIPointerEffectPlatterView, UIView, UIPointerInteractionAnimator;

@interface _UIPointerContentEffect : NSObject <_UIViewSubtreeMonitor> {
    struct { BOOL isRearrangingEffectViews; BOOL stopViewOrderPreservation; BOOL sourceViewDidAllowEdgeAntialiasing; BOOL sourceViewDidAlignContentsToPixels; } _flags;
}

@property (retain, nonatomic) _UIPointerEffectPlatterView *platterView;
@property (weak, nonatomic) UIView *lumaSamplingBackdrop;
@property (weak, nonatomic) UIView *pointerPortal;
@property (retain, nonatomic) UIPointerStyle *style;
@property (copy, nonatomic) UIPointerRegion *region;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) long long state;
@property (nonatomic) unsigned long long animationCount;
@property (weak, nonatomic) UIView *positionReferenceView;
@property (weak, nonatomic) UIWindow *subtreeMonitoredWindow;
@property (weak, nonatomic) UIView *sublayerObservationView;
@property (weak, nonatomic) UIView *boundsObservationView;
@property (nonatomic) struct CGPoint { double x; double y; } initialEffectPlatterPosition;
@property (retain, nonatomic) UIPointerInteractionAnimator *entranceAnimator;
@property (retain, nonatomic) UIPointerInteractionAnimator *exitAnimator;
@property (nonatomic, getter=isPressed) BOOL pressed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)begin;
- (void)end:(BOOL)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setStyle:(id)a0 andRegion:(id)a1;
- (void)_cleanUpObservation;
- (void)_commitPointerStyleToArbiterWithCompletion:(id /* block */)a0;
- (void)_updatePlatterView:(id)a0 forStyle:(id)a1;
- (void)_updateFromState:(long long)a0 toState:(long long)a1;
- (void)_createAndInstallPlatterView;
- (void)_tearDownPlatterView;
- (void)_modifyEffectContainerViewHierarchy:(id /* block */)a0 waitForCACommit:(BOOL)a1;
- (void)_ensureRelativeEffectViewOrderInContainer;
- (id)_positionReferenceViewForPreview:(id)a0;
- (void)_anchorPlatterView:(id)a0 toPreview:(id)a1 updateBounds:(BOOL)a2;
- (id)initWithStyle:(id)a0 region:(id)a1 completion:(id /* block */)a2;
- (void)_monitoredView:(id)a0 didMoveFromSuperview:(id)a1 toSuperview:(id)a2;
- (BOOL)_monitorsView:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)_targetedPreviewForContinuingEffectWithPreview:(id)a0;
- (void)_monitoredView:(id)a0 willMoveFromSuperview:(id)a1 toSuperview:(id)a2;

@end
