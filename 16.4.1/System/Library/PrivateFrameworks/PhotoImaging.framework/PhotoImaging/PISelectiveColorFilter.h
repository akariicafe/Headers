@class CIImage, NSArray;

@interface PISelectiveColorFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSArray *inputCorrections;

+ (id)convertFromIPT:(id)a0;
+ (id)convertToIPT:(id)a0;
+ (float)hueAngleFrom:(const float *)a0;
+ (void)iptFromLinearInto:(float *)a0 fromRed:(float)a1 green:(float)a2 blue:(float)a3;
+ (double)iptHueAngleFromRed:(double)a0 green:(double)a1 blue:(double)a2;
+ (id)selectiveColorKernels;

- (id)outputImage;
- (void).cxx_destruct;
- (id)hueSatLumTable;

@end
