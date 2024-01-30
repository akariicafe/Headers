@class NSString;

@interface MenstrualCyclesAppPlugin.ProjectionHighlightTileViewController : UIViewController {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ containerView;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ separatorView;
    void /* unknown type, empty encoding */ context;
}

@property (nonatomic, copy) NSString *title;

- (void)viewDidLoad;
- (void)prepareForSegue:(id)a0 sender:(id)a1;
- (BOOL)shouldPerformSegueWithIdentifier:(id)a0 sender:(id)a1;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)todayDidChange;

@end
