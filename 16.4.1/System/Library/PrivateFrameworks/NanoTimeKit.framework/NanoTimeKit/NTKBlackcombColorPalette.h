@class UIColor, NSString, NTKInterpolatedColorPalette;

@interface NTKBlackcombColorPalette : NTKFaceColorPalette <NTKBlackcombColorPalette>

@property (readonly, nonatomic) UIColor *lightBackground;
@property (readonly, nonatomic) UIColor *lightHourMarker;
@property (readonly, nonatomic) UIColor *lightSmallTick;
@property (readonly, nonatomic) UIColor *lightLargeTick;
@property (readonly, nonatomic) UIColor *lightPlatterText;
@property (readonly, nonatomic) UIColor *darkBackground;
@property (readonly, nonatomic) UIColor *darkHourMarker;
@property (readonly, nonatomic) UIColor *darkSmallTick;
@property (readonly, nonatomic) UIColor *darkLargeTick;
@property (readonly, nonatomic) UIColor *darkPlatterText;
@property (retain, nonatomic) NTKInterpolatedColorPalette *dialColorTransitionalPalette;
@property (nonatomic) unsigned long long dialColorStyle;
@property (readonly, nonatomic) long long richComplicationViewTheme;
@property (readonly, nonatomic) UIColor *background;
@property (readonly, nonatomic) UIColor *hourMarker;
@property (readonly, nonatomic) UIColor *smallTick;
@property (readonly, nonatomic) UIColor *largeTick;
@property (readonly, nonatomic) UIColor *platterText;
@property (readonly, nonatomic) UIColor *secondHand;
@property (readonly, nonatomic) UIColor *complication;
@property (readonly, nonatomic) UIColor *primaryColor;
@property (readonly, nonatomic) UIColor *primaryShiftedColor;
@property (readonly, nonatomic) UIColor *secondaryColor;
@property (readonly, nonatomic) UIColor *secondaryShiftedColor;
@property (readonly, nonatomic) UIColor *swatch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)identifier;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_background;
- (id)_complication;
- (id)_hourMarker;
- (id)_largeTick;
- (id)_platterText;
- (id)_secondHand;
- (id)_smallTick;
- (id)transitionalPaletteFromDialColor:(unsigned long long)a0 toDialColor:(unsigned long long)a1;
- (id)tritiumPalette;

@end
