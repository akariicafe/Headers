@class NSArray, NSIndexSet;

@interface PIParallaxColorPalette : NSObject

@property (readonly, copy, nonatomic) NSArray *primaryColors;
@property (readonly, copy, nonatomic) NSArray *secondaryColors;
@property (readonly, copy, nonatomic) NSIndexSet *suggestionIndices;

+ (id)_loadColorsFromValues:(id)a0 mode:(id)a1 error:(out id *)a2;
+ (id)_paletteWithConfigurationDictionary:(id)a0 error:(out id *)a1;
+ (id)_serializeColors:(id)a0 mode:(id)a1;
+ (id)colorBGPalette;
+ (id)colorWashDuotonePalette;
+ (id)colorWashSinglePalette;
+ (id)customPalette;
+ (id)loadPaletteFromURL:(id)a0 error:(out id *)a1;
+ (id)loadPaletteWithName:(id)a0;

- (id)initWithColors:(id)a0;
- (void).cxx_destruct;
- (id)suggestionAtIndex:(unsigned long long)a0;
- (unsigned long long)_lookupColor:(id)a0 withPredicate:(id /* block */)a1;
- (unsigned long long)indexOfColor:(id)a0;
- (id)initWithPrimaryColors:(id)a0 secondaryColors:(id)a1;
- (id)initWithPrimaryColors:(id)a0 secondaryColors:(id)a1 suggestionIndices:(id)a2;
- (id)paletteColorForColor:(id)a0;
- (id)suggestionForColor:(id)a0;
- (BOOL)writeToURL:(id)a0 mode:(id)a1 error:(out id *)a2;

@end
