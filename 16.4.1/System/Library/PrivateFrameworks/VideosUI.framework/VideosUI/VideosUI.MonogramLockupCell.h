@interface VideosUI.MonogramLockupCell : VUIBaseCollectionViewCell {
    void /* unknown type, empty encoding */ lockupLayout;
    void /* unknown type, empty encoding */ monogramView;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
}

@property (nonatomic) BOOL isAccessibilityElement;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (void)vui_setHighlighted:(BOOL)a0;

@end
