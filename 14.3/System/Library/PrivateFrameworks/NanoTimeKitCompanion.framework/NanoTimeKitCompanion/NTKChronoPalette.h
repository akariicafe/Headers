@class UIColor, CLKDevice;

@interface NTKChronoPalette : NSObject

@property (readonly, nonatomic) CLKDevice *device;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) UIColor *foregroundColor;
@property (readonly, nonatomic) UIColor *tickColor;
@property (readonly, nonatomic) UIColor *alternativeTickColor;
@property (readonly, nonatomic) UIColor *labelColor;
@property (readonly, nonatomic) UIColor *chronoHandColor;
@property (readonly, nonatomic) UIColor *dateComplicationColor;
@property (readonly, nonatomic) UIColor *inlayColor;
@property (readonly, nonatomic) UIColor *glyphColor;
@property (readonly, nonatomic) UIColor *glyphBackgroundColor;
@property (readonly, nonatomic) UIColor *swatchColor;
@property (readonly, nonatomic) double smallTickValue;
@property (readonly, nonatomic) double largeTickValue;
@property (readonly, nonatomic) unsigned long long paletteColor;
@property (readonly, nonatomic) BOOL showsShadows;

+ (id)paletteForDevice:(id)a0 withColor:(unsigned long long)a1;
+ (id)interpolationFromPalette:(id)a0 toPalette:(id)a1 fraction:(double)a2;

- (void).cxx_destruct;
- (id)initForDevice:(id)a0;
- (id)_initForDevice:(id)a0 withColor:(unsigned long long)a1;

@end
