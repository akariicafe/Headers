@class TPLCDTextView;

@interface TPLCDTextViewScrollingView : UIView {
    TPLCDTextView *_owner;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 owner:(id)a1;
- (void)setOwner:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
