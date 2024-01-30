@class NSDictionary, NSString, HKQuantity;

@interface FIUIWorkoutActivityType : NSObject <NSSecureCoding> {
    BOOL _isIndoor;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long identifier;
@property (readonly, nonatomic) unsigned long long auxiliaryTypeIdentifier;
@property (readonly, nonatomic) unsigned long long effectiveTypeIdentifier;
@property (readonly, nonatomic) BOOL isIndoor;
@property (readonly, nonatomic) BOOL isCategorizedOtherWorkout;
@property (readonly, nonatomic) NSDictionary *metadata;
@property (readonly, nonatomic) long long swimmingLocationType;
@property (readonly, nonatomic) HKQuantity *lapLength;
@property (readonly, nonatomic) BOOL isWaterLockActivity;
@property (readonly, nonatomic) NSString *uniqueIdentifier;

+ (id)nonOptimizedActivityTypes;
+ (id)optimizedActivityTypesWithIsWheelchairUser:(BOOL)a0 isSwimmingSupported:(BOOL)a1;
+ (id)activityTypeWithHKWorkoutActivityTypeIdentifier:(unsigned long long)a0 isIndoor:(BOOL)a1 metadata:(id)a2;
+ (id)activityTypeWithHKWorkoutActivityTypeIdentifier:(unsigned long long)a0 isIndoor:(BOOL)a1;
+ (id)wheelchairActivityTypes;
+ (id)swimmingOptimizedActivityTypes;
+ (id)otherWorkoutActivityTypes;
+ (id)deprecatedActivityTypes;
+ (id)swimmingOtherActivityTypes;
+ (BOOL)shouldDisambiguateOnLocationType:(unsigned long long)a0;
+ (id)activityTypeWithWorkout:(id)a0;
+ (id)defaultActivityTypesWithIsWheelchairUser:(BOOL)a0 isSwimmingSupported:(BOOL)a1 activityMoveMode:(long long)a2;
+ (id)gymKitCapableActivityTypes;
+ (id)unsupportedActivityTypesWithIsWheelchairUser:(BOOL)a0 isSwimmingSupported:(BOOL)a1;
+ (id)possibleActivityTypesForIdentifier:(unsigned long long)a0 locationType:(long long)a1 swimmingLocationType:(long long)a2 wheelchairUser:(BOOL)a3;
+ (unsigned long long)mapWheelchairUserActivityType:(unsigned long long)a0 isWheelchairUser:(BOOL)a1;

- (void).cxx_destruct;
- (id)localizedName;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithActivityTypeIdentifier:(unsigned long long)a0 isIndoor:(BOOL)a1;
- (id)initWithActivityTypeIdentifier:(unsigned long long)a0 isIndoor:(BOOL)a1 metadata:(id)a2;
- (id)initWithActivityTypeIdentifier:(unsigned long long)a0 isIndoor:(BOOL)a1 metadata:(id)a2 auxiliaryTypeIdentifier:(unsigned long long)a3;
- (id)localizedNameComponents;
- (id)activityTypeByAddingLapLength:(double)a0;
- (BOOL)hasLocationTypePool;
- (id)activityTypePlistKey;

@end
