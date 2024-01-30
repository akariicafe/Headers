@class NSString;

@interface MenstrualCyclesAppPlugin.SummaryTileViewController : UIViewController {
    void /* unknown type, empty encoding */ valueLabel;
    void /* unknown type, empty encoding */ supplementaryValueLabel;
    void /* unknown type, empty encoding */ pillView;
    void /* unknown type, empty encoding */ valueLabelTopConstraint;
    void /* unknown type, empty encoding */ supplementaryValueLabelBottomConstraint;
    void /* unknown type, empty encoding */ pillViewHiddenConstraint;
    void /* unknown type, empty encoding */ calendarCache;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ viewModel;
}

@property (nonatomic, copy) NSString *title;

- (void)viewDidLoad;
- (void)prepareForSegue:(id)a0 sender:(id)a1;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)significantTimeChangeDidOccur;
- (void)userPreferredUnitChanged;

@end
