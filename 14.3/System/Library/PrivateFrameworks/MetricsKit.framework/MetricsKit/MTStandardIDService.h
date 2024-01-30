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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)triggerInterprocessChangeNotifier:(id)a0;
+ (void)registerInterprocessChangeNotifier:(id)a0;
+ (id)writeDebugData:(id)a0 toFileWithNameFormat:(id)a1;

- (id)initWithConfigDictionary:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setConfig:(id)a0;
- (void)handleApplicationStateChange:(id)a0;
- (void)_getIDs;
- (id)initWithAMSBag:(id)a0;
- (void)performMaintenanceWithCompletion:(id /* block */)a0;
- (id)initWithConfigPromise:(id)a0;
- (void)handleResetNotification:(id)a0;
- (void)handleAccountNotification;
- (void)maybeSubscribeToDarwinNotifications;
- (id)IDFieldsForTopic:(id)a0 options:(id)a1;
- (id)resetIDForTopics:(id)a0 options:(id)a1;
- (id)filledOptions:(id)a0;
- (id)IDInfoForNamespace:(id)a0 options:(id)a1 fromConfig:(id)a2;
- (id)IDForTopic:(id)a0 type:(long long)a1 options:(id)a2;
- (id)IDsForNamespaces:(id)a0 options:(id)a1 fromConfig:(id)a2;
- (id)generateIDInfo:(id)a0 secret:(id)a1 dsId:(id)a2 correlationIDs:(id)a3;
- (void)IDFieldsForTopic:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)resetIDForTopics:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)queryIDForTopic:(id)a0 type:(long long)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)handleRecordNotification;
- (void)_clearLocalData;
- (void)_resetIDs;
- (void)_getSecrets;
- (void)_getConfig;

@end
