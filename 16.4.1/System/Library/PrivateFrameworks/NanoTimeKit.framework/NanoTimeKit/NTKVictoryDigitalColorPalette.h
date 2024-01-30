@class UIColor, NSString;

@interface NTKVictoryDigitalColorPalette : NTKFaceColorPalette <NTKVictoryDigitalColorPalette>

@property (readonly, nonatomic) UIColor *digits;
@property (readonly, nonatomic) UIColor *complication;
@property (readonly, nonatomic) UIColor *complicationPlatter;
@property (readonly, nonatomic) UIColor *alternateComplicationColor;
@property (readonly, nonatomic) UIColor *background;
@property (readonly, nonatomic) UIColor *primaryColor;
@property (readonly, nonatomic) UIColor *primaryShiftedColor;
@property (readonly, nonatomic) UIColor *secondaryColor;
@property (readonly, nonatomic) UIColor *secondaryShiftedColor;
@property (readonly, nonatomic) UIColor *swatch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_digits;
- (id)_background;
- (id)_alternateComplicationColor;
- (id)_complication;
- (id)_complicationPlatter;

@end
