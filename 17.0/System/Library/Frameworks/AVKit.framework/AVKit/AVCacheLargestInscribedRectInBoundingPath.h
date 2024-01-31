@class NSCache;

@interface AVCacheLargestInscribedRectInBoundingPath : NSObject

@property (retain) NSCache *cache;

- (id)init;
- (void)clearCache;
- (void).cxx_destruct;
- (void)saveCacheFor:(struct CGPoint { double x0; double x1; })a0 aspectRatio:(double)a1 value:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getLargestInscribableRectForView:(id)a0 withCenter:(struct CGPoint { double x0; double x1; })a1 aspectRatio:(double)a2;
- (id)retrieveCacheForCenter:(struct CGPoint { double x0; double x1; })a0 aspectRatio:(double)a1;

@end
