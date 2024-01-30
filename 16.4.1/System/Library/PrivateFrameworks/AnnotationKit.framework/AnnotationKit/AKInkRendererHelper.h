@interface AKInkRendererHelper : NSObject

+ (double)_calculateMaxRenderingSize;
+ (id)_createFullSizeRenderer;
+ (id)_sharedOfflineInkRendererSmallSize;
+ (double)maxRenderingSize;
+ (void)purgeSharedRenderer;
+ (id)renderDrawing:(id)a0 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 scale:(double)a2;

@end
