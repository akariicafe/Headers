@class CLKCBundleComplication;

@interface NTKBundleComplication : NTKComplication

@property (readonly, nonatomic) CLKCBundleComplication *complication;

+ (BOOL)supportsSecureCoding;
+ (id)bundledComplicationWithBundleIdentifier:(id)a0 appBundleIdentifier:(id)a1;
+ (id)bundledComplicationWithComplication:(id)a0;
+ (id)_revertedBundleComplicationFromJSONDictionary:(id)a0;

- (id)appIdentifier;
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
- (id)customDailySnapshotKeyForFamily:(long long)a0 device:(id)a1;
- (id)localizedRichDetailText;
- (BOOL)supportsComplicationFamily:(long long)a0 forDevice:(id)a1;
- (id)localizedRichKeylineLabelText;

@end
