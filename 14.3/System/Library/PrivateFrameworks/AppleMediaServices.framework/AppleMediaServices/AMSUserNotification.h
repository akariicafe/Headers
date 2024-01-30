@class NSDate, NSString, NSArray, NSURL, NSSet, NSMutableDictionary, NSDictionary, AMSBagKeySet, ACAccount, AMSUserNotificationAction;

@interface AMSUserNotification : NSObject <AMSBagConsumer>

@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;
@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;

@property (nonatomic) BOOL anonymizeMetrics;
@property (nonatomic) long long intent;
@property (retain, nonatomic) NSString *categoryIdentifier;
@property (nonatomic) BOOL shouldSuppressDefaultAction;
@property (retain, nonatomic) NSString *threadIdentifier;
@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSURL *artworkUrl;
@property (retain, nonatomic) NSURL *videoUrl;
@property (retain, nonatomic) NSArray *buttonActions;
@property (retain, nonatomic) NSString *centerBundleIdentifier;
@property (retain, nonatomic) AMSUserNotificationAction *defaultAction;
@property (nonatomic) BOOL explicitContent;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *informativeText;
@property (retain, nonatomic) NSString *logKey;
@property (retain, nonatomic) NSDictionary *metricsEvent;
@property (retain, nonatomic) NSDate *scheduledTime;
@property (retain, nonatomic) NSSet *subsections;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)addRequiredBagKeysToAggregator:(id)a0;
+ (id)createBagForSubProfile;
+ (id)notificationWithPayload:(id)a0 andConfig:(id)a1;
+ (BOOL)shouldDeleteNotificationForPayload:(id)a0 outIdentifier:(id *)a1 scheduledOnly:(BOOL *)a2;
+ (void)handleServiceExtensionNotificationRequest:(id)a0 bag:(id)a1 withContentHandler:(id /* block */)a2;
+ (id)_serverFriendlyFormatter;
+ (id)_identifierFromPayload:(id)a0;
+ (BOOL)_canParseNotificationWithIdentifier:(id)a0 userInfo:(id)a1;
+ (void)openAppUsingBundleIdentifier:(id)a0;
+ (long long)explicitEnabledForCenterBundleID:(id)a0;
+ (id)_downloadAssetAtUrl:(id)a0 withIdentifier:(id)a1 logKey:(id)a2 bag:(id)a3;
+ (id)handleNotificationResponse:(id)a0 bag:(id)a1;
+ (id)_cachedImagePathForIdentifier:(id)a0 assetURL:(id)a1;
+ (id)handleNotificationResponse:(id)a0 bagContract:(id)a1;
+ (id)notificationCenter:(id)a0 didChangeSettings:(id)a1 bag:(id)a2;
+ (id)notificationCenter:(id)a0 openSettingsForNotification:(id)a1 bag:(id)a2;
+ (BOOL)shouldHandleServiceExtensionNotificationRequest:(id)a0;
+ (BOOL)shouldHandleNotificationResponse:(id)a0;

- (id)initWithTitle:(id)a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 intent:(long long)a1;
- (id)initWithPayload:(id)a0 andConfig:(id)a1;
- (void)addButtonAction:(id)a0;
- (id)initWithUNNotification:(id)a0;
- (id)createUNNotificationContent;
- (id)createUNNotificationRequestFromContent:(id)a0;
- (id)_generatePayload;
- (id)determineSelectedActionFromResponse:(id)a0 error:(id *)a1;
- (id)handleSelectedButton:(id)a0 bag:(id)a1;
- (id)handleSelectedButton:(id)a0 bagContract:(id)a1;
- (id)createUNNotificationActions;
- (id)initWithNSUserNotification:(id)a0;
- (id)createNSUserNotification;

@end
