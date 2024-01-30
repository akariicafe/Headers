@interface ACMUIImageUtilities : NSObject

+ (int)imageResolutionFactor;
+ (id)cropLocalImage:(id)a0 bySize:(struct CGSize { double x0; double x1; })a1;
+ (id)transparentImageWithSize:(struct CGSize { double x0; double x1; })a0;
+ (id)cropServerImage:(id)a0 bySize:(struct CGSize { double x0; double x1; })a1;

@end
