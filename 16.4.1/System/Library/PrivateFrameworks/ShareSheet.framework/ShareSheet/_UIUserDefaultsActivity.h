@class NSArray, _UIActivityUserDefaults, UIViewController;

@interface _UIUserDefaultsActivity : UIActivity

@property (retain, nonatomic) _UIActivityUserDefaults *userDefaults;
@property (retain, nonatomic) UIViewController *presentableActivityViewController;
@property (nonatomic) long long activityCategory;
@property (copy, nonatomic) NSArray *availableActivities;

- (void)_cleanup;
- (id)activityTitle;
- (id)activityType;
- (void).cxx_destruct;
- (id)activityViewController;
- (id)_activityImage;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)_actionImage;
- (void)_prepareActivityViewControllerIfNeeded;
- (void)_settingsViewControllerDidDismiss:(id)a0;
- (void)activityDidFinish:(BOOL)a0 items:(id)a1 error:(id)a2;
- (id)initWithUserDefaults:(id)a0 activityCategory:(long long)a1;

@end
