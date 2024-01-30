@class UIColor;

@interface NTKSpectrumColorPalette : NSObject

@property (readonly, nonatomic) UIColor *bandColor;
@property (readonly, nonatomic) UIColor *fromColor;
@property (readonly, nonatomic) UIColor *toColor;
@property (readonly, nonatomic) float overlayOpacity;

+ (id)swatchImageForColor:(unsigned long long)a0 device:(id)a1;
+ (id)paletteForColor:(unsigned long long)a0 device:(id)a1;

- (void).cxx_destruct;
- (id)initWithColor:(unsigned long long)a0 device:(id)a1;

@end
