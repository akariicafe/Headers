@class NSString, NSMutableDictionary, NPSDomainAccessor, PSSpecifier, NSMutableArray, BBSectionInfo;

@interface BPSNotificationAppController : BPSListController

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) BBSectionInfo *bbSectionInfo;
@property (retain, nonatomic) NSMutableArray *notificationApplicationSpecifiers;
@property (retain, nonatomic) NPSDomainAccessor *bbAppsSettings;
@property (readonly, nonatomic) NSMutableArray *notificationSpecifiers;
@property (readonly, nonatomic) BOOL mirrorSettings;
@property (readonly, nonatomic) BOOL showAlerts;
@property (readonly, nonatomic) unsigned long long alertingMode;
@property (readonly, nonatomic) BOOL showPreview;
@property (readonly, nonatomic) NSMutableDictionary *sectionInfo;
@property (readonly, nonatomic) PSSpecifier *previewSwitchSpecifier;
@property (nonatomic) unsigned long long settingsMode;

- (id)specifiers;
- (id)bundle;
- (id)applicationBundleIdentifier;
- (BOOL)shouldReloadSpecifiersOnResume;
- (void).cxx_destruct;
- (id)init;
- (long long)alertType;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)bulletinBoardSettings;
- (id)sectionInfoForBBSectionInfo:(id)a0;
- (BOOL)suppressMirrorOption;
- (void)setMirrorSettings:(BOOL)a0;
- (BOOL)caresAboutSubsections;
- (void)updateSubsections;
- (BOOL)suppressAlertSpecifiers;
- (void)removeAlertOptions;
- (BOOL)_suppressSendToNotificationCenterOption;
- (void)removeSendToNotificationCenterOption;
- (void)setSoundsValue:(id)a0 forSpecifier:(id)a1;
- (id)soundsValue:(id)a0;
- (void)setVibrationValue:(id)a0 forSpecifier:(id)a1;
- (id)vibrationValue:(id)a0;
- (void)setNotificationGroupingValue:(id)a0 specifier:(id)a1;
- (id)notificationGroupingValue:(id)a0;
- (BOOL)suppressNotificationCoalescingOptions;
- (void)removeNotificationCoalescingOptions;
- (id)applicationGroupSpecifiers;
- (void)removeMirrorOptions;
- (BOOL)suppressAllMirrorSpecifiers;
- (id)localizedMirroringDetailFooter;
- (id)mirroredApplicationGroupSpecifiers;
- (id)customGroupSpecifierForDescription:(id)a0;
- (id)localizedPaneTitle;
- (BOOL)watchHasCapabilitySendToNotificationCenter;
- (BOOL)suppressSendToNotificationCenterOption;
- (void)writeSectionState;
- (void)mirrorSettingsChanged:(BOOL)a0;
- (void)setAlertingMode:(unsigned long long)a0;
- (id)localizedPreviewChoiceTitle;
- (void)setShowPreviewValue:(id)a0 forSpecifier:(id)a1;
- (id)showPreviewValue:(id)a0;
- (id)glanceSpecifierForIdentifier:(id)a0;
- (void)_showSettingsNotifications;
- (id)notificationGroupTitles;
- (id)notificationGroupValues;
- (BOOL)wantsPreviewChoice;
- (id)localizedPreviewGroupLabel;
- (id)localizedPreviewGroupFooter;

@end
