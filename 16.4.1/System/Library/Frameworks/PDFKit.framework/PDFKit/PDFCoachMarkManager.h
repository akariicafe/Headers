@class PDFCoachMarkManagerPrivate;

@interface PDFCoachMarkManager : NSObject {
    PDFCoachMarkManagerPrivate *_private;
}

- (void).cxx_destruct;
- (void)createCoachMarkForPage:(id)a0 atFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithPDFRenderingProperties:(id)a0;
- (void)_cleanCoachMarks;
- (id)_pageLayerForPage:(id)a0;
- (void)pageLayerDidAppear:(id)a0;
- (void)pageLayerWillRemove:(id)a0;

@end
