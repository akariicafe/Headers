@interface AMDDemoAppSupport : NSObject

+ (void)setUserId:(id)a0;
+ (id)fetchEvents:(id *)a0;
+ (void)showAlert:(id)a0;
+ (id)fetchTasteProfile:(id *)a0;
+ (void)saveTasteProfileEntriesFromDict:(id)a0 inDomain:(id)a1 forSource:(id)a2 error:(id *)a3;
+ (void)setStorefrontId:(id)a0;
+ (id)getUserId;
+ (void)saveEvent:(id)a0 error:(id *)a1;
+ (id)getUrlBag;
+ (double)machGetClockSecs;
+ (id)deleteAllHistory:(id *)a0;
+ (id)getDomain;
+ (void)saveDescriptors:(id)a0 forDomain:(long long)a1 error:(id *)a2;
+ (void)refreshOnDeviceTasteProfile:(id)a0 withUserId:(id)a1 andStoreFrontId:(unsigned int)a2 error:(id *)a3;
+ (BOOL)updateUrlBagUsingHost:(id)a0;
+ (id)getCurrentHost;
+ (id)getStorefrontId;
+ (id)getHistory:(id *)a0;
+ (id)getAppSegments:(id *)a0;
+ (id)deleteEvents:(id *)a0;
+ (id)fetchModelUrls:(id *)a0;
+ (void)initPersistentContainer;
+ (BOOL)initEnv:(id)a0 withDomain:(id)a1 userId:(id)a2 andStoreFrontId:(id)a3;
+ (id)getEnvironments;
+ (id)getEnvHosts;
+ (void)deleteAllUserData;
+ (void)flushCoreData;
+ (unsigned long long)getCountForFeature:(id)a0 InDomain:(id)a1;
+ (long long)getTasteProfileUpdateTimeForSource:(id)a0 inDomain:(id)a1;
+ (BOOL)refreshServerSideTasteProfileForUser:(id)a0 inStorefront:(id)a1 withFeatureIds:(id)a2 withDelegate:(id)a3;

@end
