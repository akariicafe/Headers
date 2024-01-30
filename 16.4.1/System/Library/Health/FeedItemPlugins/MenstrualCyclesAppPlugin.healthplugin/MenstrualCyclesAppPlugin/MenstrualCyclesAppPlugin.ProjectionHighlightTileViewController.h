@class NSString;

@interface MenstrualCyclesAppPlugin.ProjectionHighlightTileViewController : UIViewController {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ containerView;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ separatorView;
    void /* unknown type, empty encoding */ footer;
    void /* unknown type, empty encoding */ context;
}

@property (nonatomic, copy) NSString *title;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)todayDidChange;

@end
