@class NSDate, NSString, NSURL, ICQPreferencesRemoteUIDelegate, MBBackup, PSSpecifier, ICQSpinnerBezel, NSMutableArray, ICQDeviceIdentificationView, MBManager;

@interface ICQLocalBackupController : PSListController <MBManagerDelegate, DelayedPushDelegate> {
    MBManager *_backupManager;
    NSMutableArray *_appSpecifiers;
    NSMutableArray *_visibleAppSpecifiers;
    BOOL _showAllPressed;
    PSSpecifier *_showAllSpecifier;
    PSSpecifier *_nextBackupSizeSpecifier;
    ICQDeviceIdentificationView *_deviceIdentificationView;
    MBBackup *_deviceBackup;
    NSDate *_dateOfLastBackup;
    BOOL _doneLoadingDeviceBackup;
    NSString *_nextBackupSizeString;
    ICQSpinnerBezel *_deletionBezel;
    BOOL _shouldCancelScanOnExit;
    BOOL _manageStorageReloadNeeded;
}

@property (nonatomic) BOOL scanInProgress;
@property (nonatomic) unsigned long long backupSize;
@property (retain, nonatomic) NSString *additionalSpaceRequiredString;
@property (retain, nonatomic) NSString *deviceName;
@property (retain, nonatomic) NSString *deviceIdentifier;
@property (retain, nonatomic) NSURL *deviceImageURL;
@property (retain, nonatomic) ICQPreferencesRemoteUIDelegate *remoteDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)specifier;
+ (id)deviceImageURLFromAttributes:(id)a0;
+ (BOOL)isiCloudPhotosEnabled;
+ (id)currentDeviceBackupWithMBManager:(id)a0 filtering:(BOOL)a1 error:(id *)a2;
+ (id)cellValueStyleDateStringForDate:(id)a0;
+ (id)dateStringForSnapshot:(id)a0;

- (id)specifiers;
- (void)viewWillDisappear:(BOOL)a0;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (void)loadView;
- (void)viewDidDisappear:(BOOL)a0;
- (void)managerDidFinishScan:(id)a0;
- (void)manager:(id)a0 didFailScanWithError:(id)a1;
- (void).cxx_destruct;
- (BOOL)needsToShowToolbarInPrefsAppRoot;
- (id)init;
- (void)dealloc;
- (void)didEnterBackground:(id)a0;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)isDomainWhitelisted:(id)a0;
- (void)reloadQuotaInfo;
- (void)showAllApps:(id)a0;
- (id)nextBackupSizeStringWithSpecifier:(id)a0;
- (void)loadPropertyValuesFromDictionary:(id)a0;
- (void)loadQuotaInfo;
- (void)turnOffAppBackupConfirmed:(id)a0;
- (void)updateNextBackupSize;
- (void)animateAppSpecifierChanges;
- (id)appSpecifierForBundleID:(id)a0;
- (void)setBackupDomainEnabled:(id)a0 forSpecifier:(id)a1;
- (id)backupDomainEnabledForSpecifier:(id)a0;
- (void)assignDisableBackupsConfirmationToSpecifier:(id)a0;
- (void)turnOffAppBackupCancelled:(id)a0;
- (void)_updateTable:(id)a0 toMatchArray:(id)a1 withVisibleArray:(id)a2 maxVisible:(unsigned long long)a3 inSection:(long long)a4 withRowOffset:(long long)a5;
- (id)loadAppSpecifiersWithDomainInfo:(id)a0;
- (BOOL)beginScan;
- (void)confirmDelete:(id)a0;
- (void)deleteBackupConfirmed;
- (void)updateAppSpecifiersScanWhenComplete:(BOOL)a0;
- (void)reloadAfterFetch;
- (void)reloadBackupInfoWithDeleteButton:(BOOL)a0;
- (id)currentDeviceBackup;
- (void)insertDeleteBackupButtonIfNeeded;
- (id)dateStringOfLatestBackup;
- (id)backupSizeString;
- (void)startDeletionBezel;
- (void)endDeletionBezel;
- (void)loadStarted:(id)a0;
- (void)loadFinished:(id)a0;
- (void)loadFailed:(id)a0 withError:(id)a1;

@end
