@class UIBezierPath;

@interface _UIFocusLinearMovementDebugViewLineSegment : NSObject {
    _UIFocusLinearMovementDebugViewLineSegment *_previousSegment;
    UIBezierPath *_stemPath;
    UIBezierPath *_arrowHeadPath;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } startRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } endRect;
@property (readonly, nonatomic) long long type;

- (void).cxx_destruct;
- (void)_calculatePaths;
- (id)_calculateArrowHeadPath;
- (id)_calculateStemPathFrom:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 to:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 startPoint:(struct CGPoint { double x0; double x1; } *)a2 endPoint:(struct CGPoint { double x0; double x1; } *)a3;
- (id)_flattenedBezierPathFromBezierPath:(id)a0;
- (id)_pathElementsFromPath:(id)a0;
- (void)_subdivideBezier:(id)a0 startPoint:(struct CGPoint { double x0; double x1; })a1 controlPoint1:(struct CGPoint { double x0; double x1; })a2 controlPoint2:(struct CGPoint { double x0; double x1; })a3 endPoint:(struct CGPoint { double x0; double x1; })a4;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithStartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 endRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 previousSegment:(id)a2;

@end
