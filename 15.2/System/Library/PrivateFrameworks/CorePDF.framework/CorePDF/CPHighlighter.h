@class CPTextLine, CPZone;

@interface CPHighlighter : NSObject {
    CPZone *boundingZone;
    CPTextLine *textLine;
}

@property (readonly, nonatomic) struct CGColor { } *color;
@property (nonatomic) struct CPPDFStyle { struct CGColor *x0; struct CGColorSpace *x1; struct CGColor *x2; struct CGColorSpace *x3; double x4; double x5; unsigned char x6; unsigned char x7; int x8; double x9; id x10; double x11; struct CGPDFObject *x12; struct CGPDFObject *x13; struct CGColor *x14; struct CPPDFStyle *x15; } *style;
@property (nonatomic) struct CPPDFStyle { struct CGColor *x0; struct CGColorSpace *x1; struct CGColor *x2; struct CGColorSpace *x3; double x4; double x5; unsigned char x6; unsigned char x7; int x8; double x9; id x10; double x11; struct CGPDFObject *x12; struct CGPDFObject *x13; struct CGColor *x14; struct CPPDFStyle *x15; } *highlightedStyle;

+ (BOOL)reconstructHighlightFor:(id)a0;

- (void)highlight;
- (id)initWithTextLine:(id)a0 inZone:(id)a1 ofColor:(struct CGColor { } *)a2;

@end
