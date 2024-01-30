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
+ (void)noteAccountChanges:(id)a0;
+ (void)migrateSyncedDefaultsForBundleIdentifier:(id)a0;
+ (id)SYDUbiquitousKeyValueStoreDidChangeExternallyNotification;
+ (void)resetAllApplicationsWithCompletionHandler:(id /* block */)a0;
+ (id)SYDRemotePreferencesSourceConfigurationDidChangeNotification;
+ (id)SYDRemotePreferencesSourceDidChangeNotification;

- (struct __CFDictionary { } *)copyDictionary;
- (void)ping;
- (void)setCache:(struct __CFDictionary { } *)a0;
- (void)_forceRegistrationNow;
- (void)_cachePlistFromDisk;
- (long long)maximumKeyCount;
- (id)initWithApplicationID:(struct __CFString { } *)a0 storeID:(struct __CFString { } *)a1 shared:(BOOL)a2 additionalSource:(BOOL)a3 containerPath:(struct __CFString { } *)a4;
- (void)_locked_syd_start_transaction;
- (void).cxx_destruct;
- (unsigned char)_synchronizeForced:(unsigned char)a0;
- (id)copyExternalChangesWithChangeCount:(long long *)a0;
- (void)_createMemoryWarningSource;
- (long long)maximumKeyLength;
- (id)initWithApplicationID:(struct __CFString { } *)a0 storeID:(struct __CFString { } *)a1 shared:(BOOL)a2;
- (void)dealloc;
- (id)initWithApplicationID:(struct __CFString { } *)a0 shared:(BOOL)a1;
- (void)_locked_syd_end_transaction;
- (void)synchronizationWithCompletionHandler:(id /* block */)a0;
- (void)scheduleRemoteSynchronization;
- (long long)maximumTotalDataLength;
- (id)initWithApplicationID:(struct __CFString { } *)a0 storeID:(struct __CFString { } *)a1 shared:(BOOL)a2 additionalSource:(BOOL)a3;
- (unsigned char)synchronizeForced:(unsigned char)a0;
- (unsigned char)synchronize;
- (void)discardExternalChangesForChangeCount:(long long)a0;
- (long long)maximumDataLengthPerKey;
- (struct __CFDictionary { } *)copyConfigurationDictionary;
- (void)_storeConfiguration:(struct __CFDictionary { } *)a0;
- (void)setValue:(void *)a0 forKey:(struct __CFString { } *)a1;
- (long long)generationCount;
- (void)setDefaultsConfiguration:(id)a0;
- (unsigned char)isInitialSync;
- (void)unregisterForSynchronizedDefaults;
- (void *)getValueForKey:(struct __CFString { } *)a0;
- (id)_warningSource;
- (void)updateConfiguration;
- (unsigned char)hasExternalChanges;
- (id)serverSideDebugDescription;
- (long long)configurationValueForKey:(struct __CFString { } *)a0;
- (void)registerForSynchronizedDefaults;
- (void)_didReceiveMemoryWarning;
- (struct __CFArray { } *)copyKeyList;
- (id)initWithApplicationID:(struct __CFString { } *)a0 storeID:(struct __CFString { } *)a1 shared:(BOOL)a2 additionalSource:(BOOL)a3 containerPath:(struct __CFString { } *)a4 storeType:(long long)a5;

@end
