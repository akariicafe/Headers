@class NSString;

@interface PRPosterCustomTimeFontConfiguration : PRPosterTimeFontConfiguration

@property (readonly, copy, nonatomic) NSString *fontPostScriptName;
@property (readonly, copy, nonatomic) NSString *extensionBundleRelativeFilePath;

+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;

- (id)timeFontConfigurationWithExtensionBundleURL:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFont:(id)a0 extensionBundleURL:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithFontPostScriptName:(id)a0 extensionBundleRelativeFilePath:(id)a1;
- (void)appendDescriptionToFormatter:(id)a0;
- (id)fontWithExtensionBundleURL:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithFont:(id)a0 extensionBundle:(id)a1;
- (id)uniqueIdentifier;

@end
