@class NSMutableArray;

@interface UIPDFHighlighter : NSObject {
    NSMutableArray *_highLightLayers;
    struct CGColor { } *_highlightColor;
    struct CGColor { } *_borderColor;
    struct CGColor { } *_whiteColor;
    struct CGPDFPage { } *_page;
    double _enlargeFactor;
    double _pdfToViewScale;
}

@property (nonatomic) double inset;

- (void)clear;
- (void)addAnimation:(id)a0;
- (id)init;
- (void)setNeedsDisplay;
- (void)dealloc;
- (void)unhide;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)addRectPath:(struct CGPath { } *)a0 toView:(id)a1 layer:(id)a2 rectangle:(struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; })a3 upright:(BOOL)a4;
- (void)makeTheClipPath:(id)a0 layer:(id)a1 rectangle:(struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; })a2 upright:(BOOL)a3;
- (void)makeTheBorderPath:(id)a0 layer:(id)a1 rectangle:(struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; })a2 upright:(BOOL)a3;
- (void)addHighlightLayerFor:(id)a0 atIndex:(unsigned long long)a1 to:(id)a2 animated:(BOOL)a3;
- (void)addHighlightFor:(id)a0 to:(id)a1 animated:(BOOL)a2;

@end
