@class NSUUID, NSString, NSData, CLLocation, NSDate;

@interface HKRaceRouteCluster : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *clusterUUID;
@property (readonly, copy, nonatomic) NSUUID *workoutClusterUUID;
@property (readonly, nonatomic) double relevanceValue;
@property (readonly, nonatomic) unsigned long long clusterSize;
@property (readonly, nonatomic) unsigned long long workoutActivityType;
@property (readonly, copy, nonatomic) NSUUID *lastWorkoutUUID;
@property (readonly, copy, nonatomic) NSDate *lastWorkoutDate;
@property (readonly, nonatomic) double lastWorkoutDistance;
@property (readonly, nonatomic) double lastWorkoutDuration;
@property (readonly, copy, nonatomic) CLLocation *lastWorkoutStartingPoint;
@property (readonly, copy, nonatomic) NSUUID *bestWorkoutUUID;
@property (readonly, copy, nonatomic) NSDate *bestWorkoutDate;
@property (readonly, nonatomic) double bestWorkoutDistance;
@property (readonly, nonatomic) double bestWorkoutDuration;
@property (readonly, copy, nonatomic) NSData *workoutRouteSnapshot;
@property (readonly, copy, nonatomic) NSString *workoutRouteLabel;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)_initWithUUID:(id)a0 workoutClusterUUID:(id)a1 clusterSize:(unsigned long long)a2 relevanceValue:(double)a3 workoutActivityType:(unsigned long long)a4 lastWorkoutUUID:(id)a5 lastWorkoutDate:(id)a6 lastWorkoutDistance:(double)a7 lastWorkoutDuration:(double)a8 lastWorkoutStartingPoint:(id)a9 bestWorkoutUUID:(id)a10 bestWorkoutDate:(id)a11 bestWorkoutDistance:(double)a12 bestWorkoutDuration:(double)a13 workoutRouteSnapshot:(id)a14 workoutRouteLabel:(id)a15;
- (void)_setRelevanceValue:(double)a0;
- (void)_setWorkoutClusterUUID:(id)a0;
- (void)_setWorkoutRouteLabel:(id)a0;
- (void)_setWorkoutRouteSnapshot:(id)a0;

@end
