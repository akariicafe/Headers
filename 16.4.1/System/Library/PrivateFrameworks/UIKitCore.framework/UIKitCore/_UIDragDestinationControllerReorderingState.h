@class UICollectionView, _UIDragMovementCadenceSettings, _UIDragDestinationControllerSessionState, _UIVelocityIntegrator;

@interface _UIDragDestinationControllerReorderingState : NSObject

@property (retain, nonatomic) _UIDragDestinationControllerSessionState *sessionState;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) _UIVelocityIntegrator *velocityIntegrator;
@property (nonatomic) long long reorderCount;
@property (nonatomic) double reorderBecamePossibleTime;
@property (nonatomic) long long dragMovementPhase;
@property (retain, nonatomic) _UIDragMovementCadenceSettings *reorderCadenceSettings;
@property (nonatomic) BOOL hasStartedInteractiveReorder;
@property (nonatomic) BOOL supportsLocalSessionReordering;
@property (readonly, nonatomic) BOOL hasPerformedReordering;

- (void)reorderingDidBecomePossible;
- (void)didEndInteractiveReorder;
- (id)_reorderCadenceSettings;
- (void)didBeginInteractiveReorder;
- (id)initWithSessionState:(id)a0 collectionView:(id)a1;
- (void)didReorder;
- (BOOL)hasEnoughTimeElapsedSizeReorderingBecamePossibleForInterval:(double)a0;
- (void)velocityExceededThreshold;
- (void)reorderResetToStartingLocation;
- (void).cxx_destruct;

@end
