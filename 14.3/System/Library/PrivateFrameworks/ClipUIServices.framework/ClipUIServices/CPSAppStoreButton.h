@class UILabel, UIStackView;

@interface CPSAppStoreButton : CPSButton {
    UIStackView *_fullSizeStack;
    UIStackView *_glyphOnlyStack;
    UILabel *_label;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastLayoutBounds;
    BOOL _intrinsicContentSizeIsValid;
    struct CGSize { double width; double height; } _intrinsicContentSize;
}

- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (void)_commonInit;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)setHighlighted:(BOOL)a0;

@end
