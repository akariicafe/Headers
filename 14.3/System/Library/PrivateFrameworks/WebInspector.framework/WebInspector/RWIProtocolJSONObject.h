@interface RWIProtocolJSONObject : NSObject {
    struct RefPtr<WTF::JSONImpl::Object, WTF::DumbPtrTraits<WTF::JSONImpl::Object> > { struct Object *m_ptr; } _object;
}

- (void)setDouble:(double)a0 forKey:(id)a1;
- (id)objectForKey:(id)a0;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (void)removeKey:(id)a0;
- (id)init;
- (void)setInteger:(int)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)stringForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setString:(id)a0 forKey:(id)a1;
- (BOOL)boolForKey:(id)a0;
- (int)integerForKey:(id)a0;
- (id).cxx_construct;
- (id)initWithJSONObject:(const struct Object { void /* function */ **x0; unsigned int x1; int x2; union { BOOL x0; double x1; struct StringImpl *x2; } x3; struct HashMap<WTF::String, WTF::RefPtr<WTF::JSONImpl::Value, WTF::DumbPtrTraits<WTF::JSONImpl::Value> >, WTF::DefaultHash<WTF::String>, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RefPtr<WTF::JSONImpl::Value, WTF::DumbPtrTraits<WTF::JSONImpl::Value> > > > { struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::RefPtr<WTF::JSONImpl::Value, WTF::DumbPtrTraits<WTF::JSONImpl::Value> > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::RefPtr<WTF::JSONImpl::Value, WTF::DumbPtrTraits<WTF::JSONImpl::Value> > > >, WTF::DefaultHash<WTF::String>, WTF::HashMap<WTF::String, WTF::RefPtr<WTF::JSONImpl::Value, WTF::DumbPtrTraits<WTF::JSONImpl::Value> >, WTF::DefaultHash<WTF::String>, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RefPtr<WTF::JSONImpl::Value, WTF::DumbPtrTraits<WTF::JSONImpl::Value> > > >::KeyValuePairTraits, WTF::HashTraits<WTF::String> > { struct KeyValuePair<WTF::String, WTF::RefPtr<WTF::JSONImpl::Value, WTF::DumbPtrTraits<WTF::JSONImpl::Value> > > *x0; } x0; } x4; struct Vector<WTF::String, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct String *x0; unsigned int x1; unsigned int x2; } x5; } *)a0;
- (double)doubleForKey:(id)a0;
- (struct RefPtr<WTF::JSONImpl::Object, WTF::DumbPtrTraits<WTF::JSONImpl::Object> > { struct Object *x0; })toJSONObject;
- (void)setJSONArray:(struct RefPtr<WTF::JSONImpl::Array, WTF::DumbPtrTraits<WTF::JSONImpl::Array> > { struct Array *x0; } *)a0 forKey:(id)a1;
- (struct RefPtr<WTF::JSONImpl::Array, WTF::DumbPtrTraits<WTF::JSONImpl::Array> > { struct Array *x0; })JSONArrayForKey:(id)a0;

@end
