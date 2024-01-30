@class NSString, CLKComplicationDescriptor;

@interface NTKRemoteComplication : NTKThirdPartyComplication

@property (readonly, nonatomic) NSString *clientIdentifier;
@property (readonly, nonatomic) NSString *appBundleIdentifier;
@property (readonly, nonatomic) CLKComplicationDescriptor *complicationDescriptor;

+ (BOOL)supportsSecureCoding;
+ (id)_allComplicationConfigurationsWithType:(unsigned long long)a0;
+ (id)_remoteStocksComplicationDescriptorWithIdentifier:(id)a0 forDevice:(id)a1;
+ (id)_remoteStocksComplicationWithIdentifier:(id)a0 forDevice:(id)a1;
+ (id)complicationWithClientIdentifier:(id)a0 appBundleIdentifier:(id)a1 complicationDescriptor:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)appIdentifier;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)_addKeysToJSONDictionary:(id)a0;
- (id)_generatUniqueIdentifier;
- (id)_initWithComplicationType:(unsigned long long)a0 JSONDictionary:(id)a1;
- (id)clkClientIdentifier;
- (id)clkComplicationDescriptor;
- (id)companionLocalizedKeylineLabelText;
- (id)customDailySnapshotKeyForFamily:(long long)a0 device:(id)a1;
- (id)initWithComplicationType:(unsigned long long)a0;
- (id)localizedDetailText;
- (id)localizedKeylineLabelText;
- (id)localizedRichDetailText;
- (id)localizedRichKeylineLabelText;
- (id)ntk_localizedNameWithOptions:(unsigned long long)a0 forRichComplicationSlot:(BOOL)a1;
- (void)resetComplicationDescriptor;
- (BOOL)supportsComplicationFamily:(long long)a0 forDevice:(id)a1;
- (id)watchLocalizedKeylineLabelText;

@end
