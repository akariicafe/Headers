@class WorldClockCity;

@interface NTKWorldClockComplication : NTKComplication

@property (readonly, nonatomic) WorldClockCity *city;

+ (BOOL)supportsSecureCoding;
+ (id)_allComplicationConfigurationsWithType:(unsigned long long)a0;
+ (id)_allCities;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)_generateUniqueIdentifier;
- (void)_addKeysToJSONDictionary:(id)a0;
- (id)_initWithComplicationType:(unsigned long long)a0 JSONDictionary:(id)a1;
- (id)localizedKeylineLabelText;
- (id)localizedDetailText;
- (BOOL)appearsInDailySnapshotForFamily:(long long)a0;
- (id)customDailySnapshotKeyForFamily:(long long)a0 device:(id)a1;
- (BOOL)snapshotContext:(id)a0 isStaleRelativeToContext:(id)a1;
- (id)localizedRichDetailText;
- (void)_handleAddedFromFaceSharing;
- (id)localizedRichKeylineLabelText;

@end
