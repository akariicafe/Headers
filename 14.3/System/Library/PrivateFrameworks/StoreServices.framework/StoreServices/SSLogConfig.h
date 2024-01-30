@class SSLogFileOptions, NSString, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface SSLogConfig : NSObject <NSCopying, NSMutableCopying>

@property (retain, nonatomic) SSLogFileOptions *backingLogFileOptions;
@property (retain, nonatomic) NSObject<OS_os_log> *backingOSLogObject;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *propertyAccessQueue;
@property (copy, nonatomic) NSString *category;
@property (nonatomic) unsigned long long environment;
@property (copy, nonatomic) NSString *outputDirectory;
@property (copy, nonatomic) NSString *outputFilename;
@property (copy, nonatomic) NSString *subsystem;
@property (nonatomic) BOOL writeToDisk;
@property (readonly, nonatomic) BOOL debugLogsEnabled;
@property (readonly, nonatomic) SSLogFileOptions *logFileOptions;
@property (readonly, nonatomic) NSObject<OS_os_log> *OSLogObject;
@property (readonly, nonatomic) BOOL shouldLog;
@property (readonly, nonatomic) BOOL shouldLogToDisk;

+ (id)sharedAccountsMigrationConfig;
+ (id)sharedFeatureEnablerMigrationConfig;
+ (id)_logFileDirectoryPathForSubsystem:(id)a0 category:(id)a1;
+ (id)sharedAccountsLogoutConfig;
+ (id)sharedStoreServicesConfig;
+ (id)sharedAccountsMigrationConfigOversize;
+ (id)_createLogConfigWithBaseConfig:(id)a0 subystem:(id)a1 category:(id)a2;
+ (id)sharedStoreServicesConfigOversize;
+ (id)sharedAccountsStorefrontConfig;
+ (id)sharedBagCacheConfig;
+ (id)sharedDaemonConfig;
+ (BOOL)_deviceIsRunningInternalOrSeedBuild;
+ (BOOL)_deviceIsRunningInternalBuild;
+ (id)sharedAccountsAuthenticationConfig;
+ (id)sharedFollowUpConfig;
+ (id)sharedAskPermissionExtensionConfig;
+ (id)sharedAccountsCookiesConfig;
+ (id)sharedPushNotificationConfig;
+ (id)sharedWriteToDiskConfig;
+ (BOOL)_deviceIsRunningSeedBuild;
+ (id)sharedFairPlayAnisetteConfig;
+ (id)sharedConfig;
+ (id)sharediTunesStoreConfig;
+ (id)sharedPrivacyConfig;
+ (id)_logFilenameForSubsystem:(id)a0 category:(id)a1;
+ (BOOL)_debugLogsEnabled:(id)a0;
+ (id)sharedDaemonConfigOversize;
+ (id)_createLogConfigWithSubsystem:(id)a0 category:(id)a1;
+ (id)sharediTunesStoreConfigOversize;
+ (id)sharedAccountsConfig;
+ (id)sharedBagConfig;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
