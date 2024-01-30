@class JSValue, NSMapTable;

@interface JSManagedValue : NSObject {
    struct Weak<JSC::JSGlobalObject> { struct WeakImpl *m_impl; } m_globalObject;
    struct RefPtr<JSC::JSLock, WTF::DumbPtrTraits<JSC::JSLock> > { struct JSLock *m_ptr; } m_lock;
    struct JSWeakValue { int m_tag; union WeakValueUnion { struct JSValue { union EncodedValueDescriptor { long long asInt64; struct JSCell *ptr; struct { int payload; int tag; } asBits; } u; } primitive; struct Weak<JSC::JSObject> { struct WeakImpl *m_impl; } object; struct Weak<JSC::JSString> { struct WeakImpl *m_impl; } string; } m_value; } m_weakValue;
    NSMapTable *m_owners;
}

@property (readonly) JSValue *value;

+ (id)managedValueWithValue:(id)a0;
+ (id)managedValueWithValue:(id)a0 andOwner:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)didRemoveOwner:(id)a0;
- (void)dealloc;
- (id).cxx_construct;
- (id)initWithValue:(id)a0;
- (void)disconnectValue;
- (void)didAddOwner:(id)a0;

@end
