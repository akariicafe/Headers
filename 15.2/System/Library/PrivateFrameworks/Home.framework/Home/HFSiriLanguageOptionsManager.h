@class NSUUID, NSHashTable, HFSiriLanguageOption, HMHome, NSSet, NSString, HMAccessorySettingsController, NAFuture;

@interface HFSiriLanguageOptionsManager : NSObject <HFHomeKitAccessorySettingsDataSourceDelegate, HFAccessorySettingsManagerProtocol>

@property (readonly, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) NSUUID *accessoryIdentifier;
@property (retain, nonatomic) HMAccessorySettingsController *settingsController;
@property (copy, nonatomic) NSSet *availableLanguageOptions;
@property (retain, nonatomic) HFSiriLanguageOption *selectedLanguageOption;
@property (retain, nonatomic) NAFuture *availableLanguagesFuture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)didReceiveSettingsUpdatesForAccessoryWithIdentifier:(id)a0 settings:(id)a1;
- (id)updateSelectedLanguageOption:(id)a0;
- (id)initWithSettingsController:(id)a0 accessoryIdentifier:(id)a1 home:(id)a2;
- (void)_fetchAvailableLanguagesAndGenerateOptions;
- (void)_subscribeToSiriLanguageSettings;
- (id)availableSiriLanguageOptions;
- (id)updateSelectedLanguageOption:(id)a0 accessoryIdentifier:(id)a1;
- (id)_settingKeyPaths;
- (void)_updateSettingsAndNotifyObservers:(id)a0;
- (id)initWithSettingsController:(id)a0 sourceItem:(id)a1 home:(id)a2;
- (id)preferredRecognitionLanguageOptionsForSelectedOption;
- (id)preferredOutputVoiceAccentOptionsForSelectedOption;
- (id)preferredOutputVoiceGenderOptionsForSelectedOption;

@end
