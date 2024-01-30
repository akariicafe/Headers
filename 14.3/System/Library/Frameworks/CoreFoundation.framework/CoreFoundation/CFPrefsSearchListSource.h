@class CFPrefsCloudSource, CFPrefsPlistSource;

@interface CFPrefsSearchListSource : CFPrefsSource {
    struct __CFDictionary { } *_keysToSources;
    struct __CFString { } *_identifier;
    struct __CFArray { } *_sourceList;
    struct __CFSet { } *_cloudKeys;
    struct __CFArray { } *_cloudPrefixKeys;
    CFPrefsPlistSource *_standardSetTarget;
    CFPrefsCloudSource *_cloudSetTarget;
    BOOL initialized;
}

- (struct __CFString { } *)copyOSLogDescription;
- (BOOL)isDirectModeEnabled;
- (void)unlock;
- (void)lock;
- (void)handleChangeNotificationForDomainIdentifier:(struct __CFString { } *)a0 isRemote:(BOOL)a1;
- (void)alreadylocked_setPrecopiedValues:(const void **)a0 forKeys:(const struct __CFString **)a1 count:(long long)a2 from:(id)a3;
- (struct __CFString { } *)domainIdentifier;
- (void)deferredNotifyCausedByLocalWriteOfChangesToKey:(struct __CFString { } *)a0 fromValue:(void *)a1 toValue:(void *)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)transitionIntoDirectModeIfNeededWithRetryBlock:(id /* block */)a0;
- (id)initWithIdentifier:(struct __CFString { } *)a0 containingPreferences:(id)a1;
- (void)dealloc;
- (struct __CFDictionary { } *)alreadylocked_copyDictionary;
- (struct __CFArray { } *)alreadylocked_copyKeyList;
- (id)description;
- (BOOL)synchronize;
- (id)createRequestNewContentMessageForDaemon:(int)a0;
- (void)fullCloudSynchronizeWithCompletionHandler:(id /* block */)a0;
- (long long)generationCount;
- (void)handleReply:(id)a0 toRequestNewDataMessage:(id)a1 onConnection:(id)a2 retryCount:(int)a3 error:(BOOL *)a4;
- (void *)alreadylocked_copyValueForKey:(struct __CFString { } *)a0;
- (void)deferredNotifyCausedByLoadingOfChangesFromDictionary:(struct __CFDictionary { } *)a0 toDictionary:(struct __CFDictionary { } *)a1;

@end
