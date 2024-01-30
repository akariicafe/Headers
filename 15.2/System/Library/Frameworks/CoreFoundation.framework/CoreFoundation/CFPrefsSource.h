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
- (void)alreadylocked_clearCache;
- (void)setBackupDisabled:(BOOL)a0;
- (void)setStoreName:(struct __CFString { } *)a0;
- (struct __CFString { } *)container;
- (void)unlock;
- (void)setEnabled:(BOOL)a0;
- (void)mergeIntoDictionary:(struct __CFDictionary { } *)a0 sourceDictionary:(struct __CFDictionary { } *)a1 cloudKeyEvaluator:(id /* block */)a2;
- (struct __CFDictionary { } *)alreadylocked_copyDictionary;
- (void)transitionIntoDirectModeIfNeededWithRetryBlock:(id /* block */)a0;
- (id)alreadylocked_createObserverUpdateMessageWithOperation:(int)a0 forRole:(int *)a1;
- (void)lock;
- (void)setDaemonCacheEnabled:(BOOL)a0;
- (void)fullCloudSynchronizeWithCompletionHandler:(id /* block */)a0;
- (void *)alreadylocked_copyValueForKey:(struct __CFString { } *)a0;
- (struct __CFArray { } *)alreadylocked_copyKeyList;
- (id)description;
- (struct __CFString { } *)copyOSLogDescription;
- (long long)generationCount;
- (long long)alreadylocked_generationCount;
- (BOOL)managed;
- (id)initWithContainingPreferences:(id)a0;
- (void)alreadylocked_setPrecopiedValues:(const void **)a0 forKeys:(const struct __CFString **)a1 count:(long long)a2 from:(id)a3;
- (void)handleReply:(id)a0 toRequestNewDataMessage:(id)a1 onConnection:(id)a2 retryCount:(int)a3 error:(BOOL *)a4;
- (void *)copyValueForKey:(struct __CFString { } *)a0;
- (void)setConfigurationPath:(struct __CFString { } *)a0;
- (void)_notifyObserversOfChangeFromValuesForKeys:(id)a0 toValuesForKeys:(id)a1;
- (void)setFileProtectionClass:(int)a0;
- (BOOL)synchronize;
- (BOOL)isByHost;
- (void)dealloc;
- (int)alreadylocked_updateObservingRemoteChanges;
- (BOOL)isDirectModeEnabled;
- (struct __CFString { } *)domainIdentifier;
- (void)setAccessRestricted:(BOOL)a0;
- (id)createRequestNewContentMessageForDaemon:(int)a0;
- (BOOL)isVolatile;

@end
