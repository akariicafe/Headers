@protocol ATXCloudStorageSettingsDelegate;

@interface ATXCloudStorageSettingsListener : NSObject

@property (retain, nonatomic) id<ATXCloudStorageSettingsDelegate> delegate;

+ (id)sharedInstance;
+ (BOOL)isBackupForSiriEnabled;
+ (BOOL)isBackupForContactsEnabled;

- (void)registerForCloudStorageSettingsNotifications;
- (void)handleDeleteDataRequest;
- (void)registerForCloudSyncPreferenceDidChangeNotification;
- (void)registerForCloudStorageDeletedByUserNotification;
- (void)handleBackupPreferencesDidChange;
- (void).cxx_destruct;
- (id)init;

@end
