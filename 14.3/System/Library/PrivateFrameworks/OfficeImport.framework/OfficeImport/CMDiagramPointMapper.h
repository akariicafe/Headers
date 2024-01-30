@class NSString, ODDPoint, OADOrientedBounds, CMDrawingContext;

@interface CMDiagramPointMapper : CMMapper {
    ODDPoint *mPoint;
    CMDrawingContext *mDrawingContext;
    OADOrientedBounds *mOrientedBounds;
    NSString *mPresentationName;
}

- (id)fill;
- (id)stroke;
- (void).cxx_destruct;
- (id)shapeStyle;
- (float)defaultFontSize;
- (id)diagram;
- (id)plainText;
- (void)mapAt:(id)a0 withState:(id)a1;
- (id)styleMatrix;
- (id)initWithPoint:(id)a0 drawingContext:(id)a1 orientedBounds:(id)a2 parent:(id)a3;
- (id)transformPresentationName;
- (id)transformForPresentationWithName:(id)a0;
- (void)setPresentationName:(id)a0;
- (void)applyDiagramStyleToShapeProperties;
- (void)mapTextAt:(id)a0 withBounds:(id)a1 isCentered:(BOOL)a2 includeChildren:(BOOL)a3 withState:(id)a4;
- (void)renderShapeAsBackgroundInBounds:(id)a0;
- (void)mapStyledRectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 at:(id)a1 withState:(id)a2;
- (void)mapChlidrenAt:(id)a0 withState:(id)a1;
- (id)presentationName;
- (id)presentationWithName:(id)a0;
- (id)baseTextListStyleWithBounds:(id)a0 isCentered:(BOOL)a1;
- (void)mapPointTextAt:(id)a0 style:(id)a1 level:(int)a2 withState:(id)a3;
- (void)mapChildrenTextAt:(id)a0 style:(id)a1 level:(int)a2 withState:(id)a3;
- (void)mapSiblingTextAt:(id)a0 style:(id)a1 level:(int)a2 withState:(id)a3;

@end
