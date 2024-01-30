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
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)mailComposeController:(id)a0 didFinishWithResult:(long long)a1 error:(id)a2;
- (void)_showMailComposeWindow;
- (id)initWithMemory:(id)a0 features:(id)a1;

@end
