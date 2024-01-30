@class UIColor, NSString, CLKDevice;

@interface NTKOlympusColorPalette : NSObject <NTKCircularAnalogDialColorPalette>

@property (nonatomic) unsigned long long color;
@property (nonatomic) unsigned long long style;
@property (nonatomic) unsigned long long dial;
@property (nonatomic) BOOL useSmallFont;
@property (retain, nonatomic) CLKDevice *device;
@property (retain, nonatomic) UIColor *mainColor;
@property (retain, nonatomic) UIColor *darkMainColor;
@property (retain, nonatomic) UIColor *accentColor;
@property (retain, nonatomic) UIColor *blackColor;
@property (retain, nonatomic) UIColor *softWhiteColor;
@property (retain, nonatomic) UIColor *softBlackColor;
@property (retain, nonatomic) UIColor *lightMainColor;
@property (retain, nonatomic) UIColor *primaryBackgroundColor;
@property (retain, nonatomic) UIColor *primaryTextColor;
@property (retain, nonatomic) UIColor *primaryLogoColor;
@property (retain, nonatomic) UIColor *secondaryBackgroundColor;
@property (retain, nonatomic) UIColor *secondaryTextColor;
@property (retain, nonatomic) UIColor *secondaryLogoColor;
@property (retain, nonatomic) UIColor *largeHandsColor;
@property (retain, nonatomic) UIColor *secondHandColor;
@property (retain, nonatomic) UIColor *cornerComplicationsAccentColor;
@property (retain, nonatomic) UIColor *circularDialSubtickColor;
@property (readonly, nonatomic) UIColor *primaryOutlineTextColor;
@property (readonly, nonatomic) BOOL isBlackBackground;
@property (readonly, nonatomic) UIColor *secondaryOutlineTextColor;
@property (readonly, nonatomic) UIColor *bezelComplicationColor;
@property (readonly, nonatomic) BOOL isMulticolorPalette;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)paletteForDevice:(id)a0 color:(unsigned long long)a1 dial:(unsigned long long)a2 style:(unsigned long long)a3 useSmallFont:(BOOL)a4;
+ (id)paletteForDevice:(id)a0 color:(unsigned long long)a1 dial:(unsigned long long)a2 style:(unsigned long long)a3;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)circularDialFillColor;
- (id)colorForCircularTicksForMinute:(unsigned long long)a0;
- (id)colorForCircularTicksForHour:(unsigned long long)a0;
- (id)circularDialTickColor;
- (BOOL)_shouldHideColor:(unsigned long long)a0;
- (id)initWithDevice:(id)a0 color:(unsigned long long)a1 dial:(unsigned long long)a2 style:(unsigned long long)a3 useSmallFont:(BOOL)a4;

@end
