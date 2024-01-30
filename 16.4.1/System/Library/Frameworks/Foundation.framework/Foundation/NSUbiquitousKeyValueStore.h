@class NSObject, NSMutableDictionary, NSDictionary, NSTimer, SYDRemotePreferencesSource;
@protocol OS_dispatch_queue;

@interface NSUbiquitousKeyValueStore : NSObject {
    SYDRemotePreferencesSource *_source;
    NSTimer *_timer;
    NSMutableDictionary *_values;
    NSObject<OS_dispatch_queue> *_queue;
    int _daemonWakeToken;
}

@property (class, readonly) NSUbiquitousKeyValueStore *defaultStore;

@property (readonly, copy) NSDictionary *dictionaryRepresentation;

+ (void)_appWillActivate;
+ (void)_appWillDeactivate;
+ (void)_synchronizeStoresForced:(BOOL)a0;
+ (id)additionalStoreWithIdentifier:(id)a0;

- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setData:(id)a0 forKey:(id)a1;
- (unsigned long long)maximumTotalDataLength;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (id)dataForKey:(id)a0;
- (unsigned long long)maximumKeyCount;
- (unsigned long long)maximumKeyLength;
- (BOOL)_synchronizeForced:(BOOL)a0;
- (void)synchronizeWithCompletionHandler:(id /* block */)a0;
- (void)setArray:(id)a0 forKey:(id)a1;
- (void)setDictionary:(id)a0 forKey:(id)a1;
- (BOOL)synchronize;
- (void)setDouble:(double)a0 forKey:(id)a1;
- (id)arrayForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (void)setString:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (BOOL)boolForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (double)doubleForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (void)_configurationDidChange;
- (void)dealloc;
- (id)initWithStoreIdentifier:(id)a0 type:(long long)a1;
- (void)_registerToDaemon;
- (id)init;
- (void)registerDefaultValues:(id)a0;
- (id)initWithBundleIdentifier:(id)a0;
- (unsigned long long)maximumDataLengthPerKey;
- (long long)longLongForKey:(id)a0;
- (void)_adjustTimer:(id)a0;
- (void)_adjustTimerForAutosync;
- (BOOL)_hasPendingSynchronize;
- (id)_initWithStoreIdentifier:(id)a0 usingEndToEndEncryption:(BOOL)a1;
- (void)_pleaseSynchronize:(id)a0;
- (BOOL)_postDidChangeNotificationExternalChanges:(id)a0 sourceChangeCount:(long long)a1;
- (id)_remotePreferencesSource;
- (void)_rethrowException:(id)a0;
- (void)_scheduleRemoteSynchronization;
- (void)_sendPingToDaemon;
- (void)_setHasPendingSynchronize:(BOOL)a0;
- (void)_setShouldAvoidSynchronize:(BOOL)a0;
- (BOOL)_shouldAvoidSynchronize;
- (void)_sourceDidChange:(id)a0;
- (void)_sourceDidChangePassthroughNotification:(id)a0;
- (int)_storeChangeFromSourceChange:(int)a0;
- (void)_syncConcurrently;
- (void)_syncConcurrentlyForced:(BOOL)a0;
- (BOOL)_synchronizeForced:(BOOL)a0 notificationQueue:(id)a1;
- (void)_unregisterFromDaemon;
- (void)_useSourceAsyncWithBlock:(id /* block */)a0;
- (void)_useSourceSyncWithBlock:(id /* block */)a0;
- (id)initWithBundleIdentifier:(id)a0 storeIdentifier:(id)a1;
- (id)initWithBundleIdentifier:(id)a0 storeIdentifier:(id)a1 additionalStore:(BOOL)a2;
- (id)initWithBundleIdentifier:(id)a0 storeIdentifier:(id)a1 additionalStore:(BOOL)a2 storeType:(long long)a3;
- (void)setLongLong:(long long)a0 forKey:(id)a1;
- (BOOL)synchronizeWithSourceForced:(BOOL)a0;

@end
