@class CMDrawingContext, OADShape;

@interface PMDrawableMapper : CMDrawableMapper {
    OADShape *mShape;
    CMDrawingContext *mDrawingContext;
    BOOL mTopLevelMapper;
}

- (void).cxx_destruct;
- (id)drawingContext;
- (void)mapAt:(id)a0 withState:(id)a1;
- (void)mapOfficeArtShapeAt:(id)a0 withState:(id)a1;
- (void)mapOfficeArtImageAt:(id)a0 withState:(id)a1;
- (void)mapOfficeArtGroupAt:(id)a0 withState:(id)a1;
- (void)mapDiagramAt:(id)a0 withState:(id)a1;
- (void)mapBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })transformRectToPage:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mapChartAt:(id)a0 withState:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })slideRect;
- (void)setTopLevelMapper:(BOOL)a0;
- (void)setDrawingContext:(id)a0;
- (BOOL)isTopLevelMapper;
- (void)mapRectangularShapeAt:(id)a0 withState:(id)a1;
- (void)mapShapeAsBackgroundAt:(id)a0 withState:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })shapeTextBoxWithState:(id)a0;
- (void)mapFreeForm:(id)a0 orientedBounds:(id)a1 transformedBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2 state:(id)a3;

@end
