@class NSNumber, NSString, PFCloudKitMetadataPurger, PFCloudKitStoreMonitorProvider, PFCloudKitContainerProvider, CKOperationConfiguration, CKContainerOptions, NSObject, CKScheduler, PFCloudKitMetricsClient, CKNotificationListener;
@protocol NSCloudKitMirroringDelegateProgressProvider;

@interface NSCloudKitMirroringDelegateOptions : NSObject

@property (retain, nonatomic) CKScheduler *scheduler;
@property (retain, nonatomic) CKNotificationListener *notificationListener;
@property (nonatomic) BOOL skipCloudKitSetup;
@property (retain, nonatomic) PFCloudKitContainerProvider *containerProvider;
@property (retain, nonatomic) PFCloudKitStoreMonitorProvider *storeMonitorProvider;
@property (retain, nonatomic) PFCloudKitMetricsClient *metricsClient;
@property (retain, nonatomic) PFCloudKitMetadataPurger *metadataPurger;
@property (nonatomic) BOOL useDaemon;
@property (nonatomic) BOOL useTestDaemon;
@property (weak, nonatomic) NSObject<NSCloudKitMirroringDelegateProgressProvider> *progressProvider;
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

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)copy;
- (id)description;
- (id)initWithCloudKitContainerOptions:(id)a0;
- (id)initWithContainerIdentifier:(id)a0;

@end
