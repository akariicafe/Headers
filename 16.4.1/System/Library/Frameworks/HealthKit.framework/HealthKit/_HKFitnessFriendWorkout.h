@class NSUUID, NSString, HKQuantity;

@interface _HKFitnessFriendWorkout : HKSample <NSCopying>

@property (retain, nonatomic) NSUUID *friendUUID;
@property (nonatomic) unsigned long long workoutActivityType;
@property (nonatomic) double duration;
@property (retain, nonatomic) HKQuantity *totalEnergyBurned;
@property (retain, nonatomic) HKQuantity *totalBasalEnergyBurned;
@property (retain, nonatomic) HKQuantity *totalDistance;
@property (retain, nonatomic) HKQuantity *goal;
@property (nonatomic) unsigned long long goalType;
@property (retain, nonatomic) NSString *bundleID;
@property (nonatomic) BOOL isWatchWorkout;
@property (nonatomic) BOOL isIndoorWorkout;
@property (retain, nonatomic) NSString *deviceManufacturer;
@property (retain, nonatomic) NSString *deviceModel;
@property (nonatomic) long long amm;
@property (retain, nonatomic) NSString *seymourCatalogWorkoutIdentifier;
@property (retain, nonatomic) NSString *seymourMediaType;

+ (BOOL)supportsSecureCoding;
+ (BOOL)_isConcreteObjectClass;
+ (id)fitnessFriendWorkoutFromHKWorkout:(id)a0;
+ (id)fitnessFriendworkoutWithActivityType:(unsigned long long)a0 friendUUID:(id)a1 startDate:(id)a2 endDate:(id)a3 duration:(double)a4 totalActiveEnergyBurned:(id)a5 totalBasalEnergyBurned:(id)a6 totalDistance:(id)a7 goalType:(unsigned long long)a8 goal:(id)a9 bundleID:(id)a10 isWatchWorkout:(BOOL)a11 isIndoorWorkout:(BOOL)a12 deviceManufacturer:(id)a13 deviceModel:(id)a14 amm:(long long)a15 seymourCatalogWorkoutIdentifier:(id)a16 seymourMediaType:(id)a17;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)hkWorkoutFromFriendWorkout;

@end
