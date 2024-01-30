@class NSString, NSDictionary, NSArray;

@interface UIImageSymbolConfiguration : UIImageConfiguration {
    double _pointSize;
    struct { unsigned char hasFixedPointSize : 1; unsigned char usesHierarchicalColors : 1; unsigned char prefersMulticolor : 1; unsigned char specifiedPrefersMulticolor : 1; unsigned char prefersMonochrome : 1; unsigned char specifiedPrefersMonochrome : 1; } _configFlags;
}

@property (class, readonly, nonatomic) UIImageSymbolConfiguration *unspecifiedConfiguration;

@property (readonly, nonatomic) long long scale;
@property (readonly, nonatomic) long long weight;
@property (readonly, copy, nonatomic) NSString *textStyle;
@property (readonly, nonatomic) double customFontPointSizeMultiplier;
@property (readonly, nonatomic) double pointSizeForScalingWithTextStyle;
@property (readonly, nonatomic) NSDictionary *_namedColorStyles;
@property (readonly, nonatomic) NSArray *_colors;

+ (id)defaultConfiguration;
+ (BOOL)supportsSecureCoding;
+ (id)configurationWithPaletteColors:(id)a0;
+ (id)_configurationWithHierarchicalColors:(id)a0;
+ (id)_configurationWithNamedColorStyles:(id)a0;
+ (id)_defaultConfiguration;
+ (id)configurationPreferringMonochrome;
+ (id)configurationPreferringMulticolor;
+ (id)configurationWithFont:(id)a0;
+ (id)configurationWithFont:(id)a0 scale:(long long)a1;
+ (id)configurationWithHierarchicalColor:(id)a0;
+ (id)configurationWithPointSize:(double)a0;
+ (id)configurationWithPointSize:(double)a0 weight:(long long)a1;
+ (id)configurationWithPointSize:(double)a0 weight:(long long)a1 scale:(long long)a2;
+ (id)configurationWithScale:(long long)a0;
+ (id)configurationWithTextStyle:(id)a0;
+ (id)configurationWithTextStyle:(id)a0 scale:(long long)a1;
+ (id)configurationWithWeight:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_isUnspecified;
- (id)configurationWithoutWeight;
- (BOOL)isEquivalentToConfiguration:(id)a0;
- (id)_configurationByReplacingColors:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)configurationWithoutScale;
- (id)_initWithTraitCollection:(id)a0;
- (id)_resolvedColorForNamedStyle:(id)a0 effect:(id)a1;
- (id)debugDescription;
- (BOOL)isSimilarToConfiguration:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)_hierarchicalColorForLayerLevel:(long long)a0 effect:(id)a1;
- (unsigned long long)hash;
- (void)_deriveGlyphSize:(long long *)a0 weight:(long long *)a1 pointSize:(double *)a2;
- (BOOL)_hasSpecifiedScale;
- (BOOL)isEqualToConfiguration:(id)a0;
- (id)description;
- (BOOL)_shouldApplyConfiguration:(id)a0;
- (void)_applyConfigurationValuesTo:(id)a0;
- (BOOL)_hasColorConfigurationWithTintColor;
- (id)_paletteColorsWithEffect:(id)a0;
- (void).cxx_destruct;
- (id)configurationWithoutTextStyle;
- (id)configurationWithoutPointSizeAndWeight;

@end
