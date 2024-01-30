@class NSString;

@interface PRPosterSystemTimeFontConfiguration : PRPosterTimeFontConfiguration

@property (readonly, copy, nonatomic) NSString *timeFontIdentifier;

+ (BOOL)supportsSecureCoding;
+ (id)defaultTimeFontIdentifier;
+ (BOOL)supportsBSXPCSecureCoding;

- (id)timeFontConfigurationWithExtensionBundleURL:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithTimeFontIdentifier:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)uniqueIdentifier;

@end
