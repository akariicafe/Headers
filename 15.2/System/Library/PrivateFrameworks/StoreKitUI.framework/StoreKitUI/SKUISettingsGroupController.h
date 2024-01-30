@class SKUISettingsGroupDescription, NSMutableArray;
@protocol SKUISettingsGroupControllerDelegate;

@interface SKUISettingsGroupController : NSObject

@property (weak, nonatomic) id<SKUISettingsGroupControllerDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *settingDescriptions;
@property (retain, nonatomic) SKUISettingsGroupDescription *settingsGroupDescription;

- (void).cxx_destruct;
- (void)attachSettingDescription:(id)a0;
- (id)_viewForSettingDescription:(id)a0;
- (void)_reloadSettingDescription:(id)a0;

@end
