@interface NTKDateComplication : NTKComplication

@property (readonly, nonatomic) unsigned long long dateStyle;

+ (BOOL)supportsSecureCoding;
+ (id)complicationWithDateStyle:(unsigned long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)ntk_sectionIdentifier;
- (id)ntk_localizedNameWithOptions:(unsigned long long)a0 forRichComplicationSlot:(BOOL)a1;
- (id)initWithComplicationType:(unsigned long long)a0;
- (id)_generateUniqueIdentifier;
- (void)_addKeysToJSONDictionary:(id)a0;
- (id)_initWithComplicationType:(unsigned long long)a0 JSONDictionary:(id)a1;
- (BOOL)appearsInDailySnapshotForFamily:(long long)a0;
- (id)customDailySnapshotKeyForFamily:(long long)a0 device:(id)a1;
- (BOOL)snapshotContext:(id)a0 isStaleRelativeToContext:(id)a1;
- (void)_migrateFromSkiHillWithCoder:(id)a0;

@end
