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

+ (id)sharedWriteToDiskConfig;
+ (BOOL)_debugLogsEnabled:(id)a0;
+ (id)_logFileDirectoryPathForSubsystem:(id)a0 category:(id)a1;
+ (id)sharedPrivacyConfig;
+ (id)sharedAccountsMigrationConfigOversize;
+ (id)sharedFollowUpConfig;
+ (id)sharedStoreServicesConfigOversize;
+ (id)sharedAccountsLogoutConfig;
+ (id)_logFilenameForSubsystem:(id)a0 category:(id)a1;
+ (id)sharedBagConfig;
+ (id)sharediTunesStoreConfig;
+ (id)sharedFeatureEnablerMigrationConfig;
+ (id)sharedDaemonConfigOversize;
+ (id)sharedPushNotificationConfig;
+ (id)sharedAccountsAuthenticationConfig;
+ (id)sharedStoreServicesConfig;
+ (id)sharedAskPermissionExtensionConfig;
+ (BOOL)_deviceIsRunningSeedBuild;
+ (id)sharedFairPlayAnisetteConfig;
+ (id)sharediTunesStoreConfigOversize;
+ (id)sharedAccountsMigrationConfig;
+ (id)_createLogConfigWithBaseConfig:(id)a0 subystem:(id)a1 category:(id)a2;
+ (BOOL)_deviceIsRunningInternalBuild;
+ (id)sharedConfig;
+ (id)sharedDaemonConfig;
+ (BOOL)_deviceIsRunningInternalOrSeedBuild;
+ (id)sharedAccountsCookiesConfig;
+ (id)sharedAccountsStorefrontConfig;
+ (id)_createLogConfigWithSubsystem:(id)a0 category:(id)a1;
+ (id)sharedAccountsConfig;
+ (id)sharedBagCacheConfig;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
