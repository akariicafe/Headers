@class UIFont, NSString, PRPosterTimeFontConfiguration, BSUIVibrancyConfiguration, PRPosterColor;

@interface PRPosterTitleStyleConfiguration : NSObject <BSDescriptionStreamable, BSXPCSecureCoding, NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly, copy, nonatomic) UIFont *defaultTimeFont;
@property (class, readonly, copy, nonatomic) PRPosterColor *defaultTitleColor;
@property (class, readonly, copy, nonatomic) NSString *defaultTimeNumberingSystem;
@property (class, readonly, nonatomic) double defaultContentsLuminance;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) PRPosterTimeFontConfiguration *timeFontConfiguration;
@property (readonly, copy, nonatomic) PRPosterColor *titleColor;
@property (readonly, copy, nonatomic) NSString *timeNumberingSystem;
@property (readonly, nonatomic) double contentsLuminance;
@property (readonly, copy, nonatomic) NSString *groupName;
@property (readonly, nonatomic, getter=isUserConfigured) BOOL userConfigured;
@property (readonly, nonatomic, getter=isAlternateDateEnabled) BOOL alternateDateEnabled;
@property (readonly, copy, nonatomic) PRPosterColor *effectiveTitleColor;
@property (readonly, copy, nonatomic) BSUIVibrancyConfiguration *vibrancyConfiguration;
@property (readonly, copy, nonatomic) NSString *effectiveTimeNumberingSystem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)supportsBSXPCSecureCoding;

- (id)initWithTitleStyleConfiguration:(id)a0;
- (id)initWithTimeFontConfiguration:(id)a0 titleColor:(id)a1 timeNumberingSystem:(id)a2 userConfigured:(BOOL)a3 contentsLuminance:(double)a4 alternateDateEnabled:(BOOL)a5 groupName:(id)a6;
- (BOOL)isVisiblyEqualToTitleStyleConfiguration:(id)a0;
- (id)vibrancyConfigurationWithExtensionBundle:(id)a0 luminanceReduced:(BOOL)a1;
- (id)effectiveTimeFontWithExtensionBundleURL:(id)a0;
- (id)effectiveTimeFontWithExtensionBundle:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)vibrancyConfigurationWithExtensionBundle:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)_vibrancyConfigurationWithExtensionBundleURL:(id)a0 luminanceReduced:(BOOL)a1;
- (id)resolvedWithLookDefaultTitleStyleConfiguration:(id)a0 allowTimeColorUpdates:(BOOL)a1 allowTimeFontUpdates:(BOOL)a2;
- (id)vibrancyConfigurationWithExtensionBundleURL:(id)a0;
- (id)initWithTimeFontConfiguration:(id)a0 titleColor:(id)a1;
- (id)initWithTimeFontConfiguration:(id)a0 titleColor:(id)a1 timeNumberingSystem:(id)a2;
- (id)initWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (Class)classForCoder;
- (void)appendDescriptionToFormatter:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)vibrancyConfigurationWithExtensionBundleURL:(id)a0 luminanceReduced:(BOOL)a1;
- (void).cxx_destruct;

@end
