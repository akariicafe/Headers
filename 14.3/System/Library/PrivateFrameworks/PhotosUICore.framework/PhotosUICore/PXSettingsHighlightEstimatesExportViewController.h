@class NSDictionary, UITextView, NSString;

@interface PXSettingsHighlightEstimatesExportViewController : UIViewController <MFMailComposeViewControllerDelegate>

@property BOOL exportHighlightEstimatesOnViewDidAppear;
@property (retain) UITextView *textView;
@property (retain) NSDictionary *highlightEstimatesDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)mailComposeController:(id)a0 didFinishWithResult:(long long)a1 error:(id)a2;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_sendEmail:(id)a0;
- (void)_fetchHighlightEstimatesDictionary;
- (void)viewDidLoad;

@end
