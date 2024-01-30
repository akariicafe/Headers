@interface ICDocCamUtilities : NSObject

+ (struct CGSize { double x0; double x1; })aspectFillSize:(struct CGSize { double x0; double x1; })a0 targetSize:(struct CGSize { double x0; double x1; })a1;
+ (struct CGSize { double x0; double x1; })aspectFitSize:(struct CGSize { double x0; double x1; })a0 targetSize:(struct CGSize { double x0; double x1; })a1;
+ (id)buttonFromCopyingValuesFromButton:(id)a0;
+ (void)prepareForRotationIfNecessaryWithShutterButton:(id)a0 coodinator:(id)a1;
+ (id)resizedImage:(id)a0 newSize:(struct CGSize { double x0; double x1; })a1 interpolationQuality:(int)a2;
+ (id)resizedImage:(id)a0 newSize:(struct CGSize { double x0; double x1; })a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 drawTransposed:(BOOL)a3 interpolationQuality:(int)a4;
+ (BOOL)shouldPerformCustomAnimationForTransitionCoordinator:(id)a0 window:(id)a1;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForOrientation:(id)a0 newSize:(struct CGSize { double x0; double x1; })a1;

@end
