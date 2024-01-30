@interface VideosUI.CategoryFilterBar : UIScrollView {
    void /* unknown type, empty encoding */ categories;
    void /* unknown type, empty encoding */ selectionHandler;
    void /* unknown type, empty encoding */ selectedCategory;
    void /* unknown type, empty encoding */ lastKnownBounds;
    void /* unknown type, empty encoding */ buttons;
    void /* unknown type, empty encoding */ selectedButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_selectedButtonBackgroundView;
    void /* unknown type, empty encoding */ needsButtonsLayout;
}

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)categoryButtonTapped:(id)a0;

@end
