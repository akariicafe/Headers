@interface CMGenericWorkout : CMWorkout {
    unsigned long long fWorkoutLabel;
}

@property (readonly, nonatomic) unsigned long long workoutLabel;

+ (BOOL)supportsSecureCoding;
+ (id)genericWorkoutInstance:(id)a0;
+ (BOOL)isAvailable;

- (id)initWithSessionId:(id)a0 workoutLabel:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
