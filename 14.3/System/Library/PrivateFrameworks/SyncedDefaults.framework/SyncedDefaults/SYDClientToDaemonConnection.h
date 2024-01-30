@class NSCache, NSString, NSXPCConnection, NSObject, SYDStoreConfiguration;
@protocol OS_dispatch_queue;

@interface SYDClientToDaemonConnection : SYDRemotePreferencesSource <SYDClientProtocol>

@property (retain, nonatomic) SYDStoreConfiguration *storeConfiguration;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *analyticsQueue;
@property (nonatomic) int daemonWakeNotifyToken;
@property (nonatomic) BOOL didLogFaultForEntitlements;
@property (retain, nonatomic) NSCache *cachedObjects;
@property (readonly, nonatomic) BOOL isSyncingWithCloud;
@property unsigned long long syncingWithCloudCounter;
@property (readonly, nonatomic) NSString *storeIdentifier;
@property (readonly, nonatomic) long long storeType;

+ (void)setHasInitializedStoreWithIdentifier:(id)a0;
+ (void)processAccountChangesWithCompletionHandler:(id /* block */)a0;
+ (id)disgustingUglyHardcodedKnownStoreIdentifierForApplicationIdentifier:(id)a0;
+ (void)setShouldSyncOnFirstInitializationOverride:(id)a0;
+ (id)daemonProtocolInterface;
+ (id)shouldSyncOnFirstInitializationOverride;
+ (BOOL)hasInitializedStoreWithIdentifier:(id)a0;
+ (id)defaultStoreIdentifierForCurrentProcessWithApplicationIdentifier:(id)a0;

- (struct __CFDictionary { } *)copyDictionary;
- (id)objectForKey:(id)a0;
- (void)ping;
- (id)synchronousDaemonWithErrorHandler:(id /* block */)a0;
- (long long)maximumKeyCount;
- (id)init;
- (void).cxx_destruct;
- (id)initWithStoreConfiguration:(id)a0;
- (id)copyExternalChangesWithChangeCount:(long long *)a0;
- (void)storeDidChangeWithConfiguration:(id)a0 changeDictionary:(id)a1 reply:(id /* block */)a2;
- (long long)maximumKeyLength;
- (id)changeToken;
- (void)dealloc;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)synchronizationWithCompletionHandler:(id /* block */)a0;
- (void)scheduleRemoteSynchronization;
- (long long)maximumTotalDataLength;
- (void)daemonDidWake;
- (void)performInitialSyncIfNecessary;
- (unsigned char)synchronizeForced:(unsigned char)a0;
- (id)description;
- (unsigned char)synchronize;
- (void)discardExternalChangesForChangeCount:(long long)a0;
- (long long)maximumDataLengthPerKey;
- (id)dictionaryRepresentation;
- (id)asyncDaemonWithErrorHandler:(id /* block */)a0;
- (void)setValue:(void *)a0 forKey:(struct __CFString { } *)a1;
- (long long)generationCount;
- (void)setDefaultsConfiguration:(id)a0;
- (void)unregisterForSynchronizedDefaults;
- (void *)getValueForKey:(struct __CFString { } *)a0;
- (void)updateConfiguration;
- (unsigned char)hasExternalChanges;
- (void)logFaultIfNecessaryForError:(id)a0;
- (id)initWithStoreIdentifier:(id)a0 type:(long long)a1;
- (void)registerForDaemonDidWakeNotifications;
- (void)processChangeDictionary:(id)a0;
- (void)registerForSynchronizedDefaults;
- (void)setChangeToken:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (struct __CFArray { } *)copyKeyList;

@end
