@class UIViewController;

@interface FAInviteInPersonActivity : UIActivity

@property (weak, nonatomic) UIViewController *presentingViewController;

- (long long)activityCategory;
- (id)activityType;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)activityTitle;
- (id)activityImage;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;
- (void)_handleRUIDismiss:(id)a0;
- (void)_notifyCompletionWithSuccess:(BOOL)a0;

@end
