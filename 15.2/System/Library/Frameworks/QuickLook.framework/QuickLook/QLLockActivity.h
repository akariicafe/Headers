@protocol QLLockActivityDelegate;

@interface QLLockActivity : UIActivity

@property (weak) id<QLLockActivityDelegate> delegate;

- (id)activityType;
- (void).cxx_destruct;
- (id)activityTitle;
- (id)_systemImageName;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;

@end
