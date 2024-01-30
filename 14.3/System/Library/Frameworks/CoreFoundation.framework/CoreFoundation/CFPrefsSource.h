@class __CFPrefsWeakObservers, _CFXPreferences;

@interface CFPrefsSource : NSObject {
    _CFXPreferences *_containingPreferences;
    struct __CFDictionary { } *_dict;
    __CFPrefsWeakObservers *_observers;
    _Atomic long long _generationCount;
    _Atomic _Atomic unsigned int *shmemEntry;
    _Atomic unsigned int lastKnownShmemState;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _isSearchList;
}

- (struct __CFString { } *)userIdentifier;
- (BOOL)managed;
- (struct __CFDictionary { } *)copyDictionary;
- (BOOL)isByHost;
- (struct __CFString { } *)copyOSLogDescription;
- (BOOL)isDirectModeEnabled;
- (id)alreadylocked_createObserverUpdateMessageWithOperation:(int)a0 forRole:(int *)a1;
- (void)unlock;
- (void)lock;
- (void)setValues:(const void **)a0 forKeys:(const struct __CFString **)a1 count:(long long)a2 copyValues:(BOOL)a3 removeValuesForKeys:(const struct __CFString **)a4 count:(long long)a5 from:(id)a6;
- (void)alreadylocked_setPrecopiedValues:(const void **)a0 forKeys:(const struct __CFString **)a1 count:(long long)a2 from:(id)a3;
- (struct __CFString { } *)domainIdentifier;
- (void)setValues:(const void **)a0 forKeys:(const struct __CFString **)a1 count:(long long)a2 copyValues:(BOOL)a3 from:(id)a4;
- (id)initWithContainingPreferences:(id)a0;
- (BOOL)isVolatile;
- (void)mergeIntoDictionary:(struct __CFDictionary { } *)a0 sourceDictionary:(struct __CFDictionary { } *)a1 cloudKeyEvaluator:(id /* block */)a2;
- (struct __CFString { } *)container;
- (void)transitionIntoDirectModeIfNeededWithRetryBlock:(id /* block */)a0;
- (void)dealloc;
- (void)setConfigurationPath:(struct __CFString { } *)a0;
- (void *)copyValueForKey:(struct __CFString { } *)a0;
- (struct __CFDictionary { } *)alreadylocked_copyDictionary;
- (void)setAccessRestricted:(BOOL)a0;
- (void)setBackupDisabled:(BOOL)a0;
- (struct __CFArray { } *)alreadylocked_copyKeyList;
- (id)description;
- (BOOL)synchronize;
- (void)setValue:(void *)a0 forKey:(struct __CFString { } *)a1 from:(id)a2;
- (id)createRequestNewContentMessageForDaemon:(int)a0;
- (void)fullCloudSynchronizeWithCompletionHandler:(id /* block */)a0;
- (int)alreadylocked_removePreferencesObserver:(id)a0;
- (long long)generationCount;
- (long long)alreadylocked_generationCount;
- (void)alreadylocked_clearCache;
- (void)setDaemonCacheEnabled:(BOOL)a0;
- (void)handleReply:(id)a0 toRequestNewDataMessage:(id)a1 onConnection:(id)a2 retryCount:(int)a3 error:(BOOL *)a4;
- (int)alreadylocked_updateObservingRemoteChanges;
- (int)alreadylocked_addPreferencesObserver:(id)a0;
- (void)_notifyObserversOfChangeFromValuesForKeys:(id)a0 toValuesForKeys:(id)a1;
- (void *)alreadylocked_copyValueForKey:(struct __CFString { } *)a0;
- (struct __CFArray { } *)copyKeyList;
- (void)setFileProtectionClass:(int)a0;

@end
