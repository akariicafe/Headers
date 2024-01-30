@interface FIUIWorkoutSplit : NSObject

@property (nonatomic) double distanceInMeters;
@property (nonatomic) double duration;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithDistance:(double)a0 duration:(double)a1;

@end
