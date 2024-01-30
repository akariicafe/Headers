@interface PKMetalUtility : NSObject

+ (id)defaultDevice;
+ (double)layerContentsScale;
+ (struct CGSize { double x0; double x1; })clampedPixelSize:(struct CGSize { double x0; double x1; })a0;
+ (BOOL)deviceSupportsFramebufferFetch:(id)a0;
+ (BOOL)deviceSupportsMemorylessFramebuffers:(id)a0;

@end
