@interface _UICollectionViewCellAppearanceState : NSObject

@property (nonatomic) int dragState;
@property (nonatomic) BOOL hasLifted;
@property (nonatomic) BOOL hasBeganCancelling;
@property (readonly, nonatomic) long long appearance;
@property (readonly, nonatomic) BOOL hasBeganDroppingInto;
@property (readonly, nonatomic) BOOL enrouteToOrReachedTerminalState;

- (void)didEnd;
- (void)didMove;
- (id)init;
- (void)willBeginCancelling;
- (void)didBeginDroppingInto;
- (void)didCompleteDropping;
- (void)didCompleteCancelling;
- (void)didBeginDropping;
- (void)didBeginCancelling;
- (id)description;
- (void)didBeginLift;
- (void)didCompleteLift;

@end
