@interface ICDocCamCVPixelBufferUtilities : NSObject

+ (struct CGImage { } *)createImageWithCVPixelBuffer:(struct __CVBuffer { } *)a0 colorSpace:(struct CGColorSpace { } *)a1;
+ (struct CGImage { } *)createImageWithCVPixelBuffer:(struct __CVBuffer { } *)a0 colorSpace:(struct CGColorSpace { } *)a1 copyMemory:(BOOL)a2;
+ (struct CGImage { } *)createImageWithCVPixelBuffer:(struct __CVBuffer { } *)a0;
+ (id)coreImageForPixelBuffer:(struct __CVBuffer { } *)a0 colorSpace:(struct CGColorSpace { } *)a1;

@end
