@class UIView, UIPointerStyle, NSString, UIPointerInteractionAnimator, UIWindow, NSMutableArray, _UIPointerEffectPlatterView, UIPointerRegion;
@protocol _UIContentEffectDescriptor;

@interface _UIPointerContentEffect : NSObject <_UIViewSubtreeMonitor, _UIContentEffect> {
    struct { BOOL isRearrangingEffectViews; BOOL stopViewOrderPreservation; BOOL sourceViewDidAllowEdgeAntialiasing; BOOL sourceViewDidAlignContentsToPixels; } _flags;
    BOOL _pressed;
}

@property (retain, nonatomic) _UIPointerEffectPlatterView *platterView;
@property (weak, nonatomic) UIView *lumaSamplingBackdrop;
@property (weak, nonatomic) UIView *pointerPortal;
@property (retain, nonatomic) UIPointerStyle *style;
@property (copy, nonatomic) UIPointerRegion *region;
@property (readonly, nonatomic) NSMutableArray *completions;
@property (nonatomic) long long state;
@property (nonatomic) unsigned long long animationCount;
@property (weak, nonatomic) UIView *positionReferenceView;
@property (weak, nonatomic) UIWindow *subtreeMonitoredWindow;
@property (weak, nonatomic) UIView *sublayerObservationView;
@property (weak, nonatomic) UIView *boundsObservationView;
@property (nonatomic) struct CGPoint { double x; double y; } initialEffectPlatterPosition;
@property (nonatomic) BOOL sourceViewDidAllowEdgeAntialiasing;
@property (retain, nonatomic) UIPointerInteractionAnimator *entranceAnimator;
@property (retain, nonatomic) UIPointerInteractionAnimator *exitAnimator;
@property (nonatomic) double liftProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<_UIContentEffectDescriptor> descriptor;

- (void)begin;
- (void)_monitoredView:(id)a0 willMoveFromSuperview:(id)a1 toSuperview:(id)a2;
- (void)addCompletion:(id /* block */)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_monitoredView:(id)a0 didMoveFromSuperview:(id)a1 toSuperview:(id)a2;
- (BOOL)_monitorsView:(id)a0;
- (void).cxx_destruct;
- (void)_anchorPlatterView:(id)a0 toPreview:(id)a1 updateBounds:(BOOL)a2;
- (void)_cleanUpObservation;
- (void)_commitPointerStyleToArbiterWithCompletion:(id /* block */)a0;
- (void)_createAndInstallPlatterView;
- (void)_ensureRelativeEffectViewOrderInContainer;
- (void)_modifyEffectContainerViewHierarchy:(id /* block */)a0 waitForCACommit:(BOOL)a1;
- (id)_positionReferenceViewForPreview:(id)a0;
- (void)_setStyle:(id)a0 andRegion:(id)a1;
- (void)_tearDownPlatterView;
- (void)_updateFromState:(long long)a0 toState:(long long)a1;
- (void)_updatePlatterView:(id)a0 forStyle:(id)a1;
- (void)end:(BOOL)a0;
- (id)initWithStyle:(id)a0 region:(id)a1;
- (id)previewForContinuingToEffectWithPreview:(id)a0;
- (void)setDescriptor:(id)a0 andKey:(id)a1;
- (void)setPressed:(BOOL)a0 animated:(BOOL)a1;

@end
