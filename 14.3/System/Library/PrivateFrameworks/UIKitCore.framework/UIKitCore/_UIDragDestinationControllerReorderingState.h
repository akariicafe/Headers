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

- (void).cxx_destruct;
- (void)didReorder;
- (void)didEndInteractiveReorder;
- (void)reorderingDidBecomePossible;
- (void)reorderResetToStartingLocation;
- (id)_reorderCadenceSettings;
- (id)initWithSessionState:(id)a0 collectionView:(id)a1;
- (void)velocityExceededThreshold;
- (void)didBeginInteractiveReorder;
- (BOOL)hasEnoughTimeElapsedSizeReorderingBecamePossibleForInterval:(double)a0;

@end
