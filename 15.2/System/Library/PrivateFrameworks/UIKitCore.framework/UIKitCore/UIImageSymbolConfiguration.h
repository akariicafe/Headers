@class NSString, NSDictionary, NSArray;

@interface UIImageSymbolConfiguration : UIImageConfiguration {
    double _pointSize;
    struct { unsigned char hasFixedPointSize : 1; unsigned char usesHierarchicalColors : 1; unsigned char prefersMulticolor : 1; unsigned char specifiedPrefersMulticolor : 1; } _configFlags;
}

@property (class, readonly, nonatomic) UIImageSymbolConfiguration *unspecifiedConfiguration;

@property (readonly, nonatomic) long long scale;
@property (readonly, nonatomic) long long weight;
@property (readonly, copy, nonatomic) NSString *textStyle;
@property (readonly, nonatomic) double customFontPointSizeMultiplier;
@property (readonly, nonatomic) double pointSizeForScalingWithTextStyle;
@property (readonly, nonatomic) NSDictionary *_namedColorStyles;
@property (readonly, nonatomic) NSArray *_colors;

+ (BOOL)supportsSecureCoding;
+ (id)configurationWithWeight:(long long)a0;
+ (id)configurationWithHierarchicalColor:(id)a0;
+ (id)configurationWithPaletteColors:(id)a0;
+ (id)_configurationWithHierarchicalColors:(id)a0;
+ (id)configurationPreferringMulticolor;
+ (id)configurationWithPointSize:(double)a0;
+ (id)configurationWithPointSize:(double)a0 weight:(long long)a1 scale:(long long)a2;
+ (id)_configurationWithNamedColorStyles:(id)a0;
+ (id)defaultConfiguration;
+ (id)configurationWithTextStyle:(id)a0 scale:(long long)a1;
+ (id)configurationWithTextStyle:(id)a0;
+ (id)configurationWithScale:(long long)a0;
+ (id)_defaultConfiguration;
+ (id)configurationWithPointSize:(double)a0 weight:(long long)a1;
+ (id)configurationWithFont:(id)a0 scale:(long long)a1;
+ (id)configurationWithFont:(id)a0;

- (void)_deriveGlyphSize:(long long *)a0 weight:(long long *)a1 pointSize:(double *)a2;
- (id)configurationWithoutWeight;
- (BOOL)_shouldApplyConfiguration:(id)a0;
- (id)_configurationByReplacingColors:(id)a0;
- (BOOL)isEqualToConfiguration:(id)a0;
- (id)configurationWithoutScale;
- (id)_hierarchicalColorForLayerLevel:(long long)a0 traitCollection:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)_paletteColorsWithTraitCollection:(id)a0;
- (BOOL)isEquivalentToConfiguration:(id)a0;
- (id)configurationWithoutPointSizeAndWeight;
- (id)description;
- (void)_applyConfigurationValuesTo:(id)a0;
- (BOOL)_isUnspecified;
- (id)_initWithTraitCollection:(id)a0;
- (BOOL)_hasColorConfigurationWithTintColor;
- (id)configurationWithoutTextStyle;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isSimilarToConfiguration:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_hasSpecifiedScale;
- (unsigned long long)hash;
- (id)debugDescription;

@end
