@interface FIUIWorkoutSplit : NSObject

@property (nonatomic) double distanceInMeters;
@property (nonatomic) double duration;

- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDistance:(double)a0 duration:(double)a1;

@end
