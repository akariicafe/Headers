@interface PIRepairUtilities : NSObject

+ (BOOL)applyRepairMLStrokeToMutableBuffer:(id)a0 brushStroke:(id)a1 detectedFaces:(id)a2 context:(id)a3 error:(out id *)a4;
+ (void)applyRepairStrokeToMutableBuffer:(id)a0 brushStroke:(id)a1 sourceOffset:(struct CGPoint { double x0; double x1; })a2 repairEdges:(BOOL)a3;
+ (id)brushStrokeFromRetouchStrokeDictionary:(id)a0;
+ (void)calcExtentsForStrokeRadius:(double)a0 offset:(struct { long long x0; long long x1; })a1 inputImageExtent:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a2 maskExtent:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a3 repairExtent:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; } *)a4 textureExtent:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; } *)a5 sourceExtent:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; } *)a6;
+ (id)extractRGBAfPixelsFromImage:(id)a0 fromROI:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a1;
+ (struct CGImage { } *)newWatchInfillFromImage:(struct CGImage { } *)a0 mask:(struct CGImage { } *)a1;
+ (id)prepareForCIFilterWithFaces:(id)a0 cropRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a1;

@end
