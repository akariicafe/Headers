@interface MenstrualCyclesAppPlugin.CycleHistorySingleCycleView : UIView <HKMCViewModelProviderObserver> {
    void /* unknown type, empty encoding */ cycleView;
    void /* unknown type, empty encoding */ daysLabel;
    void /* unknown type, empty encoding */ factorsLabel;
    void /* unknown type, empty encoding */ periodLengthLabel;
    void /* unknown type, empty encoding */ cycleViewModelProvider;
    void /* unknown type, empty encoding */ topConstraint;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewModelProviderDidUpdate:(id)a0;

@end
