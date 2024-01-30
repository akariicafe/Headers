@class HPSettingsManager;

@interface HPSettingCoordinator : NSObject

@property (retain, nonatomic) HPSettingsManager *settingsManager;

+ (id)settingCoordinator;

- (void).cxx_destruct;
- (id)init;
- (void)accessorySettingKeyPathValueForHomeIdentifier:(id)a0 accessoryIdentifier:(id)a1 keyPath:(id)a2 completionHandler:(id /* block */)a3;
- (void)homeKitSettingKeyPathValueForAccessoryIdentifier:(id)a0 homeIdentifier:(id)a1 keyPath:(id)a2 value:(id)a3 completionHandler:(id /* block */)a4;
- (void)homeKitSettingValueForKeyPathInternal:(id)a0 value:(id)a1 completionHandler:(id /* block */)a2;
- (void)homeKitCachedSettingsInternal:(id /* block */)a0;

@end
