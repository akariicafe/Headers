@class NSString, SFSearchResult, UIViewController;
@protocol SFFeedbackListener;

@interface SearchUIGradingFeedbackViewController : UIAlertController <MFMailComposeViewControllerDelegate>

@property (retain, nonatomic) SFSearchResult *result;
@property (retain, nonatomic) UIViewController *viewControllerForPresenting;
@property (weak, nonatomic) id<SFFeedbackListener> feedbackDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)mailComposeController:(id)a0 didFinishWithResult:(long long)a1 error:(id)a2;
- (void)addActionForGrade:(unsigned long long)a0 title:(id)a1;
- (id)initWithResult:(id)a0 feedbackDelegate:(id)a1;

@end
