@interface ODIDrawable : NSObject

+ (void)mapShapeProperties:(id)a0 shape:(id)a1 state:(id)a2;
+ (void)addArrowHeadToShapeProperties:(id)a0;
+ (id)addShapeWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 rotation:(float)a1 geometry:(id)a2 state:(id)a3;
+ (void)map1dArrowStyleFromPoint:(id)a0 shape:(id)a1 state:(id)a2;
+ (void)map1dArrowStyleToShape:(id)a0 state:(id)a1;
+ (void)mapShapeProperties:(id)a0 shapeStyle:(id)a1 shape:(id)a2 state:(id)a3;
+ (void)mapStyleAndTextFromPoint:(id)a0 shape:(id)a1 state:(id)a2;
+ (void)mapStyleForLabelName:(id)a0 point:(id)a1 shape:(id)a2 state:(id)a3;
+ (void)mapStyleForLabelName:(id)a0 shape:(id)a1 state:(id)a2;
+ (void)mapStyleForPresentationName:(id)a0 point:(id)a1 shape:(id)a2 state:(id)a3;
+ (void)mapStyleFromPoint:(id)a0 shape:(id)a1 state:(id)a2;
+ (id)presentationWithName:(id)a0 point:(id)a1;
+ (id)shapeGeometryForBezierPath:(id)a0 gSpace:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (id)shapeGeometryForDoubleArrowWithControlPoint:(struct CGPoint { double x0; double x1; })a0;
+ (id)shapeGeometryForEllipse;
+ (id)shapeGeometryForRectangle;
+ (id)shapeGeometryForRightArrowWithControlPoint:(struct CGPoint { double x0; double x1; })a0;
+ (id)shapeGeometryForRoundedRectangleWithRadius:(float)a0;
+ (id)shapeGeometryWithShapeType:(int)a0 adjustValues:(const int *)a1;
+ (struct CGSize { double x0; double x1; })sizeOfDiagram:(id)a0;
+ (id)styleForLabelName:(id)a0 styleCount:(int)a1 styleIndex:(int)a2 state:(id)a3;
+ (id)styleForPresentation:(id)a0 point:(id)a1 state:(id)a2;

@end
