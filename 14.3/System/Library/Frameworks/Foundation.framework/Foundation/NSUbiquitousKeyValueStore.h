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

+ (void)_synchronizeStoresForced:(BOOL)a0;
+ (void)_appWillActivate;
+ (id)additionalStoreWithIdentifier:(id)a0;
+ (void)_appWillDeactivate;

- (void)setDouble:(double)a0 forKey:(id)a1;
- (id)objectForKey:(id)a0;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (void)registerDefaultValues:(id)a0;
- (void)synchronizeWithCompletionHandler:(id /* block */)a0;
- (id)initWithBundleIdentifier:(id)a0 storeIdentifier:(id)a1 additionalStore:(BOOL)a2 storeType:(long long)a3;
- (void)setArray:(id)a0 forKey:(id)a1;
- (unsigned long long)maximumKeyCount;
- (BOOL)_postDidChangeNotificationExternalChanges:(id)a0 sourceChangeCount:(long long)a1;
- (id)_initWithStoreIdentifier:(id)a0 usingEndToEndEncryption:(BOOL)a1;
- (id)initWithBundleIdentifier:(id)a0 storeIdentifier:(id)a1 additionalStore:(BOOL)a2;
- (id)init;
- (BOOL)_synchronizeForced:(BOOL)a0;
- (unsigned long long)maximumKeyLength;
- (id)initWithBundleIdentifier:(id)a0 storeIdentifier:(id)a1;
- (void)_sourceDidChangePassthroughNotification:(id)a0;
- (void)dealloc;
- (id)stringForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (BOOL)_synchronizeForced:(BOOL)a0 notificationQueue:(id)a1;
- (unsigned long long)maximumTotalDataLength;
- (id)dataForKey:(id)a0;
- (void)setDictionary:(id)a0 forKey:(id)a1;
- (void)setData:(id)a0 forKey:(id)a1;
- (void)_adjustTimer:(id)a0;
- (void)setString:(id)a0 forKey:(id)a1;
- (BOOL)boolForKey:(id)a0;
- (void)_scheduleRemoteSynchronization;
- (BOOL)synchronize;
- (void)_useSourceAsyncWithBlock:(id /* block */)a0;
- (int)_storeChangeFromSourceChange:(int)a0;
- (BOOL)synchronizeWithSourceForced:(BOOL)a0;
- (void)_setShouldAvoidSynchronize:(BOOL)a0;
- (id)initWithBundleIdentifier:(id)a0;
- (long long)longLongForKey:(id)a0;
- (void)_syncConcurrentlyForced:(BOOL)a0;
- (unsigned long long)maximumDataLengthPerKey;
- (void)_useSourceSyncWithBlock:(id /* block */)a0;
- (id)_remotePreferencesSource;
- (id)dictionaryForKey:(id)a0;
- (BOOL)_hasPendingSynchronize;
- (void)_setHasPendingSynchronize:(BOOL)a0;
- (void)_configurationDidChange;
- (void)_adjustTimerForAutosync;
- (void)_unregisterFromDaemon;
- (BOOL)_shouldAvoidSynchronize;
- (void)_syncConcurrently;
- (void)_sourceDidChange:(id)a0;
- (void)_registerToDaemon;
- (void)_sendPingToDaemon;
- (void)_pleaseSynchronize:(id)a0;
- (void)setLongLong:(long long)a0 forKey:(id)a1;
- (void)_rethrowException:(id)a0;
- (id)arrayForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (double)doubleForKey:(id)a0;

@end
