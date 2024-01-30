@interface NUBrushRasterizer : NSObject

+ (void)rasterizeBrushStroke:(id)a0 atPoint:(struct { long long x0; long long x1; })a1 toBuffer:(id)a2;
+ (long long)_rasterizeBrushStroke:(id)a0 toROI:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a1 maskPtr:(char *)a2 maskPtrRowBytes:(long long)a3 close:(BOOL)a4 startIndex:(long long)a5 pressureMode:(long long)a6;
+ (long long)rasterizeBrushStroke:(id)a0 atPoint:(struct { long long x0; long long x1; })a1 toBuffer:(id)a2 close:(BOOL)a3 startIndex:(long long)a4;

@end
