@protocol ATXCloudStorageSettingsDelegate;

@interface ATXCloudStorageSettingsListener : NSObject

@property (retain, nonatomic) id<ATXCloudStorageSettingsDelegate> delegate;

+ (id)sharedInstance;
+ (BOOL)isBackupForContactsEnabled;
+ (BOOL)isBackupForSiriEnabled;

- (void)handleBackupPreferencesDidChange;
- (void)registerForCloudStorageSettingsNotifications;
- (void)handleDeleteDataRequest;
- (void)registerForCloudStorageDeletedByUserNotification;
- (id)init;
- (void)registerForCloudSyncPreferenceDidChangeNotification;
- (void).cxx_destruct;

@end
