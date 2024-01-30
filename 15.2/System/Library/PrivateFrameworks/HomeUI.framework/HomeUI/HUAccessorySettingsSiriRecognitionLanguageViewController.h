@class NSString, HUAccessorySettingsSiriRecognitionLanguageItemManager, NAFuture;

@interface HUAccessorySettingsSiriRecognitionLanguageViewController : HUItemTableViewController <HUAccessorySettingsDetailsViewControllerProtocol, HUHomeKitAccessorySettingDetailsViewControllerProtocol>

@property (readonly, nonatomic) HUAccessorySettingsSiriRecognitionLanguageItemManager *itemManager;
@property (retain, nonatomic) NAFuture *changeLanguageFuture;
@property (nonatomic) long long selectedLanguageIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (id)initWithItemManager:(id)a0 tableViewStyle:(long long)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;
- (void)_clearSpinner;
- (id)initWithAccessoryGroupItem:(id)a0;
- (BOOL)_shouldPresentAlertRequestingToTurnOffVoiceRecognition:(id)a0;
- (void)_presentAlertConfirmingLanguageChangeAndTurnOffVoiceRecognition:(id)a0 indexPath:(id)a1;
- (id)_allMediaAccessories;
- (void)_presentAlertConfirmingLanguageChangeForThisORAllMediaAccessories:(id)a0 indexPath:(id)a1;
- (void)_changeSiriLanguageOnlyForThisMediaAccessory:(id)a0 turnOffVoiceID:(BOOL)a1;
- (void)_attemptToFixVoiceRecognitionOnboardingFailures:(id)a0;
- (void)_presentAlertConfirmingLanguageChangeForAllHomeMembers:(id)a0 indexPath:(id)a1;
- (void)_turnOffVoiceIDAndChangeSiriLanguageForAllMediaAccessories:(id)a0;
- (id)_siriLanguageOptionForMediaProfile:(id)a0;
- (BOOL)_isAnyMediaAccessoryOnSupportedVoiceRecognitionLanguage;
- (void)_turnOffVoiceIDForTargetLanguageOption:(id)a0;
- (id)initWithAccessorySettingItem:(id)a0 module:(id)a1;

@end
