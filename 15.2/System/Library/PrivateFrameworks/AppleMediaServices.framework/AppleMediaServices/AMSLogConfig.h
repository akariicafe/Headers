@class NSString, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface AMSLogConfig : NSObject <NSCopying, NSMutableCopying>

@property (retain, nonatomic) NSObject<OS_os_log> *backingOSLogObject;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *propertyAccessQueue;
@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSString *subsystem;
@property (readonly, nonatomic) BOOL debugLogsEnabled;
@property (readonly, nonatomic) NSObject<OS_os_log> *OSLogObject;

+ (BOOL)_debugLogsEnabled:(id)a0;
+ (id)sharedPrivacyConfig;
+ (id)sharedAccountsMigrationConfigOversize;
+ (id)sharedFollowUpConfig;
+ (id)sharedAttestationConfig;
+ (id)sharedAnisetteConfig;
+ (id)sharedAccountsLogoutConfig;
+ (id)sharedBagConfig;
+ (id)sharedPurchaseConfig;
+ (id)sharedAccountsNotificationPluginConfig;
+ (id)sharedPushNotificationConfig;
+ (id)sharedUserNotificationConfig;
+ (id)sharedAccountsDaemonConfig;
+ (id)sharedKeychainConfig;
+ (id)sharedAccountsAuthenticationPluginConfig;
+ (id)sharedDeviceOffersConfig;
+ (id)sharedMediaServiceOwnerConfig;
+ (id)sharedRatingsProviderConfig;
+ (id)sharedAccountsMigrationConfig;
+ (id)sharedDataMigrationConfig;
+ (id)_createLogConfigWithBaseConfig:(id)a0 subystem:(id)a1 category:(id)a2;
+ (id)sharedMediaConfig;
+ (id)sharedConfig;
+ (id)sharedAccountsCookiesConfig;
+ (id)sharedAccountsStorefrontConfig;
+ (id)sharedAccountsMultiUserConfig;
+ (id)_createLogConfigWithSubsystem:(id)a0 category:(id)a1;
+ (id)sharedAccountsSyncPluginConfig;
+ (id)sharedMarketingItemConfig;
+ (id)sharedConfigOversize;
+ (id)sharedAccountsOversizeConfig;
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
