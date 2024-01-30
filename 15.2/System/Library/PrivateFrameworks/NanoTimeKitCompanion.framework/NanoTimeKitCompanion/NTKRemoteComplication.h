@class NSString, CLKComplicationDescriptor;

@interface NTKRemoteComplication : NTKComplication

@property (readonly, nonatomic) NSString *clientIdentifier;
@property (readonly, nonatomic) NSString *appBundleIdentifier;
@property (readonly, nonatomic) CLKComplicationDescriptor *complicationDescriptor;

+ (BOOL)supportsSecureCoding;
+ (id)_allComplicationConfigurationsWithType:(unsigned long long)a0;
+ (id)complicationWithClientIdentifier:(id)a0 appBundleIdentifier:(id)a1 complicationDescriptor:(id)a2;
+ (id)_remoteStocksComplicationWithIdentifier:(id)a0 forDevice:(id)a1;
+ (id)_remoteStocksComplicationDescriptorWithIdentifier:(id)a0 forDevice:(id)a1;

- (id)appIdentifier;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)ntk_localizedNameWithOptions:(unsigned long long)a0 forRichComplicationSlot:(BOOL)a1;
- (id)initWithComplicationType:(unsigned long long)a0;
- (void)_addKeysToJSONDictionary:(id)a0;
- (id)_initWithComplicationType:(unsigned long long)a0 JSONDictionary:(id)a1;
- (id)localizedKeylineLabelText;
- (id)localizedDetailText;
- (id)customDailySnapshotKeyForFamily:(long long)a0 device:(id)a1;
- (id)localizedRichDetailText;
- (BOOL)supportsComplicationFamily:(long long)a0 forDevice:(id)a1;
- (id)localizedRichKeylineLabelText;
- (id)_generatUniqueIdentifier;
- (id)companionLocalizedKeylineLabelText;
- (void)resetComplicationDescriptor;
- (id)watchLocalizedKeylineLabelText;

@end
