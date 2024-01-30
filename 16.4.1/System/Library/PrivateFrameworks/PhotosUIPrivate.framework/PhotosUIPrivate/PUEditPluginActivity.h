@class PUEditPlugin;

@interface PUEditPluginActivity : UIActivity

@property (readonly, nonatomic) PUEditPlugin *plugin;

+ (long long)activityCategory;

- (id)initWithPlugin:(id)a0;
- (id)activityTitle;
- (id)activityType;
- (void).cxx_destruct;
- (id)_activityImage;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)_activitySettingsImage;
- (BOOL)_isHiddenByDefault;

@end
