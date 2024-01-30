@class NSDate, VSVoiceAsset, AssistantVoiceViewModel, NSArray, AssistantVoiceMetrics, PSSpecifier, AssistantSettingsSignalEmitter, SUICAssistantVoiceSettingsConnection, AFVoiceInfo;

@interface AssistantVoiceController : PSListController {
    AssistantSettingsSignalEmitter *_signalEmitter;
}

@property (retain, nonatomic) PSSpecifier *languageGroupSpecifier;
@property (retain, nonatomic) PSSpecifier *languageProto;
@property (retain, nonatomic) NSArray *languageSpecifiers;
@property (retain, nonatomic) PSSpecifier *genderGroupSpecifier;
@property (retain, nonatomic) PSSpecifier *maleSpecifier;
@property (retain, nonatomic) PSSpecifier *femaleSpecifier;
@property (retain, nonatomic) NSArray *cellularUpdatesSpecifiers;
@property (retain, nonatomic) VSVoiceAsset *downloadingAsset;
@property (retain, nonatomic) NSArray *genderGroupSpecifierTemplate;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) AFVoiceInfo *inProgressVoice;
@property (retain, nonatomic) AFVoiceInfo *currentVoice;
@property (nonatomic) BOOL ignoreNextVoiceChangeNotification;
@property (retain, nonatomic) AssistantVoiceViewModel *currentViewModel;
@property (retain, nonatomic) AssistantVoiceMetrics *metrics;
@property (retain, nonatomic) SUICAssistantVoiceSettingsConnection *settingsConnection;

+ (id)bundle;

- (id)outputVoice;
- (void)resetMetrics;
- (id)init;
- (void).cxx_destruct;
- (id)specifiers;
- (void)setParentController:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)inProgressOutputVoice;
- (void)languageCodeDidChange:(id)a0;
- (void)_signalDidSelectVoice;
- (void)outputVoiceDidChange:(id)a0;
- (id)deriveVoicesWithTargetVoice:(id)a0 currentVoice:(id)a1;
- (id)viewModelWithInProgressVoice:(id)a0 currentVoice:(id)a1;
- (id)_languageSpecifiersForLanguage:(id)a0;
- (void)applyViewModel:(id)a0;
- (BOOL)isCellularDataPermissionAllowedForLanguage:(id)a0 gender:(long long)a1;
- (void)presentVoiceDownloadConfirmationNoWifiAlertForVoice:(id)a0 inProgressVoice:(id)a1;
- (void)setAssistantInProgressVoice:(id)a0;
- (void)downloadVoice:(id)a0 gender:(long long)a1;
- (BOOL)isVoiceInstalled:(id)a0 gender:(long long)a1;
- (void)updateFooterText:(id)a0 forSpecifier:(id)a1;
- (id)dialectsForLanguageIdentifiers:(id)a0;
- (void)setOutputVoicePreference:(id)a0;
- (void)setInProgressVoicePreference:(id)a0;
- (id)voiceSettingsForLanguageCode:(id)a0 gender:(long long)a1;
- (void)presentVoiceDownloadDisabledNoInternetAlert;
- (void)playVoicePreview:(id)a0;
- (void)selectVoice:(id)a0 inProgressVoice:(id)a1;
- (void)stopAllDownload;
- (void)setAssistantOutputVoice:(id)a0;
- (void)presentVoiceDownloadDisabledNoWifiAlert;
- (void)grantCellularDataPermissionForLanguage:(id)a0 gender:(long long)a1;
- (void)updateDownloadProgress:(float)a0;

@end
