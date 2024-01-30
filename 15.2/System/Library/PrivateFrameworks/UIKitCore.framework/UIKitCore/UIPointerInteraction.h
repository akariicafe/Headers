@class NSString, UIPointerRegion, UIView;
@protocol UIPointerInteractionDelegate, _UIPointerInteractionDriver;

@interface UIPointerInteraction : NSObject <_UIPointerInteractionDriverSink, UIInteraction_Internal, UIInteraction> {
    struct { BOOL regionForRequest; BOOL styleForRegion; BOOL willEnterRegionAnimator; BOOL willExitRegionAnimator; BOOL asyncRegionForRequest; BOOL targetRegionForDeceleratingPointerWithRequests; } _delegateImplements;
    unsigned long long _generationID;
    BOOL _observingPresentationNotification;
}

@property (retain, nonatomic) id<_UIPointerInteractionDriver> driver;
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

- (id)initWithDelegate:(id)a0;
- (void)_queryDelegateForRegionWithRequest:(id)a0 completion:(id /* block */)a1 forceSynchronous:(BOOL)a2;
- (void)_applyPointerStyle:(id)a0 forRegion:(id)a1 animator:(id)a2;
- (void)_viewTraitCollectionDidChange:(id)a0;
- (void)_pointerDidExit;
- (void)didMoveToView:(id)a0;
- (void)willMoveToView:(id)a0;
- (id)_pointerStyleForRegion:(id)a0;
- (void)_modifiersDidChangeInRegion:(id)a0 modifiers:(long long)a1;
- (id)_notifyDelegate_willEnterRegion:(id)a0;
- (void)_updatePointerStyleForRegion:(id)a0 modifiers:(long long)a1 animator:(id)a2;
- (void)_runAlongsideAnimator:(id)a0;
- (void)_configureHoverGestureRecognizer:(id)a0 forView:(id)a1;
- (void)_updateDebugUIForRegionIfEnabled:(id)a0;
- (void)_handlePresentationNotification:(id)a0;
- (void)_pointerDidExitRegion:(id)a0 willEnterNewRegion:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)_regionContainsCurrentHoverLocation:(id)a0;
- (id)init;
- (void)invalidate;
- (BOOL)_supportsAssociation;
- (void)_updatePointerWithPoint:(struct CGPoint { double x0; double x1; })a0 modifiers:(long long)a1 buttonMask:(long long)a2 forReason:(long long)a3;
- (void)dealloc;
- (id)_targetedPreviewForContinuingEffectWithPreview:(id)a0;
- (id)_pointerRegionAtPoint:(struct CGPoint { double x0; double x1; })a0 modifiers:(long long)a1;
- (void)_pointerDidEnterRegion:(id)a0 modifiers:(long long)a1;
- (id)_notifyDelegate_willExitRegion:(id)a0;
- (void)_updateInteractionIsEnabled;
- (void)_updateCurrentRegionIfNecessary:(id)a0 modifiers:(long long)a1 reason:(long long)a2;

@end
