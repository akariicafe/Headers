@interface WKRemoteObjectDecoder : NSCoder {
    struct RetainPtr<_WKRemoteObjectInterface> { void *m_ptr; } _interface;
    const struct Dictionary { void /* function */ **x0; id x1; struct HashMap<WTF::String, WTF::RefPtr<API::Object, WTF::DumbPtrTraits<API::Object> >, WTF::DefaultHash<WTF::String>, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RefPtr<API::Object, WTF::DumbPtrTraits<API::Object> > > > { struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::RefPtr<API::Object, WTF::DumbPtrTraits<API::Object> > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::RefPtr<API::Object, WTF::DumbPtrTraits<API::Object> > > >, WTF::DefaultHash<WTF::String>, WTF::HashMap<WTF::String, WTF::RefPtr<API::Object, WTF::DumbPtrTraits<API::Object> >, WTF::DefaultHash<WTF::String>, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RefPtr<API::Object, WTF::DumbPtrTraits<API::Object> > > >::KeyValuePairTraits, WTF::HashTraits<WTF::String> > { struct KeyValuePair<WTF::String, WTF::RefPtr<API::Object, WTF::DumbPtrTraits<API::Object> > > *x0; } x0; } x2; } *_rootDictionary;
    const struct Dictionary { void /* function */ **x0; id x1; struct HashMap<WTF::String, WTF::RefPtr<API::Object, WTF::DumbPtrTraits<API::Object> >, WTF::DefaultHash<WTF::String>, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RefPtr<API::Object, WTF::DumbPtrTraits<API::Object> > > > { struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::RefPtr<API::Object, WTF::DumbPtrTraits<API::Object> > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::RefPtr<API::Object, WTF::DumbPtrTraits<API::Object> > > >, WTF::DefaultHash<WTF::String>, WTF::HashMap<WTF::String, WTF::RefPtr<API::Object, WTF::DumbPtrTraits<API::Object> >, WTF::DefaultHash<WTF::String>, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RefPtr<API::Object, WTF::DumbPtrTraits<API::Object> > > >::KeyValuePairTraits, WTF::HashTraits<WTF::String> > { struct KeyValuePair<WTF::String, WTF::RefPtr<API::Object, WTF::DumbPtrTraits<API::Object> > > *x0; } x0; } x2; } *_currentDictionary;
    SEL _replyToSelector;
    const struct Array { void /* function */ **x0; id x1; struct Vector<WTF::RefPtr<API::Object, WTF::DumbPtrTraits<API::Object> >, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct RefPtr<API::Object, WTF::DumbPtrTraits<API::Object> > *x0; unsigned int x1; unsigned int x2; } x2; } *_objectStream;
    unsigned long long _objectStreamPosition;
    const struct HashSet<const void *, WTF::DefaultHash<const void *>, WTF::HashTraits<const void *> > { struct HashTable<const void *, const void *, WTF::IdentityExtractor, WTF::DefaultHash<const void *>, WTF::HashTraits<const void *>, WTF::HashTraits<const void *> > { void **x0; } x0; } *_allowedClasses;
}

- (int)decodeIntForKey:(id)a0;
- (id)allowedClasses;
- (id)decodeObjectOfClasses:(id)a0 forKey:(id)a1;
- (long long)decodeIntegerForKey:(id)a0;
- (int)decodeInt32ForKey:(id)a0;
- (long long)decodeInt64ForKey:(id)a0;
- (id)decodeObjectForKey:(id)a0;
- (double)decodeDoubleForKey:(id)a0;
- (BOOL)decodeBoolForKey:(id)a0;
- (BOOL)allowsKeyedCoding;
- (float)decodeFloatForKey:(id)a0;
- (void).cxx_destruct;
- (void)decodeValueOfObjCType:(const char *)a0 at:(void *)a1;
- (BOOL)requiresSecureCoding;
- (const char *)decodeBytesForKey:(id)a0 returnedLength:(unsigned long long *)a1;
- (id).cxx_construct;
- (id)initWithInterface:(id)a0 rootObjectDictionary:(const struct Dictionary { void /* function */ **x0; id x1; struct HashMap<WTF::String, WTF::RefPtr<API::Object, WTF::DumbPtrTraits<API::Object> >, WTF::DefaultHash<WTF::String>, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RefPtr<API::Object, WTF::DumbPtrTraits<API::Object> > > > { struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::RefPtr<API::Object, WTF::DumbPtrTraits<API::Object> > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::RefPtr<API::Object, WTF::DumbPtrTraits<API::Object> > > >, WTF::DefaultHash<WTF::String>, WTF::HashMap<WTF::String, WTF::RefPtr<API::Object, WTF::DumbPtrTraits<API::Object> >, WTF::DefaultHash<WTF::String>, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RefPtr<API::Object, WTF::DumbPtrTraits<API::Object> > > >::KeyValuePairTraits, WTF::HashTraits<WTF::String> > { struct KeyValuePair<WTF::String, WTF::RefPtr<API::Object, WTF::DumbPtrTraits<API::Object> > > *x0; } x0; } x2; } *)a1 replyToSelector:(SEL)a2;
- (BOOL)containsValueForKey:(id)a0;

@end
