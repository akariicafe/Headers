@interface WKRemoteObjectEncoder : NSCoder {
    struct RefPtr<API::Dictionary, WTF::DumbPtrTraits<API::Dictionary> > { struct Dictionary *m_ptr; } _rootDictionary;
    struct Array { void /* function */ **x0; id x1; struct Vector<WTF::RefPtr<API::Object, WTF::DumbPtrTraits<API::Object> >, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct RefPtr<API::Object, WTF::DumbPtrTraits<API::Object> > *x0; unsigned int x1; unsigned int x2; } x2; } *_objectStream;
    struct Dictionary { void /* function */ **x0; id x1; struct HashMap<WTF::String, WTF::RefPtr<API::Object, WTF::DumbPtrTraits<API::Object> >, WTF::DefaultHash<WTF::String>, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RefPtr<API::Object, WTF::DumbPtrTraits<API::Object> > > > { struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::RefPtr<API::Object, WTF::DumbPtrTraits<API::Object> > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::RefPtr<API::Object, WTF::DumbPtrTraits<API::Object> > > >, WTF::DefaultHash<WTF::String>, WTF::HashMap<WTF::String, WTF::RefPtr<API::Object, WTF::DumbPtrTraits<API::Object> >, WTF::DefaultHash<WTF::String>, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RefPtr<API::Object, WTF::DumbPtrTraits<API::Object> > > >::KeyValuePairTraits, WTF::HashTraits<WTF::String> > { struct KeyValuePair<WTF::String, WTF::RefPtr<API::Object, WTF::DumbPtrTraits<API::Object> > > *x0; } x0; } x2; } *_currentDictionary;
}

- (void)encodeDouble:(double)a0 forKey:(id)a1;
- (void)encodeInteger:(long long)a0 forKey:(id)a1;
- (void)encodeFloat:(float)a0 forKey:(id)a1;
- (void)encodeBytes:(const char *)a0 length:(unsigned long long)a1 forKey:(id)a2;
- (BOOL)allowsKeyedCoding;
- (void)encodeValueOfObjCType:(const char *)a0 at:(const void *)a1;
- (void)encodeInt32:(int)a0 forKey:(id)a1;
- (id)init;
- (void)encodeInt:(int)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (BOOL)requiresSecureCoding;
- (void)encodeBool:(BOOL)a0 forKey:(id)a1;
- (void)encodeInt64:(long long)a0 forKey:(id)a1;
- (void)encodeObject:(id)a0 forKey:(id)a1;
- (struct Dictionary { void /* function */ **x0; id x1; struct HashMap<WTF::String, WTF::RefPtr<API::Object, WTF::DumbPtrTraits<API::Object> >, WTF::DefaultHash<WTF::String>, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RefPtr<API::Object, WTF::DumbPtrTraits<API::Object> > > > { struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::RefPtr<API::Object, WTF::DumbPtrTraits<API::Object> > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::RefPtr<API::Object, WTF::DumbPtrTraits<API::Object> > > >, WTF::DefaultHash<WTF::String>, WTF::HashMap<WTF::String, WTF::RefPtr<API::Object, WTF::DumbPtrTraits<API::Object> >, WTF::DefaultHash<WTF::String>, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RefPtr<API::Object, WTF::DumbPtrTraits<API::Object> > > >::KeyValuePairTraits, WTF::HashTraits<WTF::String> > { struct KeyValuePair<WTF::String, WTF::RefPtr<API::Object, WTF::DumbPtrTraits<API::Object> > > *x0; } x0; } x2; } *)rootObjectDictionary;
- (id).cxx_construct;

@end
