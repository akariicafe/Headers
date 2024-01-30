@class NSString, DNDApplicationIdentifier;

@interface DNDModeConfigurationAppForegroundTrigger : DNDModeConfigurationTrigger

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) DNDApplicationIdentifier *applicationIdentifier;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)hasSecureData;
- (id)initWithApplicationIdentifier:(id)a0 enabledSetting:(unsigned long long)a1;
- (id)initWithBundleIdentifier:(id)a0 enabledSetting:(unsigned long long)a1;

@end
