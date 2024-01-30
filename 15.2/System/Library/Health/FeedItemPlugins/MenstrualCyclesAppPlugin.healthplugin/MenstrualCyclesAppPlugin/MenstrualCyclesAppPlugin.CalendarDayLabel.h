@class UIView;

@interface MenstrualCyclesAppPlugin.CalendarDayLabel : UIView {
    void /* unknown type, empty encoding */ label;
    void /* unknown type, empty encoding */ circleMask;
    void /* unknown type, empty encoding */ isBold;
    void /* unknown type, empty encoding */ isMaskVisible;
    void /* unknown type, empty encoding */ lastSize;
}

@property (nonatomic, readonly) UIView *viewForLastBaselineLayout;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;

@end
