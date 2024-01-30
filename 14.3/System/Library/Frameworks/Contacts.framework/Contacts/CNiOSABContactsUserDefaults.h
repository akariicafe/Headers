@class NSCache, NSMutableDictionary, CNiOSABContactsUserDefaultsABWrapper;

@interface CNiOSABContactsUserDefaults : CNContactsUserDefaults

@property (retain, nonatomic) NSMutableDictionary *observerCountPerKey;
@property (retain, nonatomic) NSCache *valueCache;
@property (readonly, nonatomic) CNiOSABContactsUserDefaultsABWrapper *abWrapper;

- (long long)displayNameOrder;
- (long long)sortOrder;
- (void)setShortNameFormat:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (id)filteredGroupAndContainerIDs;
- (void)removeObserver:(id)a0 forKeyPath:(id)a1;
- (void)dealloc;
- (BOOL)shortNameFormatPrefersNicknames;
- (id)countryCode;
- (void)flushCache;
- (void)setDisplayNameOrder:(long long)a0;
- (void)setFilteredGroupAndContainerIDs:(id)a0;
- (long long)shortNameFormat;
- (void)setShortNameFormatPrefersNicknames:(BOOL)a0;
- (long long)newContactDisplayNameOrder;
- (void)_unregisterObserverForKey:(id)a0;
- (void)setShortNameFormatEnabled:(BOOL)a0;
- (void)addObserver:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (void)_registerObserverForKey:(id)a0;
- (BOOL)isShortNameFormatEnabled;
- (id)initWithABWrapper:(id)a0;

@end
