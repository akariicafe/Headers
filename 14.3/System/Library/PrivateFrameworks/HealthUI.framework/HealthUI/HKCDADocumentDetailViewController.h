@class UIStackView, UIBarButtonItem, HKLargePlainTextViewController, HKBarButtonItemControl, HKCDADocumentReportViewController, _HKReportSegmentControl;

@interface HKCDADocumentDetailViewController : UIViewController

@property (readonly, nonatomic) UIStackView *stackView;
@property (readonly, nonatomic) _HKReportSegmentControl *reportSegmentControl;
@property (readonly, nonatomic) HKCDADocumentReportViewController *formattedReportController;
@property (readonly, nonatomic) HKLargePlainTextViewController *plainTextReportController;
@property (readonly, nonatomic) UIBarButtonItem *searchButton;
@property (readonly, nonatomic) HKBarButtonItemControl *searchInSegmentControl;

- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (id)initWithReportData:(id)a0;
- (void)searchButtonAction:(id)a0;
- (void)changeReportDisplayed:(id)a0;
- (void)_replaceLastArrangedViewWith:(id)a0;

@end
