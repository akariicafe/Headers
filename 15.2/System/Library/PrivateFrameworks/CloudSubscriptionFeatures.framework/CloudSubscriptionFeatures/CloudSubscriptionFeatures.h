@interface CloudSubscriptionFeatures : NSObject

+ (void)refreshGeoclassificationCache;
+ (void)refreshAllGeoclassificationCache;
+ (void)requestGeoClassificationForFeatureID:(id)a0 bundleID:(id)a1 ignoreCache:(BOOL)a2 completion:(id /* block */)a3;
+ (void)removeFeatureChangeObserverWithToken:(id)a0;
+ (void)processPushNotificationDictionary:(id)a0;
+ (void)getFeatureEligibilityForFeatureWithId:(id)a0 bundleId:(id)a1 completion:(id /* block */)a2;
+ (void)processPushNotificationWithDictionary:(id)a0;
+ (void)clearFeatureCacheAndNotify;
+ (id)addFeatureChangeObserverWithChange:(id /* block */)a0;
+ (void)clearCacheAndNotify;
+ (id)registerForFeatureChangeNotificationsUsingBlock:(id /* block */)a0;
+ (void)unregisterForFeatureChangeNotificationsUsingObserver:(id)a0;
+ (void)requestFeatureWithId:(id)a0 completion:(id /* block */)a1;
+ (void)requestGeoClassificationForFeatureID:(id)a0 bundleID:(id)a1 altDSID:(id)a2 ignoreCache:(BOOL)a3 completion:(id /* block */)a4;

@end
