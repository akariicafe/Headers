@class PFCloudKitMetricsClient, NSString, PFCloudKitArchivingUtilities, PFCloudKitStoreMonitorProvider, CKOperationConfiguration, PFCloudKitContainerProvider, CKContainerOptions, PFCloudKitMetadataPurger, NSObject, CKScheduler, NSNumber, CKNotificationListener;
@protocol NSCloudKitMirroringDelegateProgressProvider;

@interface NSCloudKitMirroringDelegateOptions : NSObject <NSCopying> {
    BOOL _skipCloudKitSetup;
    BOOL _useDaemon;
    BOOL _useTestDaemon;
    BOOL _test_useLegacySavePolicy;
    CKScheduler *_scheduler;
    CKNotificationListener *_notificationListener;
    PFCloudKitMetricsClient *_metricsClient;
    PFCloudKitContainerProvider *_containerProvider;
    PFCloudKitStoreMonitorProvider *_storeMonitorProvider;
    PFCloudKitMetadataPurger *_metadataPurger;
}

@property (weak, nonatomic) NSObject<NSCloudKitMirroringDelegateProgressProvider> *progressProvider;
@property (retain, nonatomic) PFCloudKitArchivingUtilities *archivingUtilities;
@property (retain, nonatomic) CKOperationConfiguration *defaultOperationConfiguration;
@property (retain, nonatomic) NSString *containerIdentifier;
@property (retain, nonatomic) NSNumber *ckAssetThresholdBytes;
@property (nonatomic) BOOL initializeSchema;
@property (retain, nonatomic) CKContainerOptions *containerOptions;
@property (nonatomic) BOOL useEncryptedStorage;
@property (nonatomic) BOOL useDeviceToDeviceEncryption;
@property (retain, nonatomic) NSNumber *operationMemoryThresholdBytes;
@property (nonatomic) BOOL automaticallyDownloadFileBackedFutures;
@property (nonatomic) BOOL automaticallyScheduleImportAndExportOperations;
@property (nonatomic) BOOL preserveLegacyRecordMetadataBehavior;
@property (retain, nonatomic) NSString *apsConnectionMachServiceName;
@property (nonatomic) long long databaseScope;

- (id)initWithCloudKitContainerOptions:(id)a0;
- (id)description;
- (id)initWithContainerIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (void)dealloc;

@end
