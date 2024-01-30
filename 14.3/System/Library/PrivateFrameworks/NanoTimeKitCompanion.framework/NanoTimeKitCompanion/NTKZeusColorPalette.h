@class UIColor, NSString;

@interface NTKZeusColorPalette : NSObject <NTKZeudleColorPalette> {
    unsigned long long _color;
    UIColor *_handInlayColorForNonDetailedDensity;
}

@property (readonly, nonatomic) UIColor *dialColor;
@property (readonly, nonatomic) UIColor *secondHandColor;
@property (readonly, nonatomic) UIColor *minuteHandColor;
@property (readonly, nonatomic) UIColor *hourHandColor;
@property (readonly, nonatomic) UIColor *handInlayColor;
@property (readonly, nonatomic) UIColor *minuteHandDotColor;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) double secondHandAlpha;
@property (readonly, nonatomic) unsigned long long bleed;
@property (readonly, nonatomic) BOOL wantsStatusBarIconShadow;
@property (readonly, nonatomic) UIColor *splitColor;
@property (readonly, nonatomic) UIColor *bottomComplicationColor;
@property (readonly, nonatomic) UIColor *bottomComplicationBackgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)paletteForColor:(unsigned long long)a0;
+ (id)zeusSilverColor;
+ (id)zeusOrangeColor;
+ (id)craieColor;
+ (id)indigoColor;
+ (id)bordeauxColor;
+ (id)feuColor;
+ (id)capucineColor;
+ (id)roseAzaleeColor;
+ (id)roseExtremeColor;
+ (id)ambreColor;
+ (id)encreColor;
+ (id)etainColor;
+ (id)briqueColor;
+ (id)noirColor;
+ (id)noirHandStrokeColor;
+ (id)noirSecondHandColor;
+ (id)noirDualToneBackgroundColor;
+ (id)noirDualToneSplitColor;
+ (id)noirDualToneHandInlayTextColor;
+ (id)zeusBlancColor;
+ (id)blancDialTextColor;
+ (id)blancSecondHandColor;
+ (id)zeusRougePimentColor;
+ (id)zeusJauneAmbreColor;
+ (id)zeusBambouColor;
+ (id)zeusNavyColor;
+ (id)zeusAnemoneColor;
+ (id)sakuraLightColor;
+ (id)sakuraMediumColor;
+ (id)sakuraDarkColor;
+ (id)bleuLightColor;
+ (id)bleuMediumColor;
+ (id)bleuDarkColor;
+ (id)offWhiteColor;
+ (id)charcoalColor;
+ (id)swatchColorForColor:(unsigned long long)a0;
+ (id)swatchImageForColor:(unsigned long long)a0;

- (id)initWithColor:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)handInlayColorForDensity:(unsigned long long)a0;

@end
