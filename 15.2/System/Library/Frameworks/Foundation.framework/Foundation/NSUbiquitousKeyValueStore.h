@class NSDictionary;

@interface NSUbiquitousKeyValueStore : NSObject {
    id _private1;
    id _private2;
    id _private3;
    void *_private4;
    void *_reserved[3];
    int _daemonWakeToken;
}

@property (class, readonly) NSUbiquitousKeyValueStore *defaultStore;

@property (readonly, copy) NSDictionary *dictionaryRepresentation;

+ (void)_appWillActivate;
+ (void)_synchronizeStoresForced:(BOOL)a0;
+ (void)_appWillDeactivate;
+ (id)additionalStoreWithIdentifier:(id)a0;

- (id)dataForKey:(id)a0;
- (unsigned long long)maximumTotalDataLength;
- (unsigned long long)maximumKeyLength;
- (void)setArray:(id)a0 forKey:(id)a1;
- (unsigned long long)maximumDataLengthPerKey;
- (unsigned long long)maximumKeyCount;
- (BOOL)_synchronizeForced:(BOOL)a0;
- (void)setDouble:(double)a0 forKey:(id)a1;
- (id)initWithBundleIdentifier:(id)a0 storeIdentifier:(id)a1 additionalStore:(BOOL)a2 storeType:(long long)a3;
- (id)initWithBundleIdentifier:(id)a0 storeIdentifier:(id)a1 additionalStore:(BOOL)a2;
- (BOOL)_postDidChangeNotificationExternalChanges:(id)a0 sourceChangeCount:(long long)a1;
- (void)removeObjectForKey:(id)a0;
- (id)initWithBundleIdentifier:(id)a0;
- (id)_initWithStoreIdentifier:(id)a0 usingEndToEndEncryption:(BOOL)a1;
- (id)dictionaryForKey:(id)a0;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (id)initWithBundleIdentifier:(id)a0 storeIdentifier:(id)a1;
- (void)_sourceDidChangePassthroughNotification:(id)a0;
- (void)setData:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1;
- (BOOL)_synchronizeForced:(BOOL)a0 notificationQueue:(id)a1;
- (void)_configurationDidChange;
- (void)setString:(id)a0 forKey:(id)a1;
- (void)_adjustTimer:(id)a0;
- (id)arrayForKey:(id)a0;
- (void)_scheduleRemoteSynchronization;
- (void)_setHasPendingSynchronize:(BOOL)a0;
- (id)stringForKey:(id)a0;
- (int)_storeChangeFromSourceChange:(int)a0;
- (long long)longLongForKey:(id)a0;
- (void)_syncConcurrentlyForced:(BOOL)a0;
- (void)_useSourceSyncWithBlock:(id /* block */)a0;
- (id)_remotePreferencesSource;
- (void)_useSourceAsyncWithBlock:(id /* block */)a0;
- (double)doubleForKey:(id)a0;
- (void)_unregisterFromDaemon;
- (void)_syncConcurrently;
- (void)_sourceDidChange:(id)a0;
- (BOOL)_hasPendingSynchronize;
- (void)_sendPingToDaemon;
- (void)_setShouldAvoidSynchronize:(BOOL)a0;
- (BOOL)synchronizeWithSourceForced:(BOOL)a0;
- (void)_rethrowException:(id)a0;
- (id)init;
- (void)_adjustTimerForAutosync;
- (BOOL)_shouldAvoidSynchronize;
- (void)_pleaseSynchronize:(id)a0;
- (void)setLongLong:(long long)a0 forKey:(id)a1;
- (id)objectForKey:(id)a0;
- (void)registerDefaultValues:(id)a0;
- (void)setDictionary:(id)a0 forKey:(id)a1;
- (void)_registerToDaemon;
- (BOOL)synchronize;
- (void)dealloc;
- (BOOL)boolForKey:(id)a0;
- (void)synchronizeWithCompletionHandler:(id /* block */)a0;

@end
