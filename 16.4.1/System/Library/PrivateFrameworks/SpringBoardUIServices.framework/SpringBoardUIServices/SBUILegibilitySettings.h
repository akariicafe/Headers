@class UIColor, NSString, _UILegibilitySettings;

@interface SBUILegibilitySettings : NSObject <SBUILegibilitySettings> {
    unsigned long long _computedHash;
    _UILegibilitySettings *_cachedLegacyLegibiltiySettings;
}

@property (readonly, nonatomic) UIColor *primaryColor;
@property (readonly, nonatomic) UIColor *secondaryColor;
@property (readonly, nonatomic) UIColor *shadowColor;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) struct { double shadowRadius; double shadowAlpha; double imageOutset; long long compositingFilter; } shadowSettings;
@property (readonly, nonatomic) double minFillHeight;
@property (readonly, nonatomic) double imageOutset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstanceForStyle:(long long)a0;
+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (double)shadowAlpha;
- (id)initWithCoder:(id)a0;
- (id)initWithStyle:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)compositingFilter;
- (void).cxx_destruct;
- (double)shadowRadius;
- (id)initWithContentColor:(id)a0;
- (id)initWithContentColor:(id)a0 contrast:(double)a1;
- (id)initWithStyle:(long long)a0 contentColor:(id)a1;
- (id)initWithStyle:(long long)a0 primaryColor:(id)a1 secondaryColor:(id)a2 shadowColor:(id)a3;
- (id)_UILegibilitySettings;
- (void)_configureForStyle:(long long)a0 contentColor:(id)a1;
- (id)initWithStyle:(long long)a0 primaryColor:(id)a1 secondaryColor:(id)a2 shadowColor:(id)a3 shadowSettings:(struct { double x0; double x1; double x2; long long x3; })a4;
- (id)initWithStyle:(long long)a0 primaryColor:(id)a1 secondaryColor:(id)a2 shadowColor:(id)a3 shadowSettings:(struct { double x0; double x1; double x2; long long x3; })a4 minFillHeight:(double)a5;
- (BOOL)isEqualToLegibilitySettings:(id)a0;

@end
