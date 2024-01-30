@class NSMutableDictionary, NSBundle, NSObject, TPSNotificationCache;
@protocol OS_dispatch_queue, TPSNotificationControllerDelegate;

@interface TPSNotificationController : NSObject

@property (nonatomic) long long notificationCount;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain, nonatomic) TPSNotificationCache *notificationCache;
@property (retain, nonatomic) NSMutableDictionary *assetURLSessionMap;
@property (retain, nonatomic) NSBundle *frameworkBundle;
@property (weak, nonatomic) id<TPSNotificationControllerDelegate> delegate;

+ (BOOL)isNotificationSettingDisabled;
+ (long long)remainingCountOfNotificationsUntilOptOut;

- (BOOL)isDocumentHintDisplayedOnOtherDevices:(id)a0;
- (id)init;
- (void)clearNotificationCount;
- (id)assetsConfigurationForDocument:(id)a0;
- (void).cxx_destruct;
- (id)updateNotificationCacheWithCollectionIdentifier:(id)a0 document:(id)a1 type:(unsigned long long)a2 extensionPayload:(id)a3;
- (id)tipDocumentToNotifyWithIdentifier:(id)a0 tipMap:(id)a1 tipDeliveryInfoMap:(id)a2 deliveryInfoMap:(id)a3 overridedOptOutContentOnly:(BOOL)a4;
- (id)notificationDeliveryInfoForIdentifier:(id)a0 documentDeliveryInfoMap:(id)a1 deliveryInfoMap:(id)a2;
- (BOOL)updateHintEligibleForTip:(id)a0 isValid:(BOOL)a1;
- (BOOL)isNotificationDeliveryInfoValid:(id)a0 identifier:(id)a1 overridedOptOutContentOnly:(BOOL)a2 ignoreSuppressContent:(BOOL)a3;
- (id)documentToNotifyForCollection:(id)a0 collectionDeliveryInfoMap:(id)a1 deliveryInfoMap:(id)a2 overridedOptOutContentOnly:(BOOL)a3;
- (void)showNotificationWithCompletionHandler:(id /* block */)a0;
- (void)updateArchiveCache;
- (void)clearAssetCaches;
- (BOOL)preconditionValidForIdentifier:(id)a0 documentDeliveryInfoMap:(id)a1 deliveryInfoMap:(id)a2 overridedOptOutContentOnly:(BOOL)a3 ignoreSuppressContent:(BOOL)a4;
- (BOOL)collectionEligibleForNotification:(id)a0;
- (void)updateDocumentToNotifyWithPreferredIdentifier:(id)a0 collectionOrder:(id)a1 collectionMap:(id)a2 collectionDeliveryInfoMap:(id)a3 tipMap:(id)a4 tipsDeliveryInfoMap:(id)a5 deliveryInfoMap:(id)a6 documentDictionaryMap:(id)a7 metadataDictionary:(id)a8 completionHandler:(id /* block */)a9;
- (id)documentToNotifyForTipsInCollection:(id)a0 tipMap:(id)a1 tipDeliveryInfoMap:(id)a2 deliveryInfoMap:(id)a3 overridedOptOutContentOnly:(BOOL)a4;
- (void)updateNotificationCount;
- (void)fetchNotificationAssetIfNeededCompletionHandler:(id /* block */)a0;
- (void)increaseUserNotificationCount;
- (void)clearNotificationCache;
- (id)cacheDirectoryCreateIfEmpty:(BOOL)a0;
- (id)copyFileURL:(id)a0 cachePath:(id)a1;
- (id)cacheAssetFileURLForDocument:(id)a0;
- (BOOL)canUpdateHintEligibilityForIdentifier:(id)a0;
- (void)removeAllNotifications;
- (id)cacheFilePathForFile:(id)a0;

@end
