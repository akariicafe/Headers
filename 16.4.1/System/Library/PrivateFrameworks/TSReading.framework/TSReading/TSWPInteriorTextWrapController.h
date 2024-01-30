@interface TSWPInteriorTextWrapController : NSObject <TSWPTextWrap>

+ (id)sharedInteriorTextWrapController;

- (id)beginWrappingToColumn:(id)a0 target:(id)a1 hasWrapables:(BOOL *)a2;
- (double)nextUnobstructedSpanStartingAt:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 wrappableAttachments:(id)a1 userInfo:(id)a2;
- (unsigned int)splitLine:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 lineSegmentRects:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; }[128])a1 wrappableAttachments:(id)a2 ignoreFloatingGraphics:(BOOL)a3 floatingCausedWrap:(BOOL *)a4 skipHint:(double *)a5 userInfo:(id)a6;

@end
