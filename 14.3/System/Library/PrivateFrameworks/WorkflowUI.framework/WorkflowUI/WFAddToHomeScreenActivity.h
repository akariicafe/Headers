@class NSString, UINavigationController, WFWorkflow;
@protocol WFAddToHomeScreenActivityDelegate;

@interface WFAddToHomeScreenActivity : UIActivity <WFAddToHomeScreenViewControllerDelegate>

@property (copy, nonatomic) NSString *source;
@property (retain, nonatomic) WFWorkflow *workflow;
@property (weak, nonatomic) UINavigationController *navigationController;
@property (weak, nonatomic) id<WFAddToHomeScreenActivityDelegate> delegate;

- (void)cancel;
- (id)activityType;
- (id)initWithSource:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)activityViewController;
- (void)activityDidFinish:(BOOL)a0;
- (void)prepareWithActivityItems:(id)a0;
- (id)activityTitle;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)_systemImageName;
- (void)addToHomeScreenViewController:(id)a0 didFinishWithName:(id)a1 icon:(id)a2;
- (void)addToHomeScreenWithName:(id)a0 icon:(id)a1;

@end
