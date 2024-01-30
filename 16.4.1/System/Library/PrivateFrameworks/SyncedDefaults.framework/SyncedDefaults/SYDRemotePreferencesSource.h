@interface SYDRemotePreferencesSource : NSObject

+ (id)SYDRemotePreferencesSourceConfigurationDidChangeNotification;
+ (id)SYDRemotePreferencesSourceDidChangeNotification;
+ (void)migrateSyncedDefaultsForBundleIdentifier:(id)a0;
+ (id)SYDUbiquitousKeyValueStoreDidChangeExternallyNotification;

- (id)initWithApplicationID:(struct __CFString { } *)a0 storeID:(struct __CFString { } *)a1 shared:(BOOL)a2 additionalSource:(BOOL)a3;
- (void)unregisterForSynchronizedDefaults;
- (id)initWithApplicationID:(struct __CFString { } *)a0 storeID:(struct __CFString { } *)a1 shared:(BOOL)a2 additionalSource:(BOOL)a3 containerPath:(struct __CFString { } *)a4;
- (long long)maximumTotalDataLength;
- (unsigned char)synchronizeForced:(unsigned char)a0;
- (void)synchronizationWithCompletionHandler:(id /* block */)a0;
- (long long)maximumKeyCount;
- (long long)maximumKeyLength;
- (id)dictionaryRepresentationWithError:(id *)a0;
- (id)initWithApplicationID:(struct __CFString { } *)a0 storeID:(struct __CFString { } *)a1 shared:(BOOL)a2 additionalSource:(BOOL)a3 containerPath:(struct __CFString { } *)a4 storeType:(long long)a5;
- (id)initWithApplicationID:(struct __CFString { } *)a0 storeID:(struct __CFString { } *)a1 shared:(BOOL)a2;
- (unsigned char)hasExternalChanges;
- (void)ping;
- (id)initWithApplicationID:(struct __CFString { } *)a0 shared:(BOOL)a1;
- (void)scheduleRemoteSynchronization;
- (BOOL)setObject:(id)a0 forKey:(id)a1 error:(id *)a2;
- (void)registerForSynchronizedDefaults;
- (unsigned char)_synchronizeForced:(unsigned char)a0;
- (void)discardExternalChangesForChangeCount:(long long)a0;
- (id)objectForKey:(id)a0 error:(id *)a1;
- (id)copyExternalChangesWithChangeCount:(long long *)a0;
- (void *)getValueForKey:(struct __CFString { } *)a0;
- (struct __CFDictionary { } *)copyDictionary;
- (void)setDefaultsConfiguration:(id)a0;
- (void)updateConfiguration;
- (unsigned char)synchronize;
- (void)setValue:(void *)a0 forKey:(struct __CFString { } *)a1;
- (void)dealloc;
- (long long)maximumDataLengthPerKey;

@end
