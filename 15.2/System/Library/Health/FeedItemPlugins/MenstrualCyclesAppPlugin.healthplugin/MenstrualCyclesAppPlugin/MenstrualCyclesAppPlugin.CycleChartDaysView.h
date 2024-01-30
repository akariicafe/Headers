@interface MenstrualCyclesAppPlugin.CycleChartDaysView : MenstrualCyclesAppPlugin.CycleChart <HKMCViewModelProviderObserver> {
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ verticalDayGridlines;
    void /* unknown type, empty encoding */ dayColumnWidth;
}

- (void)viewModelProviderDidUpdate:(id)a0;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;

@end
