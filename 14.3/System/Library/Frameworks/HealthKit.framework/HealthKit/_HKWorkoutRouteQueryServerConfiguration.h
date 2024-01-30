@class HKWorkoutRoute;

@interface _HKWorkoutRouteQueryServerConfiguration : HKQueryServerConfiguration

@property (retain, nonatomic) HKWorkoutRoute *workoutRoute;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
