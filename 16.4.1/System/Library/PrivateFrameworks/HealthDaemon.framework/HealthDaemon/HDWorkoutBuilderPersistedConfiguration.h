@class HDDeviceEntity, NSUUID, HKWorkoutConfiguration, HDSourceEntity, NSString, HKQuantity;

@interface HDWorkoutBuilderPersistedConfiguration : NSObject <NSCopying>

@property (copy, nonatomic) NSUUID *builderIdentifier;
@property (copy, nonatomic) HKWorkoutConfiguration *workoutConfiguration;
@property (retain, nonatomic) HDSourceEntity *sourceEntity;
@property (copy, nonatomic) NSString *sourceVersion;
@property (retain, nonatomic) HDDeviceEntity *deviceEntity;
@property (nonatomic) unsigned long long goalType;
@property (copy, nonatomic) HKQuantity *goal;
@property (nonatomic) BOOL shouldCollectWorkoutEvents;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
