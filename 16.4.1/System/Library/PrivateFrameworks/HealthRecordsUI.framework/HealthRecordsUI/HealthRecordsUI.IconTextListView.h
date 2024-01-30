@interface HealthRecordsUI.IconTextListView : UIView {
    void /* unknown type, empty encoding */ textStyle;
    void /* unknown type, empty encoding */ items;
    void /* unknown type, empty encoding */ font;
    void /* unknown type, empty encoding */ iconSize;
    void /* unknown type, empty encoding */ interItemSpacingVertical;
    void /* unknown type, empty encoding */ interItemSpacingHorizontal;
    void /* unknown type, empty encoding */ hidesIconsForAccessibilityTextSizes;
}

- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
