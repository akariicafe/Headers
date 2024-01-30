@class UIScrollView, UILabel;

@interface CKActionSheetMenuTitleView : UIView {
    UIScrollView *_scrollView;
    UILabel *_titleLabel;
}

- (id)initWithTitle:(id)a0;
- (id)_textColor;
- (void).cxx_destruct;
- (double)_desiredHeightForLabel:(id)a0 parentBoundingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)updateTitleConstraintsForBoundingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
