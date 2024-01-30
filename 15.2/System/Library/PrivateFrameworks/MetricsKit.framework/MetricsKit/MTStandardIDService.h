@class NSNumber, NSString, NSMutableDictionary, MTInterprocessChangeNotifier, MTPromise, MTIDCache;
@protocol MTIDSecretStore;

@interface MTStandardIDService : NSObject <MTIDService>

@property (class, copy, nonatomic) NSString *localCachePath;

@property (retain, nonatomic) MTPromise *configPromise;
@property (retain, nonatomic) MTIDCache *cache;
@property (retain, nonatomic) MTInterprocessChangeNotifier *accountChanged;
@property (retain, nonatomic) id<MTIDSecretStore> secretStore;
@property (retain, nonatomic) NSNumber *defaultDSID;
@property (retain, nonatomic) NSMutableDictionary *associatedObjects;
@property (retain, nonatomic) NSNumber *dsId;
@property (copy, nonatomic) NSString *applicationBundleIdentifierOverrideForNetworkAttribution;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)writeDebugData:(id)a0 toFileWithNameFormat:(id)a1;
+ (void)triggerInterprocessChangeNotifier:(id)a0;
+ (BOOL)isTinkerPaired;
+ (void)registerInterprocessChangeNotifier:(id)a0;

- (id)generateIDInfo:(id)a0 secret:(id)a1 dsId:(id)a2 correlationIDs:(id)a3;
- (id)initWithConfigDictionary:(id)a0;
- (void)handleApplicationStateChange:(id)a0;
- (void)setConfig:(id)a0;
- (id)filledOptions:(id)a0;
- (id)initWithConfigPromise:(id)a0;
- (void)performMaintenanceWithCompletion:(id /* block */)a0;
- (id)IDForTopic:(id)a0 type:(long long)a1 options:(id)a2;
- (id)IDsForNamespaces:(id)a0 options:(id)a1 fromConfig:(id)a2;
- (void)resetIDForTopics:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)_getIDs;
- (void)_resetIDs;
- (id)init;
- (void)queryIDForTopic:(id)a0 type:(long long)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)maybeSubscribeToDarwinNotifications;
- (id)IDInfoForNamespace:(id)a0 options:(id)a1 fromConfig:(id)a2;
- (id)IDFieldsForTopic:(id)a0 options:(id)a1;
- (void)handleResetNotification:(id)a0;
- (void)_clearLocalData;
- (void)handleRecordNotification;
- (void)handleAccountNotification;
- (id)initWithAMSBag:(id)a0;
- (void)dealloc;
- (void)_getSecrets;
- (void)IDFieldsForTopic:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (id)resetIDForTopics:(id)a0 options:(id)a1;
- (void)_getConfig;

@end
