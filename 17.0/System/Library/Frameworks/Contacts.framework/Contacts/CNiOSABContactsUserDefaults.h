@class NSCache, NSMutableDictionary, CNiOSABContactsUserDefaultsABWrapper;

@interface CNiOSABContactsUserDefaults : CNContactsUserDefaults

@property (retain, nonatomic) NSMutableDictionary *observerCountPerKey;
@property (retain, nonatomic) NSCache *valueCache;
@property (readonly, nonatomic) CNiOSABContactsUserDefaultsABWrapper *abWrapper;

- (long long)sortOrder;
- (id)init;
- (void)dealloc;
- (long long)shortNameFormat;
- (void)setShortNameFormatEnabled:(BOOL)a0;
- (id)initWithABWrapper:(id)a0;
- (id)countryCode;
- (id)filteredGroupAndContainerIDs;
- (BOOL)isShortNameFormatEnabled;
- (void)setShortNameFormat:(long long)a0;
- (BOOL)shortNameFormatPrefersNicknames;
- (void)setDisplayNameOrder:(long long)a0;
- (void)_unregisterObserverForKey:(id)a0;
- (void)setFilteredGroupAndContainerIDs:(id)a0;
- (void).cxx_destruct;
- (void)setLastIgnoredNewDuplicatesCount:(long long)a0;
- (void)flushCache;
- (long long)displayNameOrder;
- (long long)newContactDisplayNameOrder;
- (void)_registerObserverForKey:(id)a0;
- (void)removeObserver:(id)a0 forKeyPath:(id)a1;
- (void)addObserver:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (long long)lastIgnoredNewDuplicatesCount;
- (void)setShortNameFormatPrefersNicknames:(BOOL)a0;

@end
