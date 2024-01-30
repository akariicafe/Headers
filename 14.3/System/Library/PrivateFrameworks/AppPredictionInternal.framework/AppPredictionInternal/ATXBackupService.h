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

+ (BOOL)isCloudKitError:(id)a0;
+ (BOOL)isManateeDecryptionError:(id)a0;
+ (id)queryForBackupsWithDeviceID:(id)a0;
+ (id)allErrorsFromCloudKitError:(id)a0;
+ (BOOL)isBackupRestore;
+ (id)backupService;

- (void).cxx_destruct;
- (void)handleDeleteDataRequest;
- (void)fetchBackupAssetWithCompletionHandler:(id /* block */)a0;
- (BOOL)retryIfNeededInResponseToError:(id)a0 withBlock:(id /* block */)a1;
- (void)restoreFromBackupIfNeccessary:(id /* block */)a0;
- (void)updateIsRestoreStarted:(BOOL)a0;
- (void)setupRecordZoneWithName:(id)a0 completionHandler:(id /* block */)a1;
- (void)backupWithCompletionHandler:(id /* block */)a0;
- (void)initializeCloudKitClientWithCompletionHandler:(id /* block */)a0;
- (void)getDeviceIDWithCompletionHandler:(id /* block */)a0;
- (id)initWithContainerIdentifier:(id)a0 backupFileManager:(id)a1;
- (void)saveBackupAsset:(id)a0 completionHandler:(id /* block */)a1;
- (void)isManateeAvailableWithCompletionHandler:(id /* block */)a0;
- (void)restoreFromBackupWithRetries:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)writeBackupToiCloud:(id /* block */)a0;

@end
