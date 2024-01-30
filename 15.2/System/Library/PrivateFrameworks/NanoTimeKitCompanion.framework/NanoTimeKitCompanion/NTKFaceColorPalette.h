@class NTKPigmentEditOption, NSString, NTKInterpolatedColorPalette, UIColor, NSBundle, NTKFaceColorPaletteConfiguration, NSMutableArray, NSCache;

@interface NTKFaceColorPalette : NSObject <NSObject, NSCopying, NTKFaceColorPalette, NTKFaceColorPaletteConfigurationDelegate, NTKFaceColorPaletteKeyColors> {
    BOOL _tritium;
    NSString *_identifier;
}

@property (copy, nonatomic) NSString *faceSpecificNamespace;
@property (retain, nonatomic) NSMutableArray *bundleList;
@property (retain, nonatomic) NSCache *colorCache;
@property (retain, nonatomic) NSCache *swatchImageCache;
@property (retain, nonatomic) NSBundle *domainBundle;
@property (retain, nonatomic) NTKInterpolatedColorPalette *interpolatedTritiumPalette;
@property (retain, nonatomic) NTKFaceColorPalette *tritiumPalette;
@property (retain, nonatomic) NTKFaceColorPaletteConfiguration *configuration;
@property (retain, nonatomic) NTKPigmentEditOption *pigmentEditOption;
@property (readonly, nonatomic, getter=isTritium) BOOL tritium;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIColor *primaryColor;
@property (readonly, nonatomic) UIColor *primaryShiftedColor;
@property (readonly, nonatomic) UIColor *secondaryColor;
@property (readonly, nonatomic) UIColor *secondaryShiftedColor;
@property (readonly, nonatomic) UIColor *swatch;

+ (BOOL)resolveInstanceMethod:(SEL)a0;
+ (id)colorWithName:(id)a0 inDomain:(id)a1;

- (id)identifier;
- (void)configurationDidChange:(id)a0;
- (id)valueForKey:(id)a0;
- (BOOL)isWhite;
- (id)_secondaryColor;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)isZeus;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isSiriColor;
- (void)executeWithOption:(id)a0 block:(id /* block */)a1;
- (id)initWithDomainName:(id)a0 inBundle:(id)a1;
- (id)initWithFaceClass:(Class)a0;
- (BOOL)isMulticolor;
- (BOOL)isVictory;
- (void)colorBundleContentChanged;
- (id)primaryColorWithFraction:(double)a0;
- (BOOL)isWhiteColor;
- (BOOL)isBlackColor;
- (BOOL)isNotFoundColor:(id)a0;
- (BOOL)isRainbowColor;
- (BOOL)isEvergreenCollection;
- (BOOL)isCompositePalette;
- (id)swatchImageForSize:(struct CGSize { double x0; double x1; })a0;
- (id)swatchPrimaryColor;
- (id)paletteAtIndex:(unsigned long long)a0;
- (void)resetColorCache;
- (id)multitoneColorNames;
- (id)copyWithOption:(id)a0;
- (id)_notFoundColor;
- (id)_loadColorFromAssetCatalogForKey:(id)a0 namespace:(id)a1 collectionName:(id)a2 bundle:(id)a3 colorFraction:(double)a4 ignoringOptionAndCollection:(BOOL)a5 inspector:(id)a6;
- (id)entryNameForKey:(id)a0;
- (BOOL)isUnityColor;
- (id)_unitySwatchImageForSize:(struct CGSize { double x0; double x1; })a0;
- (id)_unityMiddleColor;
- (id)tritiumPaletteWithProgress:(double)a0;
- (BOOL)hasPrimaryColorRange;
- (id)_primaryShiftedColor;
- (id)_secondaryShiftedColor;
- (id)_unitySwatchImageForSize:(struct CGSize { double x0; double x1; })a0 redColor:(id)a1 blackColor:(id)a2 greenColor:(id)a3;

@end
