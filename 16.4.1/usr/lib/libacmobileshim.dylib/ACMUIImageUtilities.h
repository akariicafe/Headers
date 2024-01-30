@interface ACMUIImageUtilities : NSObject

+ (id)cropLocalImage:(id)a0 bySize:(struct CGSize { double x0; double x1; })a1;
+ (id)cropServerImage:(id)a0 bySize:(struct CGSize { double x0; double x1; })a1;
+ (int)imageResolutionFactor;
+ (id)transparentImageWithSize:(struct CGSize { double x0; double x1; })a0;

@end
