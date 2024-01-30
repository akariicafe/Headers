@class NSCache, NSMutableDictionary, CNiOSABContactsUserDefaultsABWrapper;

@interface CNiOSABContactsUserDefaults : CNContactsUserDefaults

@property (retain, nonatomic) NSMutableDictionary *observerCountPerKey;
@property (retain, nonatomic) NSCache *valueCache;
@property (readonly, nonatomic) CNiOSABContactsUserDefaultsABWrapper *abWrapper;

- (void)removeObserver:(id)a0 forKeyPath:(id)a1;
- (void)addObserver:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (void)flushCache;
- (long long)displayNameOrder;
- (long long)sortOrder;
- (BOOL)isShortNameFormatEnabled;
- (BOOL)shortNameFormatPrefersNicknames;
- (void)setLastIgnoredNewDuplicatesCount:(long long)a0;
- (void)setShortNameFormat:(long long)a0;
- (id)initWithABWrapper:(id)a0;
- (void)setDisplayNameOrder:(long long)a0;
- (id)filteredGroupAndContainerIDs;
- (void)dealloc;
- (id)countryCode;
- (void)_unregisterObserverForKey:(id)a0;
- (void)_registerObserverForKey:(id)a0;
- (id)init;
- (long long)lastIgnoredNewDuplicatesCount;
- (void)setFilteredGroupAndContainerIDs:(id)a0;
- (void)setShortNameFormatPrefersNicknames:(BOOL)a0;
- (void).cxx_destruct;
- (long long)newContactDisplayNameOrder;
- (long long)shortNameFormat;
- (void)setShortNameFormatEnabled:(BOOL)a0;

@end
