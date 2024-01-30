@interface _WKWebsiteDataSize : NSObject {
    struct Size { unsigned long long totalSize; struct HashMap<unsigned int, unsigned long long, WTF::DefaultHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<unsigned long long> > { struct HashTable<unsigned int, WTF::KeyValuePair<unsigned int, unsigned long long>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned int, unsigned long long> >, WTF::DefaultHash<unsigned int>, WTF::HashMap<unsigned int, unsigned long long, WTF::DefaultHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<unsigned long long> >::KeyValuePairTraits, WTF::HashTraits<unsigned int> > { struct KeyValuePair<unsigned int, unsigned long long> *m_table; } m_impl; } typeSizes; } _size;
}

@property (readonly, nonatomic) unsigned long long totalSize;

- (id)initWithSize:(const struct Size { unsigned long long x0; struct HashMap<unsigned int, unsigned long long, WTF::DefaultHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<unsigned long long> > { struct HashTable<unsigned int, WTF::KeyValuePair<unsigned int, unsigned long long>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned int, unsigned long long> >, WTF::DefaultHash<unsigned int>, WTF::HashMap<unsigned int, unsigned long long, WTF::DefaultHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<unsigned long long> >::KeyValuePairTraits, WTF::HashTraits<unsigned int> > { struct KeyValuePair<unsigned int, unsigned long long> *x0; } x0; } x1; } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (unsigned long long)sizeOfDataTypes:(id)a0;

@end
