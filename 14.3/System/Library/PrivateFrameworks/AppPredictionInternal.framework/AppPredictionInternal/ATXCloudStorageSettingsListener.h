@protocol ATXCloudStorageSettingsDelegate;

@interface ATXCloudStorageSettingsListener : NSObject

@property (retain, nonatomic) id<ATXCloudStorageSettingsDelegate> delegate;

+ (id)sharedInstance;
+ (BOOL)isBackupEnabled;

- (id)init;
- (void).cxx_destruct;
- (void)registerForCloudSyncPreferenceDidChangeNotification;
- (void)handleDeleteDataRequest;
- (void)registerForCloudStorageDeletedByUserNotification;
- (void)registerForCloudStorageSettingsNotifications;
- (void)handleBackupPreferencesDidChange;

@end
