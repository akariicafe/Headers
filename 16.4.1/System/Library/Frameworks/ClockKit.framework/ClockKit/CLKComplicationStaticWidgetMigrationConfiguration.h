@class NSString;

@interface CLKComplicationStaticWidgetMigrationConfiguration : CLKComplicationWidgetMigrationConfiguration

@property (readonly, copy, nonatomic) NSString *kind;
@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier;

+ (BOOL)supportsSecureCoding;
+ (id)staticWidgetMigrationConfigurationWithKind:(id)a0 extensionBundleIdentifier:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithKind:(id)a0 extensionBundleIdentifier:(id)a1;
- (void).cxx_destruct;

@end
