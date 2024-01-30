@class PRPosterHomeScreenAppearance, PRPosterGradientHomeScreenAppearance, PRPosterSolidColorHomeScreenAppearance, NSString, PRPosterLockPosterHomeScreenAppearance, PRPosterHomePosterHomeScreenAppearance;

@interface PRPosterHomeScreenConfiguration : NSObject <BSDescriptionStreamable, BSXPCSecureCoding, NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long selectedAppearanceType;
@property (readonly, copy, nonatomic) PRPosterHomeScreenAppearance *selectedAppearance;
@property (readonly, copy, nonatomic) PRPosterLockPosterHomeScreenAppearance *lockPosterAppearance;
@property (readonly, copy, nonatomic) PRPosterSolidColorHomeScreenAppearance *solidColorAppearance;
@property (readonly, copy, nonatomic) PRPosterGradientHomeScreenAppearance *gradientAppearance;
@property (readonly, copy, nonatomic) PRPosterHomePosterHomeScreenAppearance *homePosterAppearance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)supportsBSXPCSecureCoding;
+ (id)defaultHomeSceenConfigurationForBundleID:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (Class)classForCoder;
- (void)appendDescriptionToFormatter:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithSelectedAppearanceType:(unsigned long long)a0 lockPosterAppearance:(id)a1 solidColorAppearance:(id)a2 gradientAppearance:(id)a3 homePosterAppearance:(id)a4;
- (id)configurationApplyingColorPickerConfigurationsFromConfiguration:(id)a0;
- (id)initWithHomeScreenConfiguration:(id)a0;

@end
