@class NSArray, _UIActivityUserDefaults, UIViewController;

@interface _UIUserDefaultsActivity : UIActivity

@property (retain, nonatomic) _UIActivityUserDefaults *userDefaults;
@property (retain, nonatomic) UIViewController *presentableActivityViewController;
@property (nonatomic) long long activityCategory;
@property (copy, nonatomic) NSArray *availableActivities;

- (id)activityType;
- (void)_cleanup;
- (id)activityViewController;
- (void)_prepareActivityViewControllerIfNeeded;
- (void).cxx_destruct;
- (void)_settingsViewControllerDidDismiss:(id)a0;
- (id)initWithUserDefaults:(id)a0 activityCategory:(long long)a1;
- (void)activityDidFinish:(BOOL)a0 items:(id)a1 error:(id)a2;
- (id)_activityImage;
- (id)_actionImage;
- (id)activityTitle;
- (BOOL)canPerformWithActivityItems:(id)a0;

@end
