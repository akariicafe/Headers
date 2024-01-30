@interface TPSDefaultsManager : NSObject

+ (id)assetRequestHostURL;
+ (id)hintCustomizationID;
+ (BOOL)showCollectionIntro;
+ (id)deviceModel;
+ (id)displayContentForContext;
+ (id)featuredCollection;
+ (BOOL)ignoreCloud;
+ (long long)integerDefaultsForKey:(id)a0;
+ (BOOL)boolDefaultsForKey:(id)a0;
+ (id)requestVersion;
+ (double)timeIntervalDefaultsForKey:(id)a0;
+ (double)hintMaxDurationTimeInterval;
+ (BOOL)allowsHardwareWelcomeNotification;
+ (id)hintDismissalRules;
+ (id)requestLanguage;
+ (BOOL)suppressNotifications;
+ (long long)discoverabilityOverrideMaxDisplayCount;
+ (id)hintTitle;
+ (id)requestURL;
+ (BOOL)resetDaemonData;
+ (double)discoverabilitySuppressionInterval;
+ (id)requestHostURL;
+ (double)welcomeNotificationDelay;
+ (BOOL)ignoreTargetingValidator;
+ (id)minVersionForSpatialAudio;
+ (id)notificationDocument;
+ (id)hintActionURL;
+ (id)hintActionText;
+ (BOOL)suppressTipKitContent;
+ (id)hintBody;
+ (id)holdoutGroup;
+ (id)assetURL;
+ (id)objectDefaultsForKey:(id)a0;
+ (double)requestInterval;
+ (double)welcomeNotificationGracePeriod;
+ (BOOL)resetDataCache;
+ (id)widgetTip;
+ (BOOL)showPagingLabelOnLongPress;
+ (id)assetRatioIdentifier;
+ (BOOL)showAllCollections;
+ (long long)triggerMinObservationCount;
+ (id)requestModel;

@end
