@class SUManagerClient, PSSpecifier, NSString, NSDate, NSMutableArray;

@interface ICQUsageStorageController : PSListController {
    NSDate *_storageExpiry;
    double _timeoutLimit;
    BOOL _storageLookupInProgress;
    PSSpecifier *_appsStorageGroup;
    PSSpecifier *_photosSpecifier;
    NSMutableArray *_deferredUsageApps;
    SUManagerClient *_SUManager;
    NSString *_updateName;
    PSSpecifier *_storageUsedSpecifier;
    PSSpecifier *_storageAvailableSpecifier;
    unsigned long long _updateRequiredBytes;
}

@property (nonatomic) BOOL openedFromSoftwareUpdate;
@property (nonatomic) BOOL delayUsagePopulation;

+ (id)systemSizeUsed:(id)a0;
+ (id)systemSizeAvailable:(id)a0;
+ (id)storageUsedSpecifier;
+ (id)storageAvailableSpecifier;

- (void)handleURL:(id)a0;
- (id)specifiers;
- (BOOL)shouldDeferPushForSpecifierID:(id)a0;
- (void)viewDidLoad;
- (void)didEnterForeground;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)didUnlock;
- (void).cxx_destruct;
- (id)init;
- (void)reloadSpecifiers;
- (void)dealloc;
- (id)controllerForSpecifier:(id)a0;
- (void)snapshotAndReportDiskSpace;
- (id)tapToRadarURLForAttributes:(id)a0;
- (void)prepareForSnapshot;
- (void)appDeletionComplete;
- (void)reloadStorageSummary;
- (void)checkForPendingUpdate;
- (void)refreshSoftwareUpdateRequiredSpace;
- (BOOL)storageExpired;
- (id)stringWithAppSizeForSpecifier:(id)a0;
- (Class)usageDetailControllerForBundleID:(id)a0;
- (id)_specifierForApp:(id)a0;
- (BOOL)mediaCache:(id)a0 hasGroups:(id)a1;
- (id)_specifierForBundle:(id)a0;
- (void)addStorageSpecifiers:(id)a0 completed:(BOOL)a1;
- (void)removeStorageSpecifier:(id)a0;
- (void)sizeChangedForSpecifier:(id)a0;

@end
