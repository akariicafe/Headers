@interface TeaUI.GutterView : UIScrollView {
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ childScrollView;
    void /* unknown type, empty encoding */ gutters;
    void /* unknown type, empty encoding */ observations;
    void /* unknown type, empty encoding */ boundsObservers;
}

@property (nonatomic) struct CGPoint { double x0; double x1; } contentOffset;

- (BOOL)accessibilityScrollToVisibleWithChild:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
