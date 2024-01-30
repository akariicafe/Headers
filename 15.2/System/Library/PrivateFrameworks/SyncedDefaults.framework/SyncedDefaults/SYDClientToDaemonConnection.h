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

+ (void)setShouldSyncOnFirstInitializationOverride:(id)a0;
+ (id)disgustingUglyHardcodedKnownStoreIdentifierForApplicationIdentifier:(id)a0;
+ (void)setHasInitializedStoreWithIdentifier:(id)a0;
+ (void)processAccountChangesWithCompletionHandler:(id /* block */)a0;
+ (id)shouldSyncOnFirstInitializationOverride;
+ (BOOL)hasInitializedStoreWithIdentifier:(id)a0;
+ (id)daemonProtocolInterface;
+ (id)clientProtocolInterface;
+ (id)defaultStoreIdentifierForCurrentProcessWithApplicationIdentifier:(id)a0;

- (void *)getValueForKey:(struct __CFString { } *)a0;
- (long long)maximumTotalDataLength;
- (id)copyExternalChangesWithChangeCount:(long long *)a0;
- (long long)maximumKeyLength;
- (long long)maximumDataLengthPerKey;
- (void)scheduleRemoteSynchronization;
- (void)updateConfiguration;
- (long long)maximumKeyCount;
- (id)objectForKey:(id)a0 error:(id *)a1;
- (void)registerForSynchronizedDefaults;
- (unsigned char)synchronizeForced:(unsigned char)a0;
- (id)dictionaryRepresentationWithError:(id *)a0;
- (unsigned char)hasExternalChanges;
- (void)setDefaultsConfiguration:(id)a0;
- (void)_handleCacheErrorForKey:(id)a0;
- (struct __CFDictionary { } *)copyDictionary;
- (void)unregisterForSynchronizedDefaults;
- (id)changeToken;
- (struct __CFArray { } *)copyKeyList;
- (BOOL)setObject:(id)a0 forKey:(id)a1 error:(id *)a2;
- (void)synchronizationWithCompletionHandler:(id /* block */)a0;
- (void)daemonDidWake;
- (void)removeObjectForKey:(id)a0;
- (id)initWithStoreConfiguration:(id)a0;
- (id)synchronousDaemonWithErrorHandler:(id /* block */)a0;
- (id)initWithStoreIdentifier:(id)a0 type:(long long)a1;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)ping;
- (void)setValue:(void *)a0 forKey:(struct __CFString { } *)a1;
- (id)description;
- (void)registerForDaemonDidWakeNotifications;
- (long long)generationCount;
- (void).cxx_destruct;
- (id)init;
- (id)objectForKey:(id)a0;
- (void)discardExternalChangesForChangeCount:(long long)a0;
- (void)setChangeToken:(id)a0;
- (id)asyncDaemonWithErrorHandler:(id /* block */)a0;
- (void)processChangeDictionary:(id)a0;
- (unsigned char)synchronize;
- (void)dealloc;
- (void)storeDidChangeWithConfiguration:(id)a0 changeDictionary:(id)a1 reply:(id /* block */)a2;
- (void)performInitialSyncIfNecessary;
- (void)logFaultIfNecessaryForError:(id)a0;
- (id)dictionaryRepresentation;

@end
