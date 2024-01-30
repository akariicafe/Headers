@interface AKInkRendererHelper : NSObject

+ (id)_sharedOfflineInkRendererSmallSize;
+ (id)_createFullSizeRenderer;
+ (double)_calculateMaxRenderingSize;
+ (double)maxRenderingSize;
+ (id)renderDrawing:(id)a0 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 scale:(double)a2;
+ (void)purgeSharedRenderer;

@end
