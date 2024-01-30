@interface FCRImageConversionUtils : NSObject

+ (char *)convertCGImageToBufferUsingDataProvider:(struct CGImage { } *)a0 usingGCD:(BOOL)a1 dispatchQueue:(id)a2;
+ (char *)convertCGImageToBufferUsingGrayDevice:(struct CGImage { } *)a0;
+ (char *)convertCGImageToBufferUsingRGBDevice:(struct CGImage { } *)a0 usingGCD:(BOOL)a1 dispatchQueue:(id)a2 cacheContext:(BOOL)a3;
+ (char *)convertCGImageToGrayscale:(struct CGImage { } *)a0 usingGCD:(BOOL)a1 cacheContext:(BOOL)a2;

@end
