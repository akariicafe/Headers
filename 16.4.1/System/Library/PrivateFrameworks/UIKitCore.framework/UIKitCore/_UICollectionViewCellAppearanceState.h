@interface _UICollectionViewCellAppearanceState : NSObject

@property (nonatomic) int dragState;
@property (nonatomic) BOOL hasLifted;
@property (nonatomic) BOOL hasBeganCancelling;
@property (readonly, nonatomic) long long appearance;
@property (readonly, nonatomic) BOOL hasBeganDroppingInto;
@property (readonly, nonatomic) BOOL enrouteToOrReachedTerminalState;

- (void)didEnd;
- (id)init;
- (id)description;
- (void)didCompleteLift;
- (void)didMove;
- (void)didBeginCancelling;
- (void)didBeginDropping;
- (void)didBeginDroppingInto;
- (void)didBeginLift;
- (void)didCompleteCancelling;
- (void)didCompleteDropping;
- (void)willBeginCancelling;

@end
