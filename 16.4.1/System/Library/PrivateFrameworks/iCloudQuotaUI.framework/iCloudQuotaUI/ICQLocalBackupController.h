@class NSDate, NSString, NSURL, ICQPreferencesRemoteUIDelegate, MBBackup, PSSpecifier, ICQSpinnerBezel, NSMutableArray, ACAccount, ICQDeviceIdentificationView, MBManager;

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
@property (retain, nonatomic) ACAccount *account;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)specifier;
+ (id)cellValueStyleDateStringForDate:(id)a0;
+ (id)currentDeviceBackupWithMBManager:(id)a0 filtering:(BOOL)a1 error:(id *)a2;
+ (id)dateStringForSnapshot:(id)a0;
+ (id)deviceImageURLFromAttributes:(id)a0;
+ (BOOL)isiCloudPhotosEnabled;
+ (id)specifierForAccount:(id)a0;

- (void)setSpecifier:(id)a0;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)didEnterBackground:(id)a0;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (id)specifiers;
- (id)init;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)loadView;
- (void)manager:(id)a0 didFailScanWithError:(id)a1;
- (void)managerDidFinishScan:(id)a0;
- (BOOL)isDomainWhitelisted:(id)a0;
- (void)reloadQuotaInfo;
- (void)_backupDeletionSuccess;
- (void)_updateTable:(id)a0 toMatchArray:(id)a1 withVisibleArray:(id)a2 maxVisible:(unsigned long long)a3 inSection:(long long)a4 withRowOffset:(long long)a5;
- (void)animateAppSpecifierChanges;
- (id)appSpecifierForBundleID:(id)a0;
- (void)assignDisableBackupsConfirmationToSpecifier:(id)a0;
- (id)backupDomainEnabledForSpecifier:(id)a0;
- (id)backupSizeString;
- (BOOL)beginScan;
- (void)confirmDelete:(id)a0;
- (id)currentDeviceBackup;
- (id)dateStringOfLatestBackup;
- (void)deleteBackupConfirmed;
- (void)endDeletionBezel;
- (void)insertDeleteBackupButtonIfNeeded;
- (id)loadAppSpecifiersWithDomainInfo:(id)a0;
- (void)loadFailed:(id)a0 withError:(id)a1;
- (void)loadFinished:(id)a0;
- (void)loadPropertyValuesFromDictionary:(id)a0;
- (void)loadQuotaInfo;
- (void)loadStarted:(id)a0;
- (id)nextBackupSizeStringWithSpecifier:(id)a0;
- (void)reloadAfterFetch;
- (void)reloadBackupInfoWithDeleteButton:(BOOL)a0;
- (void)setBackupDomainEnabled:(id)a0 forSpecifier:(id)a1;
- (void)showAllApps:(id)a0;
- (void)startDeletionBezel;
- (void)turnOffAppBackupCancelled:(id)a0;
- (void)turnOffAppBackupConfirmed:(id)a0;
- (void)updateAppSpecifiersScanWhenComplete:(BOOL)a0;
- (void)updateNextBackupSize;

@end
