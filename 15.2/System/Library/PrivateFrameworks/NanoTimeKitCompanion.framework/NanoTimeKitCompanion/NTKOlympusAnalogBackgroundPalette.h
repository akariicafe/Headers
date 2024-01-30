@class NTKOlympusColorPalette, UIColor, NSString;

@interface NTKOlympusAnalogBackgroundPalette : NSObject <NTKVictoryAnalogBackgroundColorPalette>

@property (retain, nonatomic) NTKOlympusColorPalette *olympusPalette;
@property (retain, nonatomic) NTKOlympusColorPalette *tritiumPalette;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) UIColor *numbersColor;
@property (readonly, nonatomic) UIColor *analogDotColor;
@property (readonly, nonatomic) BOOL isMulticolor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)logo;
- (id)initWithOlympusColorPalette:(id)a0 alternatePalette:(id)a1;
- (id)logoColor;
- (id)tritiumLargeNumbers;
- (id)tritiumLargeNumbersOutline;
- (id)dotMarkerAlpha;
- (id)dotMarkerColorAtIndex:(id)a0;
- (id)numberColorAtIndex:(id)a0;
- (id)initWithOlympusColorPalette:(id)a0;
- (id)tritiumNumbersColorAtIndex:(id)a0;
- (id)tritiumOutlineNumbersColorAtIndex:(id)a0;
- (BOOL)hasWhiteElements;
- (id)_softBlackColor;
- (id)tritiumSmallNumbers;
- (id)tritiumOutlineNumbers;
- (double)smallNumbersColorBrightness;
- (double)smallDotsColorBrightness;
- (id)tritiumBackgroundColor;

@end
