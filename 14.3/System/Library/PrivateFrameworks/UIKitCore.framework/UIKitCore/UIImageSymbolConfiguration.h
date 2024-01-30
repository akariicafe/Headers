@class NSString;
@protocol UIImageSymbolConfigurationProvider;

@interface UIImageSymbolConfiguration : UIImageConfiguration {
    double _pointSize;
    struct { unsigned char hasFixedPointSize : 1; unsigned char providerUpdates : 1; unsigned char ignoresDynamicType : 1; } _configFlags;
}

@property (class, readonly, nonatomic) UIImageSymbolConfiguration *unspecifiedConfiguration;

@property (readonly, nonatomic) long long scale;
@property (readonly, nonatomic) long long weight;
@property (readonly, copy, nonatomic) NSString *textStyle;
@property (readonly, weak, nonatomic) id<UIImageSymbolConfigurationProvider> provider;
@property (readonly, nonatomic) double customFontPointSizeMultiplier;
@property (readonly, nonatomic) double pointSizeForScalingWithTextStyle;

+ (BOOL)supportsSecureCoding;
+ (id)defaultConfiguration;
+ (id)configurationWithPointSize:(double)a0;
+ (id)configurationWithTextStyle:(id)a0;
+ (id)configurationWithWeight:(long long)a0;
+ (id)configurationWithTextStyle:(id)a0 scale:(long long)a1;
+ (id)_defaultConfiguration;
+ (id)configurationWithFont:(id)a0 scale:(long long)a1;
+ (id)configurationWithScale:(long long)a0;
+ (id)configurationWithPointSize:(double)a0 weight:(long long)a1;
+ (id)configurationWithPointSize:(double)a0 weight:(long long)a1 scale:(long long)a2;
+ (id)configurationWithFont:(id)a0;

- (id)configurationWithoutWeight;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToConfiguration:(id)a0;
- (BOOL)_isUnspecified;
- (BOOL)isSimilarToConfiguration:(id)a0;
- (id)configurationWithoutPointSizeAndWeight;
- (id)_initWithTraitCollection:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)_hasSpecifiedScale;
- (BOOL)isEqual:(id)a0;
- (void)_applyConfigurationValuesTo:(id)a0;
- (id)configurationWithoutTextStyle;
- (BOOL)isEquivalentToConfiguration:(id)a0;
- (BOOL)_shouldApplyConfiguration:(id)a0;
- (id)debugDescription;
- (id)configurationWithoutScale;
- (void)_deriveGlyphSize:(long long *)a0 weight:(long long *)a1 pointSize:(double *)a2;
- (void)encodeWithCoder:(id)a0;

@end
