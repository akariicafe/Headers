@interface ICDocCamCVPixelBufferUtilities : NSObject

+ (id)coreImageForPixelBuffer:(struct __CVBuffer { } *)a0 colorSpace:(struct CGColorSpace { } *)a1;
+ (struct CGImage { } *)createImageWithCVPixelBuffer:(struct __CVBuffer { } *)a0;
+ (struct CGImage { } *)createImageWithCVPixelBuffer:(struct __CVBuffer { } *)a0 colorSpace:(struct CGColorSpace { } *)a1;
+ (struct CGImage { } *)createImageWithCVPixelBuffer:(struct __CVBuffer { } *)a0 colorSpace:(struct CGColorSpace { } *)a1 copyMemory:(BOOL)a2;

@end
