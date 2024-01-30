@class NSString;

@interface WKHTTPCookieStore : NSObject <WKObject> {
    struct ObjectStorage<API::HTTPCookieStore> { struct type { unsigned char __lx[48]; } data; } _cookieStore;
    struct HashMap<const void *, std::unique_ptr<WKHTTPCookieStoreObserver>, WTF::DefaultHash<const void *>, WTF::HashTraits<const void *>, WTF::HashTraits<std::unique_ptr<WKHTTPCookieStoreObserver>>, WTF::HashTableTraits> { struct HashTable<const void *, WTF::KeyValuePair<const void *, std::unique_ptr<WKHTTPCookieStoreObserver>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<const void *, std::unique_ptr<WKHTTPCookieStoreObserver>>>, WTF::DefaultHash<const void *>, WTF::HashMap<const void *, std::unique_ptr<WKHTTPCookieStoreObserver>>::KeyValuePairTraits, WTF::HashTraits<const void *>> { union { void *m_table; unsigned int *m_tableForLLDB; } ; } m_impl; } _observers;
}

@property (readonly) struct Object { void /* function */ **x0; id x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)getAllCookies:(id /* block */)a0;
- (void)setCookie:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteCookie:(id)a0 completionHandler:(id /* block */)a1;
- (void)_getCookiesForURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_setCookieAcceptPolicy:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)_flushCookiesToDiskWithCompletionHandler:(id /* block */)a0;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;

@end
