@class NSDate, NSString, SUScanOptions, SUInstallPolicy, SUDownload, NSDictionary, _SUAutoInstallOperationModel, SUManagedDeviceUpdateDelay, NSObject, SUDescriptor, SUCorePersistedState;
@protocol OS_dispatch_queue;

@interface SUState : NSObject <NSKeyedUnarchiverDelegate> {
    NSObject<OS_dispatch_queue> *_stateQueue;
    SUCorePersistedState *_persistedState;
}

@property (retain, nonatomic) _SUAutoInstallOperationModel *lastAutoInstallOperationModel;
@property (copy, nonatomic) SUDownload *lastDownload;
@property (copy, nonatomic) SUDescriptor *lastScannedDescriptor;
@property (copy, nonatomic) SUDescriptor *currentDescriptor;
@property (copy, nonatomic) SUDescriptor *failedPatchDescriptor;
@property (retain, nonatomic) NSDate *lastScannedDescriptorTime;
@property (retain, nonatomic) SUScanOptions *lastScannedDescriptorScanOptions;
@property (retain, nonatomic) NSDate *scheduledManualDownloadWifiPeriodEndTime;
@property (retain, nonatomic) NSDate *scheduledAutodownloadWifiPeriodEndTime;
@property (retain, nonatomic) NSDate *scheduledAutodownloadPolicyChangeTime;
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
@property (nonatomic) BOOL manifestSubmitted;
@property (retain, nonatomic) NSString *sessionID;
@property (retain, nonatomic) NSString *lastDeletedSUAssetID;
@property (retain, nonatomic) NSString *lastAssetAudience;
@property (retain, nonatomic) NSDate *appliedTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentState;
+ (id)statePath;

- (void)load;
- (id)init;
- (void).cxx_destruct;
- (void)save;
- (Class)unarchiver:(id)a0 cannotDecodeObjectOfClassName:(id)a1 originalClasses:(id)a2;
- (void)resetDownloadAndScanHistory;
- (void)resetAllHistory;
- (id)_stateAsDictionary;

@end
