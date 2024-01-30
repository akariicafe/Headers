@class ICNoteLockManager, UIViewController;

@interface ICLockNoteActivity : ICActivity

@property (readonly, nonatomic) ICNoteLockManager *lockManager;
@property (readonly, nonatomic) UIViewController *presentingViewController;
@property (nonatomic) long long contextPath;

- (id)accessibilityLabel;
- (id)activityTitle;
- (id)activityType;
- (void).cxx_destruct;
- (id)activityImage;
- (void)performActivityWithCompletion:(id /* block */)a0;
- (id)activityTintColor;
- (void)accessibilityAnnounceToggledLock;
- (id)initWithNote:(id)a0 presentingViewController:(id)a1;

@end
