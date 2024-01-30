@class NSHashTable, NSString, HMHomeManager, HMAccessorySettingsController, HMImmutableSetting, HMHome;
@protocol HFMediaProfileContainer;

@interface HFMediaAccessoryCommonSettingsManager : NSObject <HFHomeKitAccessorySettingsDataSourceDelegate>

@property (retain, nonatomic) id<HFMediaProfileContainer> mediaProfileContainer;
@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) HMHomeManager *homeManager;
@property (retain, nonatomic) HMAccessorySettingsController *settingsController;
@property (retain, nonatomic) HMImmutableSetting *tapToAccessSiriSetting;
@property (retain, nonatomic) HMImmutableSetting *heySiriSetting;
@property (retain, nonatomic) HMImmutableSetting *announceEnabledSetting;
@property (retain, nonatomic) id tapToAccessSiriSettingCachedValue;
@property (retain, nonatomic) HMImmutableSetting *airPlayEnabledSetting;
@property (retain, nonatomic) HMImmutableSetting *doorbellChimeEnabledSetting;
@property (retain, nonatomic) id heySiriSettingCachedValue;
@property (retain, nonatomic) id announceEnabledSettingCachedValue;
@property (retain, nonatomic) id airPlayEnabledSettingCachedValue;
@property (retain, nonatomic) id doorbellChimeEnabledSettingCachedValue;
@property (readonly, nonatomic) NSHashTable *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)updateSettingValue:(id)a0 forKeyPath:(id)a1 accessoryIdentifier:(id)a2;
- (void)didReceiveSettingsUpdatesForAccessoryWithIdentifier:(id)a0 settings:(id)a1;
- (id)settingValueForKeyPath:(id)a0;
- (id)updateAccessorySettingWithHomeIdentifier:(id)a0 accessoryIdentifier:(id)a1 keyPath:(id)a2 rawSettingValue:(id)a3;
- (id)_settingKeyPaths;
- (id)initWithMediaProfileContainer:(id)a0 home:(id)a1;
- (void)_subscribeToAccessorySettings;
- (id)_settingForKeyPath:(id)a0;
- (void)_updateCachedValue:(id)a0 forKeyPath:(id)a1;
- (void)_updateSettings:(id)a0;

@end
