@class NTKOlympusColorPalette, UIColor, NSString;

@interface NTKOlympusAnalogBackgroundPalette : NSObject <NTKVictoryAnalogBackgroundColorPalette>

@property (retain, nonatomic) NTKOlympusColorPalette *olympusPalette;
@property (readonly, nonatomic) unsigned long long faceColor;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) UIColor *numbersColor;
@property (readonly, nonatomic) UIColor *logoColor;
@property (readonly, nonatomic) UIColor *analogDotColor;
@property (readonly, nonatomic) BOOL hasWhiteElements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)colorForNumberVictoryAnalogTimeElement:(unsigned long long)a0;
- (id)colorForDotVictoryAnalogTimeElement:(unsigned long long)a0;
- (id)colorForLogoWithStyle:(unsigned long long)a0;
- (id)initWithOlympusPalette:(id)a0 alternatePalette:(id)a1;
- (id)_softBlackColor;
- (id)initWithOlympusPalette:(id)a0;

@end
