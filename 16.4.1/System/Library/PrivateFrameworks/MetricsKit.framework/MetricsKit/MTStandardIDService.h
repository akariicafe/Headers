@class MTIDCache, NSString, NSMutableDictionary, MTInterprocessChangeNotifier, NSNumber, MTPromise, MTIDConfig;
@protocol MTIDSecretStore;

@interface MTStandardIDService : NSObject <MTIDService>

@property (class, copy, nonatomic) NSString *localCachePath;

@property (retain, nonatomic) MTPromise *configDictPromise;
@property (retain, nonatomic) MTIDConfig *cachedConfig;
@property (retain, nonatomic) NSMutableDictionary *associatedObjects;
@property (retain, nonatomic) MTIDCache *cache;
@property (retain, nonatomic) MTInterprocessChangeNotifier *accountChanged;
@property (retain, nonatomic) id<MTIDSecretStore> secretStore;
@property (retain, nonatomic) NSNumber *defaultDSID;
@property (retain, nonatomic) NSNumber *dsId;
@property (copy, nonatomic) NSString *applicationBundleIdentifierOverrideForNetworkAttribution;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isTinkerPaired;
+ (void)registerInterprocessChangeNotifier:(id)a0;
+ (void)triggerInterprocessChangeNotifier:(id)a0;
+ (id)writeDebugData:(id)a0 toFileWithNameFormat:(id)a1;

- (id)sync;
- (id)initWithConfigDictionary:(id)a0;
- (void)setConfig:(id)a0;
- (void)dealloc;
- (void)handleApplicationStateChange:(id)a0;
- (id)init;
- (id)sync:(id)a0;
- (void).cxx_destruct;
- (id)IDFieldsForTopic:(id)a0 options:(id)a1;
- (id)initWithAMSBag:(id)a0;
- (void)performMaintenanceWithCompletion:(id /* block */)a0;
- (void)queryIDForTopic:(id)a0 type:(long long)a1 options:(id)a2 completion:(id /* block */)a3;
- (id)resetIDForTopics:(id)a0 options:(id)a1;
- (id)secretValueForNamespace:(id)a0 options:(id)a1;
- (void)IDFieldsForTopic:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)resetIDForTopics:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (id)IDInfoForNamespace:(id)a0 options:(id)a1 fromConfig:(id)a2;
- (id)IDsForNamespaces:(id)a0 options:(id)a1 fromConfig:(id)a2;
- (id)IDForTopic:(id)a0 type:(long long)a1 options:(id)a2;
- (void)_clearLocalData;
- (void)_getIDs;
- (void)_getConfig;
- (void)_getSecrets;
- (void)_resetIDs;
- (id)configPromise;
- (id)filledOptions:(id)a0;
- (id)generateIDInfo:(id)a0 secret:(id)a1 dsId:(id)a2 correlationIDs:(id)a3;
- (void)handleAccountNotification;
- (void)handleRecordNotification;
- (void)handleResetNotification:(id)a0;
- (id)initWithConfigDictPromise:(id)a0 bag:(id)a1;
- (id)initWithConfigPromise:(id)a0;
- (void)maybeSubscribeToDarwinNotifications;

@end
