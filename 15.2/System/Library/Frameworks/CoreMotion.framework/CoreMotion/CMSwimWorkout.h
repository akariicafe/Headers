@interface CMSwimWorkout : CMWorkout {
    long long fLocation;
    double fPoolLength;
}

@property (readonly, nonatomic) long long location;
@property (readonly, nonatomic) double poolLength;

+ (BOOL)supportsSecureCoding;
+ (id)swimLocationName:(long long)a0;
+ (id)swimWorkoutInstance:(id)a0;
+ (BOOL)isAvailable;

- (id)initWithSessionId:(id)a0 locationType:(long long)a1 poolLength:(double)a2 startDate:(id)a3 endDate:(id)a4;
- (id)initWithSessionId:(id)a0 location:(long long)a1 poolLength:(double)a2;
- (id)initWithSessionId:(id)a0 locationType:(long long)a1 poolLength:(double)a2;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
