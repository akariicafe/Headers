@class NSDictionary, UIViewController;

@interface FAInviteInPersonActivity : UIActivity

@property (weak, nonatomic) UIViewController *presentingViewController;
@property (retain, nonatomic) NSDictionary *response;

- (id)activityType;
- (void).cxx_destruct;
- (id)init;
- (id)activityImage;
- (id)activityTitle;
- (void)dealloc;
- (long long)activityCategory;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;
- (void)_handleRUIDismiss:(id)a0;
- (void)_notifyCompletionWithSuccess:(BOOL)a0 userInfo:(id)a1;

@end
