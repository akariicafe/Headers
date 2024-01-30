@interface TeaUI.SectionSelectorView : UIView <UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ spacing;
    void /* unknown type, empty encoding */ minWidth;
    void /* unknown type, empty encoding */ maxWidth;
    void /* unknown type, empty encoding */ defaultInset;
    void /* unknown type, empty encoding */ height;
    void /* unknown type, empty encoding */ textAlpha;
    void /* unknown type, empty encoding */ highlightedTextAlpha;
    void /* unknown type, empty encoding */ selectedTextAlpha;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ textColor;
    void /* unknown type, empty encoding */ selectedIndex;
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ buttons;
    void /* unknown type, empty encoding */ unselectedButtonFont;
    void /* unknown type, empty encoding */ selectedButtonFont;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
