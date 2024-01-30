@class UIColor, NSString, CLKDevice;

@interface NTKVictoryColorPalette : NSObject <NTKVictoryAnalogBackgroundColorPalette>

@property (retain, nonatomic) CLKDevice *device;
@property (readonly, nonatomic) unsigned long long color;
@property (readonly, nonatomic) UIColor *numbersColor;
@property (readonly, nonatomic) UIColor *handsColor;
@property (readonly, nonatomic) UIColor *logoColor;
@property (readonly, nonatomic) UIColor *secondHandColor;
@property (readonly, nonatomic) UIColor *handInlayColor;
@property (readonly, nonatomic) UIColor *analogComplicationsColor;
@property (readonly, nonatomic) UIColor *analogDotColor;
@property (readonly, nonatomic) UIColor *digitalComplicationsColor;
@property (readonly, nonatomic) UIColor *digitalComplicationsPlatterColor;
@property (readonly, nonatomic) UIColor *platterColor;
@property (readonly, nonatomic) UIColor *cornerComplicationsAccentColor;
@property (readonly, nonatomic) BOOL hasWhiteElements;
@property (readonly, nonatomic) unsigned long long bleed;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) unsigned long long faceColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)paletteForDevice:(id)a0 color:(unsigned long long)a1 style:(unsigned long long)a2;
+ (id)paletteForDevice:(id)a0 color:(unsigned long long)a1 bleed:(unsigned long long)a2;
+ (id)voltColor;

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 color:(unsigned long long)a1 bleed:(unsigned long long)a2;
- (id)colorForNumberVictoryAnalogTimeElement:(unsigned long long)a0;
- (id)pride2020ColorAtIndex:(int)a0;
- (id)colorForDotVictoryAnalogTimeElement:(unsigned long long)a0;
- (id)colorForLogoWithStyle:(unsigned long long)a0;

@end
