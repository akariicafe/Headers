@interface NLWorkoutTargetZone : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) double min;
@property (readonly, nonatomic) double max;
@property (readonly, nonatomic) double currentValue;
@property (readonly, nonatomic) BOOL enabled;

+ (id)restoreFromDictionary:(id)a0 activityType:(id)a1;
+ (id)restoreFromDictionary:(id)a0;
+ (long long)mapTargetZoneTypeStringToEnum:(id)a0;
+ (id)mapTargetZoneTypeEnumToString:(long long)a0;
+ (id)serializeTargetZone:(id)a0;
+ (unsigned long long)stateForZone:(id)a0 distanceUnit:(id)a1;
+ (id)targetZoneForActivityType:(id)a0;
+ (void)saveTargetZone:(id)a0 forActivityType:(id)a1;
+ (id)targetZoneFromMetadata:(id)a0;
+ (id)metadataForTargetZone:(id)a0;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithType:(long long)a0 min:(double)a1 max:(double)a2 currentValue:(double)a3;
- (BOOL)isSingleThreshold;

@end
