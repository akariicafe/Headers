@class CLKCBundleComplication, CLKComplicationDescriptor;

@interface NTKBundleComplication : NTKComplication

@property (readonly, nonatomic) CLKCBundleComplication *complication;
@property (readonly, nonatomic) CLKComplicationDescriptor *complicationDescriptor;

+ (BOOL)supportsSecureCoding;
+ (id)bundledComplicationWithBundleIdentifier:(id)a0 appBundleIdentifier:(id)a1 complicationDescriptor:(id)a2;
+ (id)bundledComplicationWithComplication:(id)a0;
+ (id)_revertedBundleComplicationFromJSONDictionary:(id)a0;
+ (id)bundledComplicationWithBundleIdentifier:(id)a0 appBundleIdentifier:(id)a1;

- (id)appIdentifier;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)ntk_sectionIdentifier;
- (id)_generateUniqueIdentifier;
- (void)_addKeysToJSONDictionary:(id)a0;
- (id)_initWithComplicationType:(unsigned long long)a0 JSONDictionary:(id)a1;
- (id)localizedKeylineLabelText;
- (id)localizedDetailText;
- (id)customDailySnapshotKeyForFamily:(long long)a0 device:(id)a1;
- (id)localizedRichDetailText;
- (BOOL)supportsComplicationFamily:(long long)a0 forDevice:(id)a1;
- (id)localizedRichKeylineLabelText;

@end
