@interface NTKBigNumeralsAnalogColorPalette : NSObject

+ (id)swatchImageForColor:(unsigned long long)a0 device:(id)a1;
+ (id)standardHourColorForColor:(unsigned long long)a0 shifted:(BOOL)a1 device:(id)a2;
+ (id)hourColorForColor:(unsigned long long)a0 device:(id)a1;
+ (double)timeColorOpacityForColor:(unsigned long long)a0;
+ (double)timeColorOpacityForFraction:(double)a0 fromColor:(unsigned long long)a1 toColor:(unsigned long long)a2;
+ (id)multicolorAxialGradientLayerForColor:(unsigned long long)a0 device:(id)a1;

@end
