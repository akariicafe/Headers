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

+ (BOOL)_debugLogsEnabled:(id)a0;
+ (id)sharedAskPermissionExtensionConfig;
+ (id)sharediTunesStoreConfigOversize;
+ (id)sharedPrivacyConfig;
+ (BOOL)_deviceIsRunningSeedBuild;
+ (id)sharedBagConfig;
+ (id)sharedAccountsAuthenticationConfig;
+ (id)sharedAccountsMigrationConfig;
+ (BOOL)_deviceIsRunningInternalBuild;
+ (id)sharedAccountsMigrationConfigOversize;
+ (id)sharedFeatureEnablerMigrationConfig;
+ (id)sharedAccountsConfig;
+ (id)sharedFollowUpConfig;
+ (id)sharedAccountsCookiesConfig;
+ (id)sharedAccountsStorefrontConfig;
+ (id)sharedStoreServicesConfigOversize;
+ (id)sharedPushNotificationConfig;
+ (id)_createLogConfigWithSubsystem:(id)a0 category:(id)a1;
+ (id)_createLogConfigWithBaseConfig:(id)a0 subystem:(id)a1 category:(id)a2;
+ (id)sharedStoreServicesConfig;
+ (id)sharedDaemonConfig;
+ (id)sharedAccountsLogoutConfig;
+ (id)sharedConfig;
+ (id)sharediTunesStoreConfig;
+ (id)sharedDaemonConfigOversize;
+ (id)sharedBagCacheConfig;
+ (id)_logFileDirectoryPathForSubsystem:(id)a0 category:(id)a1;
+ (BOOL)_deviceIsRunningInternalOrSeedBuild;
+ (id)_logFilenameForSubsystem:(id)a0 category:(id)a1;
+ (id)sharedWriteToDiskConfig;
+ (id)sharedFairPlayAnisetteConfig;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
