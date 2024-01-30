@class UIPDFSelection, NSMutableArray, UIPDFPageView;

@interface UIPDFSearchHighlightsController : NSObject {
    NSMutableArray *_searchHighlightLayers;
    UIPDFPageView *_pageView;
    struct CGColor { } *_highlightColor;
    struct CGColor { } *_borderColor;
    struct CGColor { } *_shadowColor;
    BOOL _pageRendered;
    NSMutableArray *_rectangles;
    UIPDFSelection *_selection;
}

- (void)layoutSublayersOfLayer:(id)a0;
- (void)dealloc;
- (void)setNeedsDisplay;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)clearSearchHighlights;
- (id)initWithPageView:(id)a0;
- (void)addSearchHighlightForSelection:(id)a0 animated:(BOOL)a1;
- (BOOL)hasSearchHighlights;
- (void)pageDidRender:(id)a0;
- (void)_addAnimation:(id)a0;
- (void)_addAnimation2:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })unionFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (void)makeType1Shadow:(struct CGPath { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inset:(struct CGPoint { double x0; double x1; })a2;
- (void)makeType2Shadow:(struct CGPath { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)addSearchHighlightForRotatedSelection:(id)a0 animated:(BOOL)a1;
- (unsigned long long)indexOfColumnBreakStartingAt:(unsigned long long)a0;
- (void)makeType1Path:(struct CGPath { } *)a0 shadowPath:(struct CGPath { } *)a1;
- (void)addLayer:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 path:(struct CGPath { } *)a1 shadowPath:(struct CGPath { } *)a2 animated:(BOOL)a3;
- (void)makeType2Path:(struct CGPath { } *)a0 to:(unsigned long long)a1 shadowPath:(struct CGPath { } *)a2;
- (void)makeType3Path:(struct CGPath { } *)a0 from:(unsigned long long)a1 to:(unsigned long long)a2 shadowPath:(struct CGPath { } *)a3;
- (void)makeType4Path:(struct CGPath { } *)a0 from:(unsigned long long)a1 to:(unsigned long long)a2 shadowPath:(struct CGPath { } *)a3;

@end
