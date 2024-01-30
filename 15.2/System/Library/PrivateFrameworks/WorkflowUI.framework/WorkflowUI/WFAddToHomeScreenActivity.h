@class NSString, UINavigationController, WFWorkflow;
@protocol WFAddToHomeScreenActivityDelegate;

@interface WFAddToHomeScreenActivity : UIActivity <WFAddToHomeScreenViewControllerDelegate>

@property (copy, nonatomic) NSString *source;
@property (retain, nonatomic) WFWorkflow *workflow;
@property (weak, nonatomic) UINavigationController *navigationController;
@property (weak, nonatomic) id<WFAddToHomeScreenActivityDelegate> delegate;

- (id)activityType;
- (id)activityViewController;
- (void).cxx_destruct;
- (void)prepareWithActivityItems:(id)a0;
- (id)init;
- (id)activityTitle;
- (id)_systemImageName;
- (id)initWithSource:(id)a0;
- (void)cancel;
- (void)activityDidFinish:(BOOL)a0;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)addToHomeScreenViewController:(id)a0 didFinishWithName:(id)a1 icon:(id)a2;
- (void)addToHomeScreenWithName:(id)a0 icon:(id)a1;

@end
