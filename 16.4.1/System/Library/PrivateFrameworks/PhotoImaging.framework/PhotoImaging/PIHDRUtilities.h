@interface PIHDRUtilities : NSObject

+ (struct __CVBuffer { } *)_newHLGPixelBufferOfSize:(struct CGSize { double x0; double x1; })a0;
+ (BOOL)_renderImage:(id)a0 toPixelBuffer:(struct __CVBuffer { } *)a1;
+ (struct __CVBuffer { } *)newHLGPixelBufferFromSDRImage:(struct CGImage { } *)a0;
+ (void)recycleHLGPixelBuffer:(struct __CVBuffer { } *)a0;

@end
