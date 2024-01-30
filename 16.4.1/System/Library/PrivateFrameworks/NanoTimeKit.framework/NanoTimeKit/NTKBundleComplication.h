@class CLKCBundleComplication, CLKComplicationDescriptor;

@interface NTKBundleComplication : NTKComplication

@property (readonly, nonatomic) CLKCBundleComplication *complication;
@property (readonly, nonatomic) CLKComplicationDescriptor *complicationDescriptor;

+ (BOOL)supportsSecureCoding;
+ (id)_revertedBundleComplicationFromJSONDictionary:(id)a0;
+ (id)bundledComplicationWithBundleIdentifier:(id)a0 appBundleIdentifier:(id)a1;
+ (id)bundledComplicationWithBundleIdentifier:(id)a0 appBundleIdentifier:(id)a1 complicationDescriptor:(id)a2;
+ (id)bundledComplicationWithComplication:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)appIdentifier;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)_addKeysToJSONDictionary:(id)a0;
- (id)_generateUniqueIdentifier;
- (id)_initWithComplicationType:(unsigned long long)a0 JSONDictionary:(id)a1;
- (id)_migrateToFamily:(long long)a0 withAllowedComplications:(id)a1;
- (id)customDailySnapshotKeyForFamily:(long long)a0 device:(id)a1;
- (id)localizedDetailText;
- (id)localizedKeylineLabelText;
- (id)localizedRichDetailText;
- (id)localizedRichKeylineLabelText;
- (id)ntk_sectionIdentifier;
- (BOOL)supportsComplicationFamily:(long long)a0 forDevice:(id)a1;

@end
