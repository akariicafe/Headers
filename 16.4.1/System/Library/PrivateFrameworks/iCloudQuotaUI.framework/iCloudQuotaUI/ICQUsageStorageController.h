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
+ (id)storageAvailableSpecifier;
+ (id)storageUsedSpecifier;
+ (id)systemSizeAvailable:(id)a0;

- (void)reloadSpecifiers;
- (void)didEnterForeground;
- (void)dealloc;
- (void)viewDidLoad;
- (id)specifiers;
- (id)init;
- (void)viewDidDisappear:(BOOL)a0;
- (void)handleURL:(id)a0;
- (BOOL)shouldDeferPushForSpecifierID:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)didUnlock;
- (id)controllerForSpecifier:(id)a0;
- (void)prepareForSnapshot;
- (void)addStorageSpecifiers:(id)a0 completed:(BOOL)a1;
- (id)_specifierForApp:(id)a0;
- (id)_specifierForBundle:(id)a0;
- (void)appDeletionComplete;
- (void)checkForPendingUpdate;
- (BOOL)mediaCache:(id)a0 hasGroups:(id)a1;
- (void)refreshSoftwareUpdateRequiredSpace;
- (void)reloadStorageSummary;
- (void)removeStorageSpecifier:(id)a0;
- (void)sizeChangedForSpecifier:(id)a0;
- (void)snapshotAndReportDiskSpace;
- (BOOL)storageExpired;
- (id)stringWithAppSizeForSpecifier:(id)a0;
- (id)tapToRadarURLForAttributes:(id)a0;
- (Class)usageDetailControllerForBundleID:(id)a0;

@end
