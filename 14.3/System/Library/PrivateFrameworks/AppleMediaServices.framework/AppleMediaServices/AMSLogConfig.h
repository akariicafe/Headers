@class NSString, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface AMSLogConfig : NSObject <NSCopying, NSMutableCopying>

@property (retain, nonatomic) NSObject<OS_os_log> *backingOSLogObject;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *propertyAccessQueue;
@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSString *subsystem;
@property (readonly, nonatomic) BOOL debugLogsEnabled;
@property (readonly, nonatomic) NSObject<OS_os_log> *OSLogObject;

+ (id)sharedAccountsAuthenticationPluginConfig;
+ (id)sharedAccountsMigrationConfig;
+ (id)sharedDeviceOffersConfig;
+ (id)sharedAnisetteConfig;
+ (id)sharedAccountsLogoutConfig;
+ (id)sharedAccountsMigrationConfigOversize;
+ (id)_createLogConfigWithBaseConfig:(id)a0 subystem:(id)a1 category:(id)a2;
+ (id)sharedAccountsStorefrontConfig;
+ (id)sharedBagCacheConfig;
+ (id)sharedRatingsProviderConfig;
+ (id)sharedAttestationConfig;
+ (id)sharedFollowUpConfig;
+ (id)sharedAccountsCookiesConfig;
+ (id)sharedPushNotificationConfig;
+ (id)sharedMediaServiceOwnerConfig;
+ (id)sharedConfig;
+ (id)sharedAccountsOversizeConfig;
+ (id)sharedPrivacyConfig;
+ (id)sharedPurchaseConfig;
+ (BOOL)_debugLogsEnabled:(id)a0;
+ (id)sharedDataMigrationConfig;
+ (id)sharedAccountsSyncPluginConfig;
+ (id)sharedUserNotificationConfig;
+ (id)sharedAccountsNotificationPluginConfig;
+ (id)sharedMarketingItemConfig;
+ (id)_createLogConfigWithSubsystem:(id)a0 category:(id)a1;
+ (id)sharedKeychainConfig;
+ (id)sharedConfigOversize;
+ (id)sharedAccountsMultiUserConfig;
+ (id)sharedAccountsConfig;
+ (id)sharedAccountsDaemonConfig;
+ (id)sharedMediaConfig;
+ (id)sharedBagConfig;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
