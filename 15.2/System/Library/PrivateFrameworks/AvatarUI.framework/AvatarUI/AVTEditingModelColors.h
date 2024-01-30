@class NSDictionary, AVTAvatarColorVariationStore;

@interface AVTEditingModelColors : NSObject <NSCopying>

@property (readonly, nonatomic) NSDictionary *storage;
@property (retain, nonatomic) AVTAvatarColorVariationStore *variationStore;

+ (id)buildAllColors;
+ (void)createColorsForPaletteCategory:(long long)a0 inCache:(id)a1 withDerivedPaletteCategories:(id)a2;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)colorForSettingKind:(struct { long long x0; long long x1; })a0 identifier:(id)a1;
- (id)colorsForSettingKind:(struct { long long x0; long long x1; })a0;
- (BOOL)colorHasDerivedColorDependency:(id)a0;
- (id)initWithStorage:(id)a0 variationStore:(id)a1;

@end
