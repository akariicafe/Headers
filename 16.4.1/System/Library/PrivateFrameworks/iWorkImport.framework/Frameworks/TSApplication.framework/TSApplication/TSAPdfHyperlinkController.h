@class NSMutableArray;

@interface TSAPdfHyperlinkController : NSObject {
    NSMutableArray *mHyperlinks;
    NSMutableArray *mDestinations;
}

- (id)init;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })canvasRect;
- (void)addHyperlinksForRep:(id)a0;
- (void)commitHyperlinksToPDF:(struct CGContext { } *)a0 targetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)destinationFromUrl:(id)a0;
- (BOOL)ignoreUrl:(id)a0;
- (BOOL)isDestination:(id)a0;
- (void)addHyperlinkForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withUrl:(id)a1;
- (id)p_chopBezierIntoRects:(id)a0;
- (void)p_combineSimilarElements:(id)a0;
- (void)p_commitDestinationToPDF:(id)a0 cgrect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 context:(struct CGContext { } *)a2;
- (void)p_commitUrlToPDF:(id)a0 cgrect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 context:(struct CGContext { } *)a2;
- (id)p_hyperlinkRegionsForRep:(id)a0;

@end
