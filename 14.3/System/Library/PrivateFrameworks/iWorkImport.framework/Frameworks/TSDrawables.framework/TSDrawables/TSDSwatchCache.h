@class NSOperationQueue;

@interface TSDSwatchCache : NSObject {
    NSOperationQueue *mOperationQueue;
}

+ (id)swatchCache;
+ (void)applyFakeShadowForPresetsIfNecessary:(id)a0 documentRoot:(id)a1;
+ (BOOL)applyFakeStrokeIfNeededForShape:(id)a0 documentRoot:(id)a1 backgroundAppearance:(unsigned long long)a2;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })shapeSwatchInset;
- (struct CGImage { } *)p_newImageWithConnectionLineKnobsForShape:(id)a0 atScale:(double)a1 ofSize:(struct CGSize { double x0; double x1; })a2 overImage:(struct CGImage { } *)a3;
- (id)p_thumbnailImageDataForImageData:(id)a0;
- (id)p_maskInfoForMovieInfo:(id)a0 context:(id)a1;
- (void)warmStyle:(id)a0 withFillProperty:(int)a1 documentRoot:(id)a2;
- (struct CGSize { double x0; double x1; })imageSizeForPreset:(id)a0 swatchSize:(struct CGSize { double x0; double x1; })a1;
- (id)imageForShapePreset:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 imageScale:(double)a2 shapeType:(long long)a3 shapePathSource:(id)a4 angle:(double)a5 documentRoot:(id)a6 renderingContext:(id)a7;
- (id)imageForImagePreset:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 imageScale:(double)a2 imageInfo:(id)a3 shouldClipVertically:(BOOL)a4 documentRoot:(id)a5 renderForWideGamut:(BOOL)a6;
- (id)imageForMoviePreset:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 imageScale:(double)a2 movieInfo:(id)a3 shouldClipVertically:(BOOL)a4 documentRoot:(id)a5 renderForWideGamut:(BOOL)a6;
- (double)p_extraSwatchInsetForShapeType:(long long)a0 withLineEnds:(BOOL)a1;
- (id)imageForShapePreset:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 imageScale:(double)a2 shapeType:(long long)a3 shapePathSource:(id)a4 angle:(double)a5 backgroundAppearance:(unsigned long long)a6 documentRoot:(id)a7 renderForWideGamut:(BOOL)a8;
- (struct CGSize { double x0; double x1; })swatchInsetForShapeStyle:(id)a0 shapeType:(long long)a1;

@end
