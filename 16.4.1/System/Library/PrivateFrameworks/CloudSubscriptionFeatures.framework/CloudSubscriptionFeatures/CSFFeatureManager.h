@interface CSFFeatureManager : NSObject

+ (void)removeFeatureChangeObserverWithToken:(id)a0;
+ (void)requestGeoClassificationForFeatureID:(id)a0 bundleID:(id)a1 ignoreCache:(BOOL)a2 completion:(id /* block */)a3;
+ (void)requestFeatureWithId:(id)a0 completion:(id /* block */)a1;
+ (void)processPushNotificationWithDictionary:(id)a0;
+ (void)processPushNotificationDictionary:(id)a0;
+ (void)clearFeatureCacheAndNotify;
+ (void)clearCacheAndNotify;
+ (void)unregisterForFeatureChangeNotificationsUsingObserver:(id)a0;
+ (void)requestGeoClassificationForFeatureID:(id)a0 bundleID:(id)a1 altDSID:(id)a2 ignoreCache:(BOOL)a3 completion:(id /* block */)a4;
+ (BOOL)isCloudSubscriber;
+ (void)getFeatureEligibilityForFeatureWithId:(id)a0 bundleId:(id)a1 completion:(id /* block */)a2;
+ (void)refreshGeoclassificationCache;
+ (id)registerForFeatureChangeNotificationsUsingBlock:(id /* block */)a0;
+ (void)refreshAllGeoclassificationCache;
+ (id)addFeatureChangeObserverWithChange:(id /* block */)a0;

@end
