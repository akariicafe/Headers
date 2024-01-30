@interface TSWPTextWrapper : NSObject

+ (id)horizontalIntersectionsOfRectList:(id)a0 withRectList:(id)a1 minWidth:(double)a2;
+ (id)modifyLineSegments:(id)a0 lineRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 textAdornments:(id)a2 skipHint:(out double *)a3;
+ (double)p_skipHintForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 wrapSegments:(id)a1 type:(int)a2;
+ (void)splitLine:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 lineSegmentRects:(id)a1 wrapSegments:(id)a2 type:(int)a3 skipHint:(double *)a4;
+ (double)unobstructedSpanForWrapSegments:(id)a0 startingSpan:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 columnBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
