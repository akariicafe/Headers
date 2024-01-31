@class NSString, INIntent;

@interface CLKComplicationIntentWidgetMigrationConfiguration : CLKComplicationWidgetMigrationConfiguration

@property (readonly, copy, nonatomic) NSString *kind;
@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly, copy, nonatomic) INIntent *intent;
@property (readonly, copy, nonatomic) NSString *localizedDisplayName;

+ (BOOL)supportsSecureCoding;
+ (id)intentWidgetMigrationConfigurationWithKind:(id)a0 extensionBundleIdentifier:(id)a1 intent:(id)a2 localizedDisplayName:(id)a3;

- (void)encodeWithCoder:(id)a0;
- (void)setIntent:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithKind:(id)a0 extensionBundleIdentifier:(id)a1 intent:(id)a2 localizedDisplayName:(id)a3;

@end
