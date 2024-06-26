@class NSCache, NSLock, NSXPCConnection, NSString, NSObject, SYDStoreConfiguration;
@protocol OS_dispatch_queue;

@interface SYDClientToDaemonConnection : SYDRemotePreferencesSource <SYDClientProtocol>

@property (retain, nonatomic) SYDStoreConfiguration *storeConfiguration;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *analyticsQueue;
@property (nonatomic) int daemonWakeNotifyToken;
@property (nonatomic) BOOL didLogFaultForEntitlements;
@property BOOL needsChangeDictionaryFromDaemon;
@property (retain, nonatomic) NSCache *cachedObjects;
@property (retain, nonatomic) NSLock *cacheLock;
@property (readonly, nonatomic) BOOL isSyncingWithCloud;
@property unsigned long long syncingWithCloudCounter;
@property (readonly, nonatomic) NSString *storeIdentifier;
@property (readonly, nonatomic) long long storeType;

+ (void)setHasInitializedStoreWithIdentifier:(id)a0;
+ (id)daemonProtocolInterface;
+ (id)newXPCConnection;
+ (void)setCloudSyncUserDefaultEnabled:(BOOL)a0 storeIdentifier:(id)a1;
+ (id)allStoreIdentifiersWithError:(id *)a0;
+ (BOOL)isCloudSyncUserDefaultEnabledForStoreIdentifier:(id)a0;
+ (BOOL)hasInitializedStoreWithIdentifier:(id)a0;
+ (void)setShouldSyncOnFirstInitializationOverride:(id)a0;
+ (void)processAccountChangesWithCompletionHandler:(id /* block */)a0;
+ (id)disgustingUglyHardcodedKnownStoreIdentifierForApplicationIdentifier:(id)a0;
+ (id)shouldSyncOnFirstInitializationOverride;
+ (id)clientProtocolInterface;
+ (void)synchronizeStoresWithIdentifiers:(id)a0 type:(long long)a1 completionHandler:(id /* block */)a2;
+ (id)defaultStoreIdentifierForCurrentProcessWithApplicationIdentifier:(id)a0;

- (void)unregisterForSynchronizedDefaults;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)applicationWillEnterForeground;
- (unsigned char)synchronizeForced:(unsigned char)a0;
- (void)synchronizationWithCompletionHandler:(id /* block */)a0;
- (id)dictionaryRepresentationWithError:(id *)a0;
- (unsigned char)hasExternalChanges;
- (void)ping;
- (void)scheduleRemoteSynchronization;
- (void)___NSUbiquitousKeyValueStore_isnt_sure_exactly_what_you_did_but_it_was_invalid___:(id)a0;
- (BOOL)setObject:(id)a0 forKey:(id)a1 error:(id *)a2;
- (void)registerForSynchronizedDefaults;
- (void)discardExternalChangesForChangeCount:(long long)a0;
- (id)objectForKey:(id)a0 error:(id *)a1;
- (id)copyExternalChangesWithChangeCount:(long long *)a0;
- (void *)getValueForKey:(struct __CFString { } *)a0;
- (struct __CFDictionary { } *)copyDictionary;
- (void)setDefaultsConfiguration:(id)a0;
- (void)storeDidChangeWithStoreID:(id)a0 changeDictionary:(id)a1 reply:(id /* block */)a2;
- (void)updateConfiguration;
- (unsigned char)synchronize;
- (void)setValue:(void *)a0 forKey:(struct __CFString { } *)a1;
- (void)logFaultIfNecessaryForError:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)daemonDidWake;
- (id)objectForKey:(id)a0;
- (void)___You_think_you_can_just_XPC_into_any_process_all_willy_nilly_well_think_again___;
- (BOOL)validateKey:(id)a0 error:(id *)a1;
- (void)registerForDaemonDidWakeNotifications;
- (void)___For_some_reason_NSUbiquitousKeyValueStore_thinks_you_dont_exist___;
- (id)dictionaryRepresentation;
- (void)performInitialSyncIfNecessary;
- (void)dealloc;
- (id)initWithStoreIdentifier:(id)a0 type:(long long)a1;
- (void)registerForApplicationLifecycleEvents;
- (void)___You_are_about_to_lose_data_in_NSUbiquitousKeyValueStore___;
- (id)synchronousDaemonWithErrorHandler:(id /* block */)a0;
- (id)initWithStoreConfiguration:(id)a0;
- (id)init;
- (id)changeToken;
- (void)_clearCachedObjects;
- (void)___You_are_not_entitled_for_NSUbiquitousKeyValueStore___;
- (id)asyncDaemonWithErrorHandler:(id /* block */)a0;
- (id)description;
- (void)setChangeToken:(id)a0;
- (void)processChangeDictionary:(id)a0;
- (void).cxx_destruct;
- (void)_handleCacheErrorForKey:(id)a0;

@end
