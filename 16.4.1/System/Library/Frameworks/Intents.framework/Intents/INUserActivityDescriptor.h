@class NSString;

@interface INUserActivityDescriptor : INAppDescriptor

@property (readonly, copy, nonatomic) NSString *userActivityType;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)appDescriptor;
- (id)descriptorWithAppDescriptor:(id)a0;
- (id)initWithUserActivityType:(id)a0 bundleIdentifier:(id)a1;
- (id)initWithUserActivityType:(id)a0 localizedName:(id)a1 bundleIdentifier:(id)a2 extensionBundleIdentifier:(id)a3 counterpartIdentifiers:(id)a4 teamIdentifier:(id)a5 supportedIntents:(id)a6 bundleURL:(id)a7;

@end
