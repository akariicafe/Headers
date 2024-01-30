@interface NTKAstronomyComplication : NTKComplication

@property (readonly, nonatomic) unsigned long long vista;

+ (BOOL)supportsSecureCoding;
+ (id)_allComplicationConfigurationsWithType:(unsigned long long)a0;

- (id)appIdentifier;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_generateUniqueIdentifier;
- (void)_addKeysToJSONDictionary:(id)a0;
- (id)_initWithComplicationType:(unsigned long long)a0 JSONDictionary:(id)a1;
- (id)localizedKeylineLabelText;
- (id)localizedDetailText;
- (BOOL)appearsInDailySnapshotForFamily:(long long)a0;
- (id)customDailySnapshotKeyForFamily:(long long)a0 device:(id)a1;
- (BOOL)snapshotContext:(id)a0 isStaleRelativeToContext:(id)a1;

@end
