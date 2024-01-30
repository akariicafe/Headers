@class TSDSwatchRenderingContext, TSDPathSource;

@interface TSDShapeRenderingOperation : TSDSwatchRenderingOperation {
    long long _shapeType;
    TSDPathSource *_shapePathSource;
}

@property (readonly, nonatomic) double angle;
@property (nonatomic) unsigned long long backgroundAppearance;
@property (retain, nonatomic) TSDSwatchRenderingContext *renderingContext;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })swatchEdgeInsets;
- (BOOL)needsPressedStateBackground;
- (void)doWorkWithReadLock;
- (id)initWithPreset:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 imageScale:(double)a2 swatchFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 shapeType:(long long)a4 shapePathSource:(id)a5 angle:(double)a6 backgroundAppearance:(unsigned long long)a7 documentRoot:(id)a8;
- (id)initWithPreset:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 imageScale:(double)a2 swatchFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 shapeType:(long long)a4 shapePathSource:(id)a5 angle:(double)a6 documentRoot:(id)a7 swatchCacheRenderingContext:(id)a8;
- (id)initWithPreset:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 imageScale:(double)a2 swatchFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 shapeType:(long long)a4 shapePathSource:(id)a5 documentRoot:(id)a6;

@end
