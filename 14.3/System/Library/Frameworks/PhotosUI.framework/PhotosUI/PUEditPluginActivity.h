@class PUEditPlugin;

@interface PUEditPluginActivity : UIActivity

@property (readonly, nonatomic) PUEditPlugin *plugin;

+ (long long)activityCategory;

- (id)activityType;
- (id)_activityImage;
- (void).cxx_destruct;
- (id)activityTitle;
- (id)_activitySettingsImage;
- (id)initWithPlugin:(id)a0;
- (BOOL)_isHiddenByDefault;
- (BOOL)canPerformWithActivityItems:(id)a0;

@end
