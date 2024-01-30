@class NSArray, _UIActivityUserDefaults, UIViewController;

@interface _UIUserDefaultsActivity : UIActivity

@property (retain, nonatomic) _UIActivityUserDefaults *userDefaults;
@property (retain, nonatomic) UIViewController *presentableActivityViewController;
@property (nonatomic) long long activityCategory;
@property (copy, nonatomic) NSArray *availableActivities;

- (id)activityType;
- (id)_activityImage;
- (void).cxx_destruct;
- (id)activityViewController;
- (void)activityDidFinish:(BOOL)a0 items:(id)a1 error:(id)a2;
- (void)_cleanup;
- (id)_actionImage;
- (id)activityTitle;
- (void)_prepareActivityViewControllerIfNeeded;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)_settingsViewControllerDidDismiss:(id)a0;
- (id)initWithUserDefaults:(id)a0 activityCategory:(long long)a1;

@end
