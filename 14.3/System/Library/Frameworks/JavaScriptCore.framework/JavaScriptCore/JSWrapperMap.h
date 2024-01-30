@class NSMutableDictionary, NSMapTable;

@interface JSWrapperMap : NSObject {
    NSMutableDictionary *m_classMap;
    struct unique_ptr<JSC::WeakGCMap<id, JSC::JSObject, WTF::DefaultHash<id>, WTF::HashTraits<id> >, std::__1::default_delete<JSC::WeakGCMap<id, JSC::JSObject, WTF::DefaultHash<id>, WTF::HashTraits<id> > > > { struct __compressed_pair<JSC::WeakGCMap<id, JSC::JSObject, WTF::DefaultHash<id>, WTF::HashTraits<id> > *, std::__1::default_delete<JSC::WeakGCMap<id, JSC::JSObject, WTF::DefaultHash<id>, WTF::HashTraits<id> > > > { struct WeakGCMap<id, JSC::JSObject, WTF::DefaultHash<id>, WTF::HashTraits<id> > *__value_; } __ptr_; } m_cachedJSWrappers;
    NSMapTable *m_cachedObjCWrappers;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)classInfoForClass:(Class)a0;
- (id).cxx_construct;
- (id)objcWrapperForJSValueRef:(struct OpaqueJSValue { } *)a0 inContext:(id)a1;
- (id)initWithGlobalContextRef:(struct OpaqueJSContext { } *)a0;
- (id)jsWrapperForObject:(id)a0 inContext:(id)a1;

@end
