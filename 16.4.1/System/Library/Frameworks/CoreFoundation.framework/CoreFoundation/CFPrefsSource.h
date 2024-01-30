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

- (BOOL)isByHost;
- (struct __CFString { } *)domainIdentifier;
- (void)setStoreName:(struct __CFString { } *)a0;
- (void)transitionIntoDirectModeIfNeededWithRetryBlock:(id /* block */)a0;
- (BOOL)synchronize;
- (void)handleReply:(id)a0 toRequestNewDataMessage:(id)a1 onConnection:(id)a2 retryCount:(int)a3 error:(BOOL *)a4;
- (struct __CFArray { } *)alreadylocked_copyKeyList;
- (void)lock;
- (void)setBackupDisabled:(BOOL)a0;
- (struct __CFString { } *)container;
- (id)alreadylocked_createObserverUpdateMessageWithOperation:(int)a0 forRole:(int *)a1;
- (void)unlock;
- (BOOL)isDirectModeEnabled;
- (struct __CFDictionary { } *)alreadylocked_copyDictionary;
- (void *)copyValueForKey:(struct __CFString { } *)a0;
- (BOOL)managed;
- (int)alreadylocked_updateObservingRemoteChanges;
- (struct __CFString { } *)copyOSLogDescription;
- (void)setDaemonCacheEnabled:(BOOL)a0;
- (struct __CFString { } *)userIdentifier;
- (void)dealloc;
- (void)_notifyObserversOfChangeFromValuesForKeys:(id)a0 toValuesForKeys:(id)a1;
- (void *)alreadylocked_copyValueForKey:(struct __CFString { } *)a0;
- (long long)alreadylocked_generationCount;
- (void)setEnabled:(BOOL)a0;
- (id)copyVolatileSourceWithContainingPreferences:(id)a0;
- (void)alreadylocked_clearCache;
- (BOOL)servedByUserSessionDaemon;
- (void)setConfigurationPath:(struct __CFString { } *)a0;
- (void)mergeIntoDictionary:(struct __CFDictionary { } *)a0 sourceDictionary:(struct __CFDictionary { } *)a1 cloudKeyEvaluator:(id /* block */)a2;
- (long long)generationCount;
- (void)setAccessRestricted:(BOOL)a0;
- (id)description;
- (void)alreadylocked_setPrecopiedValues:(const void **)a0 forKeys:(const struct __CFString **)a1 count:(long long)a2 from:(id)a3;
- (void)setFileProtectionClass:(int)a0;
- (void)fullCloudSynchronizeWithCompletionHandler:(id /* block */)a0;
- (id)createRequestNewContentMessageForDaemon:(int)a0;
- (BOOL)isVolatile;
- (id)initWithContainingPreferences:(id)a0;

@end
