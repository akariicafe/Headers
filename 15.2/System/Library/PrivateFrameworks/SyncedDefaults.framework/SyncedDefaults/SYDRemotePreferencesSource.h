@class SYDClient, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface SYDRemotePreferencesSource : NSObject {
    long long _generationCount;
    long long _lastGenerationFromDisk;
    struct __CFString { } *_preferenceID;
    struct __CFURL { } *_urlOnDisk;
    struct __CFDictionary { } *_cache;
    long long _storageChangeCount;
    long long _initialSyncChangeCount;
    unsigned char _isInitialSync;
    struct __CFSet { } *_dirtyKeys;
    struct __CFDictionary { } *_configurationDictionary;
    NSMutableDictionary *_externalChanges;
    SYDClient *_client;
    id /* block */ _registrationBlock;
    NSObject<OS_dispatch_queue> *_registrationQueue;
    NSObject<OS_dispatch_queue> *_protectionQueue;
    BOOL _memoryWarningSourceEnabled;
    NSObject<OS_dispatch_source> *_memoryWarningSource;
    double _lastAccess;
    BOOL _forceNextSynchronization;
    NSObject<OS_os_transaction> *_isExecutingForClient;
}

@property (class, nonatomic) BOOL alwaysUseKVSOnCloudKit;

+ (void)initialize;
+ (id)SYDRemotePreferencesSourceConfigurationDidChangeNotification;
+ (void)resetAllApplicationsWithCompletionHandler:(id /* block */)a0;
+ (void)migrateSyncedDefaultsForBundleIdentifier:(id)a0;
+ (id)SYDUbiquitousKeyValueStoreDidChangeExternallyNotification;
+ (id)SYDRemotePreferencesSourceDidChangeNotification;
+ (void)noteAccountChanges:(id)a0;

- (void *)getValueForKey:(struct __CFString { } *)a0;
- (long long)maximumTotalDataLength;
- (id)copyExternalChangesWithChangeCount:(long long *)a0;
- (void)_locked_syd_end_transaction;
- (long long)maximumKeyLength;
- (long long)maximumDataLengthPerKey;
- (void)scheduleRemoteSynchronization;
- (void)_didReceiveMemoryWarning;
- (void)updateConfiguration;
- (long long)maximumKeyCount;
- (void)setCache:(struct __CFDictionary { } *)a0;
- (id)objectForKey:(id)a0 error:(id *)a1;
- (void)registerForSynchronizedDefaults;
- (id)initWithApplicationID:(struct __CFString { } *)a0 shared:(BOOL)a1;
- (unsigned char)synchronizeForced:(unsigned char)a0;
- (void)_locked_syd_start_transaction;
- (id)dictionaryRepresentationWithError:(id *)a0;
- (void)_cachePlistFromDisk;
- (id)serverSideDebugDescription;
- (unsigned char)_synchronizeForced:(unsigned char)a0;
- (unsigned char)hasExternalChanges;
- (void)setDefaultsConfiguration:(id)a0;
- (struct __CFDictionary { } *)copyConfigurationDictionary;
- (id)_warningSource;
- (id)initWithApplicationID:(struct __CFString { } *)a0 storeID:(struct __CFString { } *)a1 shared:(BOOL)a2 additionalSource:(BOOL)a3 containerPath:(struct __CFString { } *)a4 storeType:(long long)a5;
- (struct __CFDictionary { } *)copyDictionary;
- (id)initWithApplicationID:(struct __CFString { } *)a0 storeID:(struct __CFString { } *)a1 shared:(BOOL)a2;
- (unsigned char)isInitialSync;
- (void)unregisterForSynchronizedDefaults;
- (void)_forceRegistrationNow;
- (id)initWithApplicationID:(struct __CFString { } *)a0 storeID:(struct __CFString { } *)a1 shared:(BOOL)a2 additionalSource:(BOOL)a3 containerPath:(struct __CFString { } *)a4;
- (void)_storeConfiguration:(struct __CFDictionary { } *)a0;
- (void)_createMemoryWarningSource;
- (long long)configurationValueForKey:(struct __CFString { } *)a0;
- (struct __CFArray { } *)copyKeyList;
- (BOOL)setObject:(id)a0 forKey:(id)a1 error:(id *)a2;
- (void)synchronizationWithCompletionHandler:(id /* block */)a0;
- (void)ping;
- (void)setValue:(void *)a0 forKey:(struct __CFString { } *)a1;
- (id)initWithApplicationID:(struct __CFString { } *)a0 storeID:(struct __CFString { } *)a1 shared:(BOOL)a2 additionalSource:(BOOL)a3;
- (long long)generationCount;
- (void).cxx_destruct;
- (void)discardExternalChangesForChangeCount:(long long)a0;
- (unsigned char)synchronize;
- (void)dealloc;

@end
