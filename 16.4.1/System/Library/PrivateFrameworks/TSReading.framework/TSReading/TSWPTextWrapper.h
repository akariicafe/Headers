@interface TSWPTextWrapper : NSObject

+ (unsigned int)splitLine:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 lineSegmentRects:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; }[128])a1 polygon:(id)a2 type:(int)a3 skipHint:(double *)a4;
+ (double)unobstructedSpanForPath:(id)a0 startingSpan:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 columnBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (unsigned int)p_wrappedSubrectsForRectGPC:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 lineSegmentRects:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; }[128])a1 polygon:(id)a2 type:(int)a3 skipHint:(double *)a4;
+ (unsigned int)p_wrappedSubrectsForRectOptimized:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 lineSegmentRects:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; }[128])a1 polygon:(id)a2 type:(int)a3 skipHint:(double *)a4;

@end
