@class DictationOfflineStatusObserver, NSDictionary, NSMutableDictionary, NSMutableSet, NSString;

@interface TIDictationLanguageListController : PSListController <DictationOfflineStatusObserverDelegate>

@property (copy, nonatomic) NSDictionary *offlineStatusForLanguage;
@property (retain, nonatomic) DictationOfflineStatusObserver *dictaionOfflineStatusObserver;
@property (retain, nonatomic) NSMutableDictionary *assetIdToLanguages;
@property (retain, nonatomic) NSMutableSet *trackingDownloadStatusForAssetsIDs;
@property (retain, nonatomic) NSMutableSet *onDeviceLocalesDownloading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)isSmartLanguageSelectionEnabled;
+ (long long)numberOfEnabledEntries:(id)a0;

- (id)init;
- (void)dealloc;
- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (BOOL)shouldReloadSpecifiersOnResume;
- (void)viewDidLoad;
- (void)offlineDictationStatusUpdated:(id)a0;
- (void)presentPrivacySheet:(id)a0;
- (void)toggleDictationLanguage:(id)a0;
- (id)dictationFooterText;
- (void)toggleSLSEnabled:(id)a0;
- (void)setSLSEnabled:(id)a0 specifier:(id)a1;
- (id)isSLSEnabled:(id)a0;
- (void)updateDownloadingProgressForDictationLanguage:(id)a0 stalled:(BOOL)a1;
- (void)updateDownloadingStateForAsset:(id)a0 downloadResult:(long long)a1;
- (id)slsDictationLanguagesSpecifiers;
- (id)onDeviceDictationLanguagesSpecifiers;
- (id)onDeviceNotCapableDictationLanguagesSpecifiers;
- (id)tableView:(id)a0 classicDictationCellForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 enhancedDictationCellForRowAtIndexPath:(id)a1;
- (void)handleSmartLanguageSelectionOnDictationLanguageToggle:(BOOL)a0 enabledDictationLanguages:(id)a1 specifier:(id)a2;
- (id)dictationLanguagesSpecifiers;

@end
