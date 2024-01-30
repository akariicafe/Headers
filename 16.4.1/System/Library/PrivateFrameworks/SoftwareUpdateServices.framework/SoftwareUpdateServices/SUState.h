@class NSDate, SUInstallPolicy, SUDownload, NSDictionary, NSObject, NSMutableArray, SURollbackDescriptor, SUCorePersistedState, NSString, SUDescriptor, SUManagedDeviceUpdateDelay, SUCoreDescriptor, NSArray, SUScanOptions, _SUAutoInstallOperationModel, NSNumber;
@protocol OS_dispatch_queue;

@interface SUState : NSObject <NSKeyedUnarchiverDelegate> {
    NSObject<OS_dispatch_queue> *_stateQueue;
    SUCorePersistedState *_persistedState;
}

@property (retain, nonatomic) _SUAutoInstallOperationModel *lastAutoInstallOperationModel;
@property (copy, nonatomic) SUDownload *lastDownload;
@property (copy, nonatomic) SUDescriptor *preferredLastScannedDescriptor;
@property (copy, nonatomic) SUDescriptor *alternateLastScannedDescriptor;
@property (copy, nonatomic) NSArray *failedPatchDescriptors;
@property (retain, nonatomic) SUScanOptions *lastScannedDescriptorScanOptions;
@property (retain, nonatomic) NSDate *scheduledManualDownloadWifiPeriodEndTime;
@property (retain, nonatomic) NSDate *scheduledAutodownloadWifiPeriodEndTime;
@property (retain, nonatomic) NSDate *scheduledAutodownloadPolicyChangeTime;
@property (retain, nonatomic) NSDate *lastScanDate;
@property (retain, nonatomic) NSDate *lastAutoDownloadDate;
@property (nonatomic) BOOL autodownloadNeedsOneTimeRetry;
@property (nonatomic) BOOL stashbagPersisted;
@property (retain, nonatomic) NSString *lastProductVersion;
@property (retain, nonatomic) NSString *lastProductBuild;
@property (retain, nonatomic) NSString *lastProductType;
@property (retain, nonatomic) NSString *lastReleaseType;
@property (retain, nonatomic) NSDictionary *unlockCallbacks;
@property (retain, nonatomic) NSDictionary *mandatoryUpdateDict;
@property (readonly, retain, nonatomic) NSMutableArray *rolledBackBuildVersions;
@property (retain, nonatomic) NSString *lastRollbackRecommendedBuildVersion;
@property (retain, nonatomic) SUManagedDeviceUpdateDelay *mdmDelay;
@property (retain, nonatomic) SUInstallPolicy *installPolicy;
@property (retain, nonatomic) NSString *sessionID;
@property (retain, nonatomic) NSString *lastDeletedSUAssetID;
@property (retain, nonatomic) NSString *lastAssetAudience;
@property (retain, nonatomic) NSDate *appliedTime;
@property (retain, nonatomic) NSDictionary *updateDiscoveryDates;
@property (copy, nonatomic) SUCoreDescriptor *preferredLastScannedCoreDescriptor;
@property (copy, nonatomic) SUCoreDescriptor *alternateLastScannedCoreDescriptor;
@property (nonatomic) BOOL underExclusiveControl;
@property (retain, nonatomic) NSString *lastRecommendedUpdateVersion;
@property (retain, nonatomic) NSNumber *lastRecommendedUpdateInterval;
@property (retain, nonatomic) NSDate *lastRecommendedUpdateDiscoveryDate;
@property (retain, nonatomic) NSString *lastSplatRestoreVersion;
@property (retain, nonatomic) SURollbackDescriptor *lastRollbackDescriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentState;
+ (id)statePath;

- (void)load;
- (void)save;
- (Class)unarchiver:(id)a0 cannotDecodeObjectOfClassName:(id)a1 originalClasses:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (void)resetAllHistory;
- (void)_queue_addFailedPatchDescriptor:(id)a0;
- (id)_stateAsDictionary;
- (void)addFailedPatchDescriptor:(id)a0;
- (void)addRolledBackBuildVersion:(id)a0;
- (void)loadPersistedFailedPatchDescriptors;
- (void)loadRolledBackBuildVersions;
- (void)persistFailedPatchDescriptors;
- (void)persistRolledBackBuildVersions;
- (void)queue_addRolledBackBuildVersion:(id)a0;
- (void)resetDownloadAndScanHistory;

@end
