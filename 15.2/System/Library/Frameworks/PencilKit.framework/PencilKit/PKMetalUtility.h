@interface PKMetalUtility : NSObject

+ (id)defaultDevice;
+ (double)layerContentsScale;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformConvertingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 percent:(double)a2;
+ (struct CGSize { double x0; double x1; })clampedPixelSize:(struct CGSize { double x0; double x1; })a0;
+ (id)textureFromImage:(struct CGImage { } *)a0 device:(id)a1;
+ (BOOL)deviceSupportsFramebufferFetch:(id)a0;
+ (BOOL)deviceSupportsMemorylessFramebuffers:(id)a0;

@end
