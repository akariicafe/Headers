@class UILabel, NSLayoutConstraint;
@protocol PXPeopleSummaryDelegate;

@interface PXPeopleConfirmationSummaryViewController : UIViewController

@property (retain) NSLayoutConstraint *labelSpacingConstraint;
@property (retain) UILabel *summaryLabel;
@property (weak) id<PXPeopleSummaryDelegate> delegate;

- (void)contentSizeCategoryDidChangeNotification:(id)a0;
- (void).cxx_destruct;
- (void)_updateDynamicTypeSpacing;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithDelegate:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;

@end
