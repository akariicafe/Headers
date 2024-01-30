@protocol _SFKillWebContentProcessUIActivityDelegate;

@interface _SFKillWebContentProcessUIActivity : _SFActivity

@property (weak, nonatomic) id<_SFKillWebContentProcessUIActivityDelegate> webProcessDelegate;

- (id)activityType;
- (void).cxx_destruct;
- (id)activityTitle;
- (id)_systemImageName;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;

@end
