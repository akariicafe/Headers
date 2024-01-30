@class TPSLocalNotificationController, NSMutableDictionary, NSBundle, NSObject, TPSNotificationCache;
@protocol OS_dispatch_queue, TPSNotificationControllerDelegate;

@interface TPSNotificationController : NSObject

@property (nonatomic) long long notificationCount;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain, nonatomic) TPSNotificationCache *notificationCache;
@property (retain, nonatomic) NSMutableDictionary *assetURLSessionMap;
@property (retain, nonatomic) TPSLocalNotificationController *localNotificationController;
@property (retain, nonatomic) NSBundle *frameworkBundle;
@property (weak, nonatomic) id<TPSNotificationControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL validNotificationInterval;
@property (readonly, nonatomic, getter=isNotificationSettingValid) BOOL notificationSettingValid;

+ (double)standardNotificationInterval;
+ (BOOL)supportsNotification;
+ (long long)remainingCountOfNotificationsUntilOptOut;
+ (BOOL)respectsOptout;
+ (id)cacheDirectoryCreateIfEmpty:(BOOL)a0;
+ (BOOL)supportsExtension;
+ (BOOL)alwaysDisplayCollectionIcon;
+ (BOOL)supportsRemoteIcon;
+ (BOOL)supportsWelcomeNotification;
+ (id)displayDarwinNotificationKey;
+ (void)removeAssetCacheDirectory;
+ (void)removeNotificationCache;

- (void)updateLastNotificationDate;
- (void)increaseUserNotificationCount;
- (id)documentToNotifyForTipsInCollection:(id)a0 tipMap:(id)a1 tipDeliveryInfoMap:(id)a2 deliveryInfoMap:(id)a3 overridedOptOutContentOnly:(BOOL)a4;
- (id)notificationDeliveryInfoForIdentifier:(id)a0 documentDeliveryInfoMap:(id)a1 deliveryInfoMap:(id)a2;
- (BOOL)isDocumentHintDisplayedOnOtherDevices:(id)a0;
- (void)updateNotificationCount;
- (void)updateDocumentToNotifyWithPreferredIdentifiers:(id)a0 collectionOrder:(id)a1 collectionMap:(id)a2 collectionDeliveryInfoMap:(id)a3 tipMap:(id)a4 tipsDeliveryInfoMap:(id)a5 deliveryInfoMap:(id)a6 documentDictionaryMap:(id)a7 metadataDictionary:(id)a8 completionHandler:(id /* block */)a9;
- (void)removeAllNotifications;
- (BOOL)shouldDisplayCollectionIcon;
- (BOOL)preconditionValidForIdentifier:(id)a0 documentDeliveryInfoMap:(id)a1 deliveryInfoMap:(id)a2 overridedOptOutContentOnly:(BOOL)a3 ignoreSuppressContent:(BOOL)a4;
- (void)clearNotificationCache;
- (id)copyFileURL:(id)a0 cachePath:(id)a1;
- (BOOL)validNotificationInterval;
- (id)documentToNotifyForCollection:(id)a0 collectionDeliveryInfoMap:(id)a1 deliveryInfoMap:(id)a2 overridedOptOutContentOnly:(BOOL)a3;
- (id)cacheAssetFileURLForDocument:(id)a0;
- (void)updateArchiveCache;
- (BOOL)canUpdateHintEligibilityForIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)tipDocumentToNotifyWithIdentifier:(id)a0 tipMap:(id)a1 tipDeliveryInfoMap:(id)a2 deliveryInfoMap:(id)a3 overridedOptOutContentOnly:(BOOL)a4;
- (id)init;
- (id)cacheFilePathForFile:(id)a0;
- (BOOL)collectionEligibleForNotification:(id)a0;
- (id)assetsConfigurationForDocument:(id)a0;
- (BOOL)isNotificationDeliveryInfoValid:(id)a0 identifier:(id)a1 overridedOptOutContentOnly:(BOOL)a2 ignoreSuppressContent:(BOOL)a3;
- (void)clearNotificationCount;
- (void)fetchNotificationAssetIfNeededCompletionHandler:(id /* block */)a0;
- (void)removeNotificationWithIdentifier:(id)a0;
- (void)showNotificationWithCompletionHandler:(id /* block */)a0;
- (id)updateNotificationCacheWithCollectionIdentifier:(id)a0 document:(id)a1 type:(unsigned long long)a2 extensionPayload:(id)a3;
- (BOOL)updateHintEligibleForTip:(id)a0 isValid:(BOOL)a1;

@end
