@interface WKWebViewContentProviderRegistry : NSObject {
    struct HashMap<WTF::String, Class<WKWebViewContentProvider>, WTF::ASCIICaseInsensitiveHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<Class<WKWebViewContentProvider>>, WTF::HashTableTraits> { struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, Class<WKWebViewContentProvider>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, Class<WKWebViewContentProvider>>>, WTF::ASCIICaseInsensitiveHash, WTF::HashMap<WTF::String, Class<WKWebViewContentProvider>, WTF::ASCIICaseInsensitiveHash>::KeyValuePairTraits, WTF::HashTraits<WTF::String>> { union { void *m_table; unsigned int *m_tableForLLDB; } ; } m_impl; } _contentProviderForMIMEType;
    struct HashCountedSet<WebKit::WebPageProxy *, WTF::DefaultHash<WebKit::WebPageProxy *>, WTF::HashTraits<WebKit::WebPageProxy *>> { struct HashMap<WebKit::WebPageProxy *, unsigned int, WTF::DefaultHash<WebKit::WebPageProxy *>, WTF::HashTraits<WebKit::WebPageProxy *>, WTF::HashTraits<unsigned int>, WTF::HashTableTraits> { struct HashTable<WebKit::WebPageProxy *, WTF::KeyValuePair<WebKit::WebPageProxy *, unsigned int>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebKit::WebPageProxy *, unsigned int>>, WTF::DefaultHash<WebKit::WebPageProxy *>, WTF::HashMap<WebKit::WebPageProxy *, unsigned int>::KeyValuePairTraits, WTF::HashTraits<WebKit::WebPageProxy *>> { union { void *m_table; unsigned int *m_tableForLLDB; } ; } m_impl; } m_impl; } _pages;
}

- (struct Vector<WTF::String, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct String *x0; unsigned int x1; unsigned int x2; })_mimeTypesWithCustomContentProviders;
- (void)registerProvider:(Class)a0 forMIMEType:(const void *)a1;
- (void)removePage:(void *)a0;
- (id)initWithConfiguration:(id)a0;
- (void)addPage:(void *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (Class)providerForMIMEType:(const void *)a0;

@end
