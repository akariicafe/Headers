@interface SeymourUI.SummaryBurnBarView : UIView {
    void /* unknown type, empty encoding */ headerLabelStack;
    void /* unknown type, empty encoding */ burnBarSummary;
    void /* unknown type, empty encoding */ stringBuilder;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (void)updateBurnBarAccessibility:(id)a0 personalScore:(float)a1 low:(float)a2 lowMiddle:(float)a3 highMiddle:(float)a4 high:(float)a5;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
