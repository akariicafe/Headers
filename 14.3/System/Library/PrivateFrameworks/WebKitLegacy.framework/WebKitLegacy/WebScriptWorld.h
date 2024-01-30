@class WebScriptWorldPrivate;

@interface WebScriptWorld : NSObject {
    WebScriptWorldPrivate *_private;
}

+ (id)world;
+ (id)standardWorld;
+ (id)findOrCreateWorld:(struct DOMWrapperWorld { unsigned int x0; struct VM *x1; struct HashSet<WebCore::WindowProxy *, WTF::DefaultHash<WebCore::WindowProxy *>, WTF::HashTraits<WebCore::WindowProxy *> > { struct HashTable<WebCore::WindowProxy *, WebCore::WindowProxy *, WTF::IdentityExtractor, WTF::DefaultHash<WebCore::WindowProxy *>, WTF::HashTraits<WebCore::WindowProxy *>, WTF::HashTraits<WebCore::WindowProxy *> > { struct WindowProxy **x0; } x0; } x2; struct HashMap<void *, JSC::Weak<JSC::JSObject>, WTF::DefaultHash<void *>, WTF::HashTraits<void *>, WTF::HashTraits<JSC::Weak<JSC::JSObject> > > { struct HashTable<void *, WTF::KeyValuePair<void *, JSC::Weak<JSC::JSObject> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<void *, JSC::Weak<JSC::JSObject> > >, WTF::DefaultHash<void *>, WTF::HashMap<void *, JSC::Weak<JSC::JSObject>, WTF::DefaultHash<void *>, WTF::HashTraits<void *>, WTF::HashTraits<JSC::Weak<JSC::JSObject> > >::KeyValuePairTraits, WTF::HashTraits<void *> > { struct KeyValuePair<void *, JSC::Weak<JSC::JSObject> > *x0; } x0; } x3; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } x4; int x5; BOOL x6; BOOL x7; } *)a0;
+ (id)scriptWorldForGlobalContext:(struct OpaqueJSContext { } *)a0;
+ (id)scriptWorldForJavaScriptContext:(id)a0;

- (id)init;
- (void)dealloc;
- (id)initWithWorld:(struct Ref<WebCore::DOMWrapperWorld, WTF::DumbPtrTraits<WebCore::DOMWrapperWorld> > { struct DOMWrapperWorld *x0; } *)a0;
- (void)unregisterWorld;

@end
