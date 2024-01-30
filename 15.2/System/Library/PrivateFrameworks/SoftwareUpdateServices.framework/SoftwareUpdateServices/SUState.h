@class NSDate, SUInstallPolicy, SUDownload, NSDictionary, NSObject, SUCorePersistedState, NSString, SUDescriptor, SUManagedDeviceUpdateDelay, SUCoreDescriptor, NSArray, SUScanOptions, _SUAutoInstallOperationModel;
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
@property (nonatomic) BOOL autodownloadNeedsOneTimeRetry;
@property (nonatomic) BOOL stashbagPersisted;
@property (retain, nonatomic) NSString *lastProductVersion;
@property (retain, nonatomic) NSString *lastProductBuild;
@property (retain, nonatomic) NSString *lastProductType;
@property (retain, nonatomic) NSString *lastReleaseType;
@property (retain, nonatomic) NSDictionary *unlockCallbacks;
@property (retain, nonatomic) NSDictionary *mandatoryUpdateDict;
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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentState;
+ (id)statePath;

- (void)addFailedPatchDescriptor:(id)a0;
- (void)save;
- (Class)unarchiver:(id)a0 cannotDecodeObjectOfClassName:(id)a1 originalClasses:(id)a2;
- (id)_stateAsDictionary;
- (void)persistFailedPatchDescriptors;
- (void)resetDownloadAndScanHistory;
- (void)_queue_addFailedPatchDescriptor:(id)a0;
- (void)loadPersistedFailedPatchDescriptors;
- (void).cxx_destruct;
- (id)init;
- (void)resetAllHistory;
- (void)load;

@end
