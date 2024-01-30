@class NSCache, NSMutableDictionary, CNiOSABContactsUserDefaultsABWrapper;

@interface CNiOSABContactsUserDefaults : CNContactsUserDefaults

@property (retain, nonatomic) NSMutableDictionary *observerCountPerKey;
@property (retain, nonatomic) NSCache *valueCache;
@property (readonly, nonatomic) CNiOSABContactsUserDefaultsABWrapper *abWrapper;

- (long long)sortOrder;
- (long long)displayNameOrder;
- (void)setDisplayNameOrder:(long long)a0;
- (id)filteredGroupAndContainerIDs;
- (void)addObserver:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (void)setShortNameFormatPrefersNicknames:(BOOL)a0;
- (id)countryCode;
- (void)removeObserver:(id)a0 forKeyPath:(id)a1;
- (void)setFilteredGroupAndContainerIDs:(id)a0;
- (void)setShortNameFormat:(long long)a0;
- (long long)newContactDisplayNameOrder;
- (void)_registerObserverForKey:(id)a0;
- (long long)shortNameFormat;
- (void)_unregisterObserverForKey:(id)a0;
- (void).cxx_destruct;
- (void)flushCache;
- (id)init;
- (BOOL)isShortNameFormatEnabled;
- (BOOL)shortNameFormatPrefersNicknames;
- (void)setShortNameFormatEnabled:(BOOL)a0;
- (void)dealloc;
- (id)initWithABWrapper:(id)a0;

@end
