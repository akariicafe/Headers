@class PUReviewScreenDoneButton;
@protocol CFXStageManagerWarningViewControllerDelegate;

@interface CFXStageManagerWarningViewController : UIViewController

@property (readonly, nonatomic) BOOL isMultitasking;
@property (retain, nonatomic) PUReviewScreenDoneButton *doneButton;
@property (weak, nonatomic) id<CFXStageManagerWarningViewControllerDelegate> delegate;

- (void)doneButtonTapped:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (BOOL)showDoneButton;

@end
