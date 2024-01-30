@class NSString;

@interface PRPosterTimeFontConfiguration : NSObject <BSDescriptionStreamable, BSXPCSecureCoding, NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) PRPosterTimeFontConfiguration *defaultConfiguration;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configurationWithTimeFontConfiguration:(id)a0 extensionBundleIdentifier:(id)a1;
+ (BOOL)supportsBSXPCSecureCoding;
+ (id)configurationWithTimeFontConfiguration:(id)a0 extensionBundleURL:(id)a1;

- (id)timeFontConfigurationWithExtensionBundleURL:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)timeFontConfigurationWithExtensionBundle:(id)a0;
- (id)timeFontIdentifier;
- (id)timeFontConfigurationWithExtensionBundleIdentifier:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)init;

@end
