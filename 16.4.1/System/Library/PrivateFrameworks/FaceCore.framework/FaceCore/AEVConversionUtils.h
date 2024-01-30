@interface AEVConversionUtils : NSObject

+ (char *)convertCGImageToBufferUsingDataProvider:(struct CGImage { } *)a0 usingGCD:(BOOL)a1 dispatchQueue:(id)a2;
+ (char *)convertCGImageToBufferUsingGrayDevice:(struct CGImage { } *)a0;
+ (char *)convertCGImageToBufferUsingRGBDevice:(struct CGImage { } *)a0 usingGCD:(BOOL)a1 dispatchQueue:(id)a2;
+ (char *)convertCGImageToGrayscale:(struct CGImage { } *)a0;
+ (char *)convertCGImageToGrayscale:(struct CGImage { } *)a0 usingGCD:(BOOL)a1 dispatchQueue:(id)a2;
+ (struct CGImage { } *)createImageFromGrayscaleData:(char *)a0 ofWidth:(int)a1 andHeight:(int)a2;

@end
