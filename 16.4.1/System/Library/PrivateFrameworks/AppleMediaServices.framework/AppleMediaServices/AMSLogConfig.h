@class NSString, NSObject;
@protocol OS_os_log;

@interface AMSLogConfig : NSObject <NSCopying, NSMutableCopying>

@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSString *subsystem;
@property (retain, nonatomic) NSObject<OS_os_log> *OSLogObject;
@property (readonly, nonatomic) BOOL debugLogsEnabled;

+ (BOOL)_debugLogsEnabled:(id)a0;
+ (id)sharedMetricsConfig;
+ (id)sharedMarketingItemConfig;
+ (id)sharedPrivacyConfig;
+ (id)sharedBagConfig;
+ (id)sharedAccountsMigrationConfig;
+ (id)sharedAccountsNotificationPluginConfig;
+ (id)sharedServerDataCacheConfig;
+ (id)sharedAnisetteConfig;
+ (id)sharedAttestationConfig;
+ (id)sharedAccountsMigrationConfigOversize;
+ (id)sharedWebUIConfig;
+ (id)sharedAccountsConfig;
+ (id)sharedMediaServiceOwnerConfig;
+ (id)sharedDeviceOffersConfig;
+ (id)sharedMediaConfig;
+ (id)sharedMessagingUIConfig;
+ (id)sharedFollowUpConfig;
+ (id)sharedConfigOversize;
+ (id)sharedAccountsCookiesConfig;
+ (id)sharedRatingsProviderConfig;
+ (id)sharedPurchaseConfig;
+ (id)sharedAccountsDaemonConfig;
+ (id)sharedAccountsOversizeConfig;
+ (id)sharedDataMigrationConfig;
+ (id)sharedAccountsStorefrontConfig;
+ (id)sharedPushNotificationConfig;
+ (id)sharedPromiseConfig;
+ (id)sharedAccountsAuthenticationPluginConfig;
+ (id)sharedAccountsLogoutConfig;
+ (id)sharedConfig;
+ (id)sharedTreatmentsConfig;
+ (id)sharedBagCacheConfig;
+ (id)sharedAccountsMultiUserConfig;
+ (id)sharedKeychainConfig;
+ (id)sharedUserNotificationConfig;
+ (id)sharedAccountsSyncPluginConfig;
+ (id)sharedEngagementConfig;
+ (id)sharedBiometricsConfig;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCategory:(id)a0 backingLog:(id)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
