@interface TeaUI.AccessoryContainerView : UIView {
    void /* unknown type, empty encoding */ touchInsets;
    void /* unknown type, empty encoding */ spacing;
    void /* unknown type, empty encoding */ rightMargin;
    void /* unknown type, empty encoding */ leftMargin;
    void /* unknown type, empty encoding */ itemSize;
    void /* unknown type, empty encoding */ cellHeight;
}

- (id)initWithCoder:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
