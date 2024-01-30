@class NSArray, UIPointerRegion, NSString, UIView;
@protocol UIPointerInteractionDelegate;

@interface UIPointerInteraction : NSObject <_UIPointerInteractionDriverSink, UIInteraction_Internal, UIInteraction> {
    struct { BOOL regionForRequest; BOOL styleForRegion; BOOL willEnterRegionAnimator; BOOL willExitRegionAnimator; BOOL asyncRegionForRequest; BOOL targetRegionForDeceleratingPointerWithRequests; } _delegateImplements;
    unsigned long long _generationID;
    BOOL _observingPresentationNotification;
}

@property (copy, nonatomic) NSArray *drivers;
@property (copy, nonatomic) UIPointerRegion *currentRegion;
@property (copy, nonatomic) UIPointerRegion *mostRecentRegion;
@property (nonatomic) long long currentModifiers;
@property (readonly, nonatomic) UIPointerRegion *defaultRegion;
@property (nonatomic) BOOL _delegateProvidesRegionsAsynchronously;
@property (nonatomic, getter=_pausesPointerUpdatesWhilePanning, setter=_setPausesPointerUpdatesWhilePanning:) BOOL pausesPointerUpdatesWhilePanning;
@property (readonly, weak, nonatomic) id<UIPointerInteractionDelegate> delegate;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) UIView *view;

+ (Class)_driverClass;
+ (Class)_pencilDriverClass;

- (void)driver:(id)a0 willAttachHoverGestureRecognizer:(id)a1 toView:(id)a2;
- (BOOL)_regionContainsCurrentHoverLocation:(id)a0;
- (void)_viewTraitCollectionDidChange:(id)a0;
- (void)_pointerDidExitRegion:(id)a0 willEnterNewRegion:(BOOL)a1;
- (void)_updateInteractionIsEnabled;
- (void)_applyPointerStyle:(id)a0 forRegion:(id)a1 animator:(id)a2;
- (void)driverDidExit:(id)a0;
- (void)_runAlongsideAnimator:(id)a0;
- (id)_notifyDelegate_willEnterRegion:(id)a0;
- (BOOL)_supportsAssociation;
- (void)dealloc;
- (void)driver:(id)a0 didIssueUpdate:(struct { struct CAPoint3D { double x0; double x1; double x2; } x0; double x1; long long x2; long long x3; long long x4; BOOL x5; })a1;
- (void)willMoveToView:(id)a0;
- (id)_pointerStyleForRegion:(id)a0;
- (void)_queryDelegateForRegionWithRequest:(id)a0 completion:(id /* block */)a1 forceSynchronous:(BOOL)a2;
- (void)_pointerDidExit;
- (id)initWithDelegate:(id)a0;
- (void)_updatePointerStyleForRegion:(id)a0 update:(struct { struct CAPoint3D { double x0; double x1; double x2; } x0; double x1; long long x2; long long x3; long long x4; BOOL x5; })a1 animator:(id)a2;
- (void)_pointerDidEnterRegion:(id)a0 update:(struct { struct CAPoint3D { double x0; double x1; double x2; } x0; double x1; long long x2; long long x3; long long x4; BOOL x5; })a1;
- (id)_targetedPreviewForContinuingEffectWithPreview:(id)a0;
- (void)_modifiersDidChangeInRegion:(id)a0 update:(struct { struct CAPoint3D { double x0; double x1; double x2; } x0; double x1; long long x2; long long x3; long long x4; BOOL x5; })a1;
- (id)init;
- (void)invalidate;
- (void)_handlePresentationNotification:(id)a0;
- (id)_notifyDelegate_willExitRegion:(id)a0;
- (void)_updateDebugUIForRegionIfEnabled:(id)a0;
- (void).cxx_destruct;
- (void)_updateCurrentRegionIfNecessary:(id)a0 update:(struct { struct CAPoint3D { double x0; double x1; double x2; } x0; double x1; long long x2; long long x3; long long x4; BOOL x5; })a1;
- (void)didMoveToView:(id)a0;
- (id)_pointerRegionAtPoint:(struct CGPoint { double x0; double x1; })a0 modifiers:(long long)a1;

@end
