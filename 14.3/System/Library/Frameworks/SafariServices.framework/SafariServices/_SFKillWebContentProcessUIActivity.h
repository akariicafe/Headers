@protocol _SFKillWebContentProcessUIActivityDelegate;

@interface _SFKillWebContentProcessUIActivity : _SFActivity

@property (weak, nonatomic) id<_SFKillWebContentProcessUIActivityDelegate> webProcessDelegate;

- (id)activityType;
- (void).cxx_destruct;
- (id)activityTitle;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)_systemImageName;
- (void)performActivity;

@end
