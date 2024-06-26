@interface CPShape : CPGraphicObject <CPDisposable> {
    long long mcid;
    unsigned int pdfObjectID;
    struct CGPath { } *path;
    BOOL isUprightRectangle;
    int windingRule;
    double lineWidth;
    double miterLimit;
    int lineCap;
    int lineJoin;
    struct CGColor { } *fillColor;
    struct CGColor { } *strokeColor;
    struct CGPDFObject { } *fillObject;
    struct CGPDFObject { } *strokeObject;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } paintTransform;
    BOOL boundsComputed;
    BOOL renderedBoundsComputed;
}

- (void)setFillColor:(struct CGColor { } *)a0;
- (void)setStrokeColor:(struct CGColor { } *)a0;
- (double)lineWidth;
- (void)setLineWidth:(double)a0;
- (struct CGColor { } *)strokeColor;
- (struct CGColor { } *)fillColor;
- (struct CGPath { } *)path;
- (id)init;
- (long long)zOrder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)mcid;
- (int)lineCap;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (id)attributes;
- (id)string;
- (int)lineJoin;
- (void)dispose;
- (void)setLineCap:(int)a0;
- (double)miterLimit;
- (BOOL)isVisible;
- (void)setMiterLimit:(double)a0;
- (void)finalize;
- (void)setLineJoin:(int)a0;
- (void)setPath:(struct CGPath { } *)a0;
- (void)accept:(id)a0;
- (BOOL)hasFill;
- (int)windingRule;
- (void)setWindingRule:(int)a0;
- (id)initWithPDFShape:(struct CPPDFShape { struct CPPDFObject { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; unsigned int x2; unsigned int x3; } x0; unsigned int x1; struct CPPDFStyle *x2; int x3; struct CGPath *x4; BOOL x5; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x6; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x7; long long x8; } *)a0;
- (void)addShape:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })renderedBounds;
- (unsigned int)pathElementCount;
- (void)recomputeRenderedBounds;
- (void)recomputeBounds;
- (BOOL)hasStroke;
- (BOOL)isUprightRectangle;
- (BOOL)hasSamePathAs:(id)a0;
- (BOOL)isStrokeFor:(id)a0;
- (struct CGPDFObject { } *)fillObject;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })paintTransform;
- (struct CGPDFObject { } *)strokeObject;
- (BOOL)canCombineWith:(id)a0;
- (void)setFillObject:(struct CGPDFObject { } *)a0;
- (void)setStrokeObject:(struct CGPDFObject { } *)a0;
- (void)setPaintTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (unsigned int)pdfObjectID;
- (void)setPdfObjectID:(unsigned int)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })innerBounds;
- (void)makeLineFromVertex:(struct CGPoint { double x0; double x1; })a0 toVertex:(struct CGPoint { double x0; double x1; })a1;

@end
