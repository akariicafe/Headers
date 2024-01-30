@class PDFPageLabelViewPrivate;

@interface PDFPageLabelView : UIView {
    PDFPageLabelViewPrivate *_private;
}

- (void)updateEffect;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setCurrentPageNumber:(unsigned long long)a0 forPageCount:(unsigned long long)a1;
- (void)_startFade;

@end
