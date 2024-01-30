@class NSString, CLKWidgetComplicationDescriptor, INIntent;

@interface NTKApricotComplication : NTKThirdPartyComplication

@property (readonly, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly, nonatomic) NSString *containerBundleIdentifier;
@property (readonly, nonatomic) NSString *kind;
@property (readonly, nonatomic) INIntent *intent;
@property (readonly, nonatomic) CLKWidgetComplicationDescriptor *descriptor;

+ (BOOL)supportsSecureCoding;
+ (id)complicationWithDescriptor:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)appIdentifier;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)_addKeysToJSONDictionary:(id)a0;
- (id)_createUniqueIdentifier;
- (id)_initWithComplicationType:(unsigned long long)a0 JSONDictionary:(id)a1;
- (BOOL)appearsInDailySnapshotForFamily:(long long)a0;
- (id)clkClientIdentifier;
- (id)clkComplicationDescriptor;
- (id)ntk_localizedNameWithOptions:(unsigned long long)a0 forRichComplicationSlot:(BOOL)a1;
- (BOOL)supportsComplicationFamily:(long long)a0 forDevice:(id)a1;

@end
