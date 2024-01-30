@class NSString;

@interface MenstrualCyclesAppPlugin.ProjectionHighlightTileViewController : UIViewController {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ containerView;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ separatorView;
    void /* unknown type, empty encoding */ context;
}

@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)shouldPerformSegueWithIdentifier:(id)a0 sender:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)prepareForSegue:(id)a0 sender:(id)a1;
- (void)todayDidChange;

@end
