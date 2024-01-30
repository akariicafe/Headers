@class UIStackView, UIBarButtonItem, HKLargePlainTextViewController, HKBarButtonItemControl, HKCDADocumentReportViewController, _HKReportSegmentControl;

@interface HKCDADocumentDetailViewController : UIViewController

@property (readonly, nonatomic) UIStackView *stackView;
@property (readonly, nonatomic) _HKReportSegmentControl *reportSegmentControl;
@property (readonly, nonatomic) HKCDADocumentReportViewController *formattedReportController;
@property (readonly, nonatomic) HKLargePlainTextViewController *plainTextReportController;
@property (readonly, nonatomic) UIBarButtonItem *searchButton;
@property (readonly, nonatomic) HKBarButtonItemControl *searchInSegmentControl;

- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithReportData:(id)a0;
- (void)searchButtonAction:(id)a0;
- (void)changeReportDisplayed:(id)a0;
- (void)_replaceLastArrangedViewWith:(id)a0;

@end
