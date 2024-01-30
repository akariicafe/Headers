@class NSMutableDictionary;

@interface TSDBrushStrokeLoader : NSObject {
    NSMutableDictionary *_lineEnds;
    NSMutableDictionary *_images;
    NSMutableDictionary *_textureIndex;
    NSMutableDictionary *_options;
    NSMutableDictionary *_paths;
    NSMutableDictionary *_bounds;
}

@property (class, readonly, nonatomic) TSDBrushStrokeLoader *brushStrokeLoaderForCurrentThread;

+ (double)p_brushPixelScaleAt100Percent;
+ (id)p_brushStrokeLoadQueue;
+ (id)p_cacheDirectory;

- (void).cxx_destruct;
- (id)pathsForStroke:(id)a0;
- (id)imageForStroke:(id)a0;
- (id)boundsForStroke:(id)a0;
- (id)lineEnd:(id)a0 forStroke:(id)a1;
- (id)optionsForStroke:(id)a0;
- (void)p_loadBrushIfNeeded:(id)a0;
- (id)p_loadImageForBrush:(id)a0;
- (void)p_loadLineEndTextureForBrush:(id)a0 lineEnd:(id)a1 path:(const struct CGPath { } *)a2 andBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)p_loadLineEndsForBrush:(id)a0 inSVGDoc:(struct _xmlDoc { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; int x9; int x10; struct _xmlDtd *x11; struct _xmlDtd *x12; struct _xmlNs *x13; char *x14; char *x15; void *x16; void *x17; char *x18; int x19; struct _xmlDict *x20; void *x21; int x22; int x23; } *)a1;
- (void)p_loadSectionsForBrush:(id)a0 inSVGDoc:(struct _xmlDoc { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; int x9; int x10; struct _xmlDtd *x11; struct _xmlDtd *x12; struct _xmlNs *x13; char *x14; char *x15; void *x16; void *x17; char *x18; int x19; struct _xmlDict *x20; void *x21; int x22; int x23; } *)a1;
- (id)textureIndexForStroke:(id)a0;

@end
