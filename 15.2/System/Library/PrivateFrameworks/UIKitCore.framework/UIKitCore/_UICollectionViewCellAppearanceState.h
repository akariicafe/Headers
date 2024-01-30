@interface _UICollectionViewCellAppearanceState : NSObject

@property (nonatomic) int dragState;
@property (nonatomic) BOOL hasLifted;
@property (nonatomic) BOOL hasBeganCancelling;
@property (readonly, nonatomic) long long appearance;
@property (readonly, nonatomic) BOOL hasBeganDroppingInto;
@property (readonly, nonatomic) BOOL enrouteToOrReachedTerminalState;

- (void)didMove;
- (id)description;
- (void)didEnd;
- (void)didBeginLift;
- (id)init;
- (void)didBeginCancelling;
- (void)didBeginDropping;
- (void)didCompleteLift;
- (void)willBeginCancelling;
- (void)didCompleteCancelling;
- (void)didCompleteDropping;
- (void)didBeginDroppingInto;

@end
