@class PHMemory, NSArray, UIActivityIndicatorView, NSString, UILabel;

@interface PXMemoriesInlineProblemReportViewController : UIViewController <MFMailComposeViewControllerDelegate>

@property (retain, nonatomic) PHMemory *memory;
@property (retain, nonatomic) NSArray *features;
@property (retain, nonatomic) UILabel *reportCaptureInProgressLabel;
@property (retain, nonatomic) UIActivityIndicatorView *reportCaptureInProgressActivityIndicator;
@property (nonatomic) BOOL didDismissMailWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)mailComposeController:(id)a0 didFinishWithResult:(long long)a1 error:(id)a2;
- (id)initWithMemory:(id)a0 features:(id)a1;
- (void)_showMailComposeWindow;

@end
