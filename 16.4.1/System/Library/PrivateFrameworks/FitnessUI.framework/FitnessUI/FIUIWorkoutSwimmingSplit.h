@interface FIUIWorkoutSwimmingSplit : NSObject

@property (nonatomic) double duration;
@property (nonatomic) long long splitDistance;
@property (nonatomic) double distanceInUserUnit;
@property (nonatomic) long long strokeCount;
@property (nonatomic) long long strokeCountScaledToFillSplit;
@property (nonatomic) double durationScaledToFillSplit;

- (id)description;
- (double)_fractionToFillTotalSplitDistance;
- (id)formattedPaceWithFormattingManager:(id)a0;
- (id)formattedStrokeCount;

@end
