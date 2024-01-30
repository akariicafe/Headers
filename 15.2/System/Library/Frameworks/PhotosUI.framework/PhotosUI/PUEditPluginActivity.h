@class PUEditPlugin;

@interface PUEditPluginActivity : UIActivity

@property (readonly, nonatomic) PUEditPlugin *plugin;

+ (long long)activityCategory;

- (id)activityType;
- (id)_activitySettingsImage;
- (void).cxx_destruct;
- (id)_activityImage;
- (id)activityTitle;
- (BOOL)_isHiddenByDefault;
- (id)initWithPlugin:(id)a0;
- (BOOL)canPerformWithActivityItems:(id)a0;

@end
