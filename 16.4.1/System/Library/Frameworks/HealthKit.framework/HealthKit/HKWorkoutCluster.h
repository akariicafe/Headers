@class NSUUID, NSArray, NSData, NSString;

@interface HKWorkoutCluster : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *clusterUUID;
@property (readonly, copy, nonatomic) NSArray *workoutUUIDs;
@property (readonly, copy, nonatomic) NSUUID *lastWorkoutUUID;
@property (readonly, copy, nonatomic) NSUUID *bestWorkoutUUID;
@property (readonly, nonatomic) double relevanceValue;
@property (readonly, copy, nonatomic) NSData *workoutRouteSnapshot;
@property (readonly, copy, nonatomic) NSString *workoutRouteLabel;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)_initWithUUID:(id)a0 workoutUUIDs:(id)a1 lastWorkoutUUID:(id)a2 bestWorkoutUUID:(id)a3 relevanceValue:(double)a4 workoutRouteSnapshot:(id)a5 workoutRouteLabel:(id)a6;
- (id)initWithWorkoutUUIDs:(id)a0 lastWorkoutUUID:(id)a1 bestWorkoutUUID:(id)a2 relevanceValue:(double)a3 workoutRouteSnapshot:(id)a4 workoutRouteLabel:(id)a5;

@end
