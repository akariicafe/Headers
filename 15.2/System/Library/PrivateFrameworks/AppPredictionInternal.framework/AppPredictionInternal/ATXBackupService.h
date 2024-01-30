@class NSUserDefaults, ATXCloudKitClient, ATXCloudStorageSettingsListener, NSString, NSObject, ATXBackupFileManager;
@protocol OS_dispatch_queue;

@interface ATXBackupService : NSObject <ATXCloudStorageSettingsDelegate> {
    NSUserDefaults *_atxDefaults;
}

@property (retain, nonatomic) ATXBackupFileManager *backupFileManager;
@property (retain, nonatomic) ATXCloudKitClient *ckClient;
@property (weak, nonatomic) ATXCloudStorageSettingsListener *cloudStorageSettingsListener;
@property (retain, nonatomic) NSString *containerIdentifier;
@property (retain, nonatomic) NSString *deviceID;
@property (nonatomic) BOOL isManatee;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;

+ (BOOL)isManateeDecryptionError:(id)a0;
+ (BOOL)isBackupRestore;
+ (id)backupService;
+ (id)allErrorsFromCloudKitError:(id)a0;
+ (id)queryForBackupsWithDeviceID:(id)a0;
+ (BOOL)isCloudKitError:(id)a0;

- (void)writeBackupToiCloud:(id /* block */)a0;
- (void)isManateeAvailableWithCompletionHandler:(id /* block */)a0 withRetryBlock:(id /* block */)a1;
- (void)getDeviceIDWithCompletionHandler:(id /* block */)a0;
- (void)updateIsRestoreStarted:(BOOL)a0;
- (void)handleDeleteDataRequest;
- (void)fetchBackupAssetWithCompletionHandler:(id /* block */)a0;
- (BOOL)retryIfNeededInResponseToError:(id)a0 withBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)initializeCloudKitClientWithCompletionHandler:(id /* block */)a0 withRetryBlock:(id /* block */)a1;
- (void)backupWithCompletionHandler:(id /* block */)a0;
- (void)restoreFromBackupWithRetries:(unsigned long long)a0 fromContainerID:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithContainerIdentifier:(id)a0 backupFileManager:(id)a1;
- (void)saveBackupAsset:(id)a0 completionHandler:(id /* block */)a1;
- (void)restoreFromBackupIfNeccessary:(id /* block */)a0;
- (void)setupRecordZoneWithName:(id)a0 completionHandler:(id /* block */)a1;

@end
