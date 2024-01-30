@class TPDocumentRoot;

@interface TPTextWrapController : NSObject <TSWPTextWrap> {
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _canvasSpaceToWrapSpace;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _wrapSpaceToCanvasSpace;
}

@property (readonly, weak, nonatomic) TPDocumentRoot *documentRoot;

- (void).cxx_destruct;
- (id)initWithDocumentRoot:(id)a0;
- (double)nextUnobstructedSpanStartingAt:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 wrappableAttachments:(id)a1 userInfo:(id)a2;
- (void)setUpCanvasToWrapSpaceAffineTransformation:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)p_groupInfoContainingWrappable:(id)a0;
- (BOOL)p_shouldTextFlowAroundWrappable:(id)a0 inTarget:(id)a1 inColumn:(id)a2;
- (void)p_splitLine:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 lineSegmentRects:(id)a1 wrappable:(id)a2 cookie:(id)a3 skipHint:(double *)a4;
- (id)p_wrapDrawables:(id)a0 userInfo:(id)a1;
- (id)beginWrappingToColumn:(id)a0 columnTransformFromWP:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 target:(id)a2 hasWrappables:(out BOOL *)a3;
- (void)splitLine:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 lineSegmentRects:(inout id)a1 wrappableAttachments:(id)a2 ignoreFloatingGraphics:(BOOL)a3 canvasCausedWrap:(out BOOL *)a4 skipHint:(out double *)a5 userInfo:(id)a6;
- (BOOL)checkForUnobstructedSpan:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 wrappableAttachments:(id)a1 userInfo:(id)a2;

@end
