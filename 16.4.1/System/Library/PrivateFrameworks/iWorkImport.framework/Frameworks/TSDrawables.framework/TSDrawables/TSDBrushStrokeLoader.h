@interface TSDBrushStrokeLoader : NSObject

+ (double)p_brushPixelScaleAt100Percent;
+ (id)p_brushStrokeLoadQueue;
+ (id)p_cacheDirectory;
+ (void)p_loadBrushIfNeeded:(id)a0;
+ (void)p_loadLineEndTextureForBrush:(id)a0 lineEnd:(id)a1 path:(const struct CGPath { } *)a2 andBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
+ (void)backgroundLoadAllBrushStrokes;
+ (id)p_allLoadableBrushStrokeNames;
+ (id)p_allStorageCaches;
+ (void)p_clearOnDiskCache;
+ (void)p_loadImageForBrush:(id)a0 intoStorage:(id)a1;
+ (void)p_loadLineEndsForBrush:(id)a0 fromSVGDoc:(struct _xmlDoc { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; int x9; int x10; struct _xmlDtd *x11; struct _xmlDtd *x12; struct _xmlNs *x13; char *x14; char *x15; void *x16; void *x17; char *x18; int x19; struct _xmlDict *x20; void *x21; int x22; int x23; } *)a1 intoStorage:(id)a2;
+ (void)p_loadSectionsForBrush:(id)a0 fromSVGDoc:(struct _xmlDoc { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; int x9; int x10; struct _xmlDtd *x11; struct _xmlDtd *x12; struct _xmlNs *x13; char *x14; char *x15; void *x16; void *x17; char *x18; int x19; struct _xmlDict *x20; void *x21; int x22; int x23; } *)a1 intoStorage:(id)a2;
+ (id)p_storageCacheForCurrentThread;
+ (id)p_storagesByBrushName;
+ (id)storageForBrushStrokeNamed:(id)a0;

@end
