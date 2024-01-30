@class BLSBacklightSceneVisualState, NSDate;
@protocol BLSBacklightSceneEnvironment_Private;

@interface BLSHLocalHostSceneEnvironment : BLSHBaseSceneHostEnvironment {
    id<BLSBacklightSceneEnvironment_Private> _clientEnvironment;
    BLSBacklightSceneVisualState *_lock_visualState;
    NSDate *_lock_presentationDate;
    NSDate *_lock_visualStateMismatchStartTime;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (BOOL)isLiveUpdating;
- (id)presentationDate;
- (void)updateToDateSpecifier:(id)a0 sceneContentsUpdated:(id /* block */)a1;
- (BOOL)isClientActive;
- (void)setUnrestrictedFramerateUpdates:(BOOL)a0;
- (void)clearPresentationDate;
- (void)requestDateSpecifiersForDateInterval:(id)a0 previousPresentationDate:(id)a1 shouldReset:(BOOL)a2 completion:(id /* block */)a3;
- (BOOL)clientHasDelegate;
- (BOOL)clientSupportsAlwaysOn;
- (void)setLiveUpdating:(BOOL)a0;
- (void)requestedFidelityForInactiveContentWithCompletion:(id /* block */)a0;
- (id)visualState;
- (BOOL)hasUnrestrictedFramerateUpdates;
- (void)updateToVisualState:(id)a0 presentationDateSpecifier:(id)a1 animated:(BOOL)a2 triggerEvent:(id)a3 touchTargetable:(BOOL)a4 sceneContentsUpdated:(id /* block */)a5 performBacklightRamp:(id /* block */)a6 animationComplete:(id /* block */)a7;
- (void).cxx_destruct;
- (BOOL)hasVisualStateMistmach;
- (id)initWithBacklightSceneEnvironment:(id)a0;

@end
