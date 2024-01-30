@interface HUAccessorySettingsUtilities : NSObject

+ (BOOL)_shouldSkipModuleCreationForGroupKeyPath:(id)a0 accessory:(id)a1 home:(id)a2;
+ (BOOL)_shouldCollapseModuleForGroupKeyPath:(id)a0;
+ (id)generateModulesFromSettingsDictionary:(id)a0 itemUpdater:(id)a1 home:(id)a2 sourceItem:(id)a3 usageOptions:(id)a4 settingsController:(id)a5;

@end
