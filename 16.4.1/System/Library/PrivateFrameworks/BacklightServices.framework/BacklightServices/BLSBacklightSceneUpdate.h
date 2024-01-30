@class BLSBacklightSceneUpdateContext;

@interface BLSBacklightSceneUpdate : NSObject {
    id /* block */ _sceneContentsUpdatedBlock;
    id /* block */ _performBacklightRampBlock;
    id /* block */ _sceneContentsAnimationCompleteBlock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_sceneContentsUpdated;
    BOOL _lock_didStartBacklightRamp;
    BOOL _lock_animationComplete;
}

@property (readonly, nonatomic) BOOL isUpdateToDateSpecifier;
@property (readonly, nonatomic) BLSBacklightSceneUpdateContext *context;
@property (readonly, nonatomic, getter=areSceneContentsUpdated) BOOL sceneContentsUpdated;
@property (readonly, nonatomic) BOOL didStartBacklightRamp;
@property (readonly, nonatomic, getter=isAnimationComplete) BOOL animationComplete;

- (void)sceneContentsAnimationDidComplete;
- (void)sceneContentsDidUpdate;
- (id)initWithVisualState:(id)a0 previousVisualState:(id)a1 frameSpecifier:(id)a2 animated:(BOOL)a3 triggerEvent:(id)a4 touchTargetable:(BOOL)a5 isUpdateToDateSpecifier:(BOOL)a6 sceneContentsUpdated:(id /* block */)a7 performBacklightRamp:(id /* block */)a8 sceneContentsAnimationComplete:(id /* block */)a9;
- (void)performBacklightRampWithDuration:(double)a0;
- (void)setReplacedSceneUpdate:(id)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
