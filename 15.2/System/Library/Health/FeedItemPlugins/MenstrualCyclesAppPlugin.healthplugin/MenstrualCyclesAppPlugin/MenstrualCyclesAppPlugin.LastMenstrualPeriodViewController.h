@interface MenstrualCyclesAppPlugin.LastMenstrualPeriodViewController : UIViewController <HKMCViewModelProviderObserver> {
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ dateRangeLabel;
    void /* unknown type, empty encoding */ cycleView;
    void /* unknown type, empty encoding */ detailsLabel;
    void /* unknown type, empty encoding */ confirmCycleButton;
    void /* unknown type, empty encoding */ logLastCycleButton;
}

- (void)viewModelProviderDidUpdate:(id)a0;
- (void)viewDidLoad;
- (void)dismiss:(id)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)logMenstrualCycle:(id)a0;
- (void)confirmMenstrualCycle:(id)a0;

@end
