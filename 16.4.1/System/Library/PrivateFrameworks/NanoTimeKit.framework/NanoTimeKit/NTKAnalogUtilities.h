@interface NTKAnalogUtilities : NSObject

+ (double)dialDiameterForDevice:(id)a0;
+ (double)dialDiameterForDevice:(id)a0 withRounding:(unsigned long long)a1;
+ (struct CGSize { double x0; double x1; })dialSizeForDevice:(id)a0;
+ (double)largeDialDiameterForDevice:(id)a0;
+ (double)largeDialDiameterForDevice:(id)a0 withRounding:(unsigned long long)a1;
+ (struct CGSize { double x0; double x1; })largeDialSizeForDevice:(id)a0;
+ (struct CGSize { double x0; double x1; })sceneSizeForDevice:(id)a0;
+ (double)whistlerMediumDialDiameterForDevice:(id)a0;

@end
