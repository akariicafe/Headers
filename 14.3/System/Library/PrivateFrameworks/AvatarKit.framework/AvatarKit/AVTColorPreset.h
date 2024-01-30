@class UIColor, NSString, NSDictionary, UIImage, NSArray;

@interface AVTColorPreset : NSObject {
    long long _category;
    NSDictionary *_derivedColors;
    NSArray *_colors;
    UIColor *_previewColorMin;
    UIColor *_previewColorMid;
    UIColor *_previewColorMax;
    UIColor *_previewAccentColorMin;
    UIColor *_previewAccentColorMid;
    UIColor *_previewAccentColorMax;
    unsigned long long _previewAccentType;
    float _variation;
    NSArray *_materials;
}

@property (readonly) NSString *name;
@property (readonly) NSString *localizedName;
@property (readonly) UIImage *thumbnail;
@property (readonly) long long category;
@property (readonly) float variation;
@property (readonly) BOOL isNatural;

+ (id)colorPresetWithName:(id)a0 category:(long long)a1 colorIndex:(unsigned long long)a2 variation:(float)a3;
+ (id)colorPresetWithName:(id)a0 category:(long long)a1 variation:(float)a2;
+ (id)secondaryColorPresetWithName:(id)a0 category:(long long)a1 variation:(float)a2;
+ (id)colorPresetWithName:(id)a0 category:(long long)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)colorPresetWithVariation:(float)a0;
- (void)didMutate;
- (void)renderColorIntoCALayer:(id)a0 withSkinColor:(id)a1;
- (id)gradientLayerWithRangeMin:(float)a0 max:(float)a1 withSkinColor:(id)a2;
- (id)description;
- (id)derivedColorNameForPresetCategory:(long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)baseColor;
- (id)materialAtIndex:(unsigned long long)a0;
- (unsigned long long)materialCount;
- (void)updateMaterialsIfNeeded;
- (id)previewColor;
- (void)renderNaturalSkinColorIntoCALayer:(id)a0 withSkinColor:(id)a1;
- (BOOL)shouldBlendWithSkinColor;
- (id)previewAccentColor;
- (id)gradientLayerForNaturalColorWithSkinColor:(id)a0;
- (id)initWithCategory:(long long)a0 description:(id)a1;
- (id)derivedColor;
- (void)setDerivedColors:(id)a0;
- (id)derivedCategoriesNames;
- (void)renderColorIntoCALayer:(id)a0;
- (id)gradientLayerWithRangeMin:(float)a0 max:(float)a1;

@end
