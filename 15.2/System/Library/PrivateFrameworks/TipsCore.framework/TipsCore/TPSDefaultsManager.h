@interface TPSDefaultsManager : NSObject

+ (id)deviceModel;
+ (id)contextualEventDaysSinceLastMajorUpdateInSeconds;
+ (id)notificationDocument;
+ (double)hintMaxDurationTimeInterval;
+ (BOOL)resetDataCache;
+ (BOOL)showPagingLabelOnLongPress;
+ (BOOL)ignoreCloud;
+ (id)platform;
+ (id)objectDefaultsForKey:(id)a0;
+ (id)assetRequestHostURL;
+ (double)welcomeNotificationDelay;
+ (id)minVersionForSpatialAudio;
+ (id)assetURL;
+ (id)widgetTip;
+ (id)requestHostURL;
+ (double)discoverabilitySuppressionInterval;
+ (BOOL)ignoreTargetingValidator;
+ (BOOL)resetDaemonData;
+ (double)welcomeNotificationGracePeriod;
+ (BOOL)boolDefaultsForKey:(id)a0;
+ (id)standardNotificationInterval;
+ (id)requestVersion;
+ (BOOL)checkOfflineContentOnLaunch;
+ (BOOL)allowsHardwareWelcomeNotification;
+ (id)requestLanguage;
+ (id)holdoutGroup;
+ (id)requestURL;
+ (id)hintActionText;
+ (long long)triggerMinObservationCount;
+ (BOOL)showAllCollections;
+ (id)hintTitle;
+ (id)requestPlatform;
+ (id)requestInterval;
+ (double)timeIntervalDefaultsForKey:(id)a0;
+ (id)hintActionURL;
+ (id)hintBody;
+ (id)hintMonitoringEvents;
+ (id)requestModel;
+ (id)displayContentForContext;
+ (double)contextualEventLookBackDaysInSeconds;
+ (id)hintCustomizationID;
+ (BOOL)showCollectionIntro;
+ (id)featuredCollection;
+ (BOOL)suppressTipKitContent;
+ (long long)crunchingIntervalInDays;
+ (long long)integerDefaultsForKey:(id)a0;
+ (double)sessionTimeoutIntervalInSeconds;
+ (id)lastMajorVersionUpdateDate;
+ (BOOL)suppressNotifications;
+ (long long)discoverabilityOverrideMaxDisplayCount;
+ (id)assetRatioIdentifier;

@end
