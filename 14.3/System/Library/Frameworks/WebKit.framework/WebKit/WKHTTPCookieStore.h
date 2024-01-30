@class NSString;

@interface WKHTTPCookieStore : NSObject <WKObject> {
    struct ObjectStorage<API::HTTPCookieStore> { struct type { unsigned char __lx[72]; } data; } _cookieStore;
    struct HashMap<const void *, std::__1::unique_ptr<WKHTTPCookieStoreObserver, std::__1::default_delete<WKHTTPCookieStoreObserver> >, WTF::DefaultHash<const void *>, WTF::HashTraits<const void *>, WTF::HashTraits<std::__1::unique_ptr<WKHTTPCookieStoreObserver, std::__1::default_delete<WKHTTPCookieStoreObserver> > > > { struct HashTable<const void *, WTF::KeyValuePair<const void *, std::__1::unique_ptr<WKHTTPCookieStoreObserver, std::__1::default_delete<WKHTTPCookieStoreObserver> > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<const void *, std::__1::unique_ptr<WKHTTPCookieStoreObserver, std::__1::default_delete<WKHTTPCookieStoreObserver> > > >, WTF::DefaultHash<const void *>, WTF::HashMap<const void *, std::__1::unique_ptr<WKHTTPCookieStoreObserver, std::__1::default_delete<WKHTTPCookieStoreObserver> >, WTF::DefaultHash<const void *>, WTF::HashTraits<const void *>, WTF::HashTraits<std::__1::unique_ptr<WKHTTPCookieStoreObserver, std::__1::default_delete<WKHTTPCookieStoreObserver> > > >::KeyValuePairTraits, WTF::HashTraits<const void *> > { struct KeyValuePair<const void *, std::__1::unique_ptr<WKHTTPCookieStoreObserver, std::__1::default_delete<WKHTTPCookieStoreObserver> > > *m_table; } m_impl; } _observers;
}

@property (readonly) struct Object { void /* function */ **x0; id x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)getAllCookies:(id /* block */)a0;
- (void)setCookie:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteCookie:(id)a0 completionHandler:(id /* block */)a1;
- (void)_getCookiesForURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)addObserver:(id)a0;
- (id).cxx_construct;

@end
