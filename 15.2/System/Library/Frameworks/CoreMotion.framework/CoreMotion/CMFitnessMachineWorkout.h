@class NSString;

@interface CMFitnessMachineWorkout : CMWorkout {
    NSString *fManufacturerName;
    NSString *fModel;
}

@property (readonly, nonatomic) NSString *manufacturerName;
@property (readonly, nonatomic) NSString *model;

+ (BOOL)supportsSecureCoding;
+ (id)fitnessMachineWorkoutInstance:(id)a0;
+ (BOOL)isAvailable;

- (id)initWithSessionId:(id)a0 workoutType:(long long)a1 manufacturerName:(id)a2 model:(id)a3;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
