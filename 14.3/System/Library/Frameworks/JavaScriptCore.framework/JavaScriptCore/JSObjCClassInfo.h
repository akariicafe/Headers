@interface JSObjCClassInfo : NSObject {
    Class m_class;
    BOOL m_block;
    struct NakedPtr<OpaqueJSClass> { struct OpaqueJSClass *m_ptr; } m_classRef;
    struct Weak<JSC::JSObject> { struct WeakImpl *m_impl; } m_prototype;
    struct Weak<JSC::JSObject> { struct WeakImpl *m_impl; } m_constructor;
    struct Weak<JSC::Structure> { struct WeakImpl *m_impl; } m_structure;
}

- (void).cxx_destruct;
- (void)dealloc;
- (struct JSObject { unsigned int x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; struct AuxiliaryBarrier<JSC::Butterfly *> { struct Butterfly *x0; } x5; } *)wrapperForObject:(id)a0 inContext:(id)a1;
- (struct Structure { unsigned int x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; struct StructureIDBlob { union { struct { unsigned int x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; } x0; struct { int x0; int x1; } x1; long long x2; } x0; } x5; unsigned short x6; unsigned char x7; struct Lock { struct Atomic<unsigned char> { struct atomic<unsigned char> { struct __cxx_atomic_impl<unsigned char, std::__1::__cxx_atomic_base_impl<unsigned char> > { _Atomic unsigned char x0; } x0; } x0; } x0; } x8; unsigned int x9; struct WriteBarrier<JSC::JSGlobalObject, WTF::DumbPtrTraits<JSC::JSGlobalObject> > { struct JSGlobalObject *x0; } x10; struct WriteBarrier<JSC::Unknown, WTF::DumbValueTraits<JSC::Unknown> > { long long x0; } x11; struct WriteBarrier<JSC::StructureChain, WTF::DumbPtrTraits<JSC::StructureChain> > { struct StructureChain *x0; } x12; struct WriteBarrier<JSC::JSCell, WTF::DumbPtrTraits<JSC::JSCell> > { struct JSCell *x0; } x13; struct RefPtr<WTF::UniquedStringImpl, WTF::DumbPtrTraits<WTF::UniquedStringImpl> > { struct UniquedStringImpl *x0; } x14; struct ClassInfo *x15; struct StructureTransitionTable { long long x0; } x16; struct WriteBarrier<JSC::PropertyTable, WTF::DumbPtrTraits<JSC::PropertyTable> > { struct PropertyTable *x0; } x17; struct InlineWatchpointSet { unsigned long long x0; } x18; unsigned short x19; unsigned short x20; unsigned int x21; struct TinyBloomFilter { unsigned long long x0; } x22; } *)structureInContext:(id)a0;
- (struct pair<JSC::JSObject *, JSC::JSObject *> { struct JSObject *x0; struct JSObject *x1; })allocateConstructorAndPrototypeInContext:(id)a0;
- (id).cxx_construct;
- (struct JSObject { unsigned int x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; struct AuxiliaryBarrier<JSC::Butterfly *> { struct Butterfly *x0; } x5; } *)constructorInContext:(id)a0;
- (struct JSObject { unsigned int x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; struct AuxiliaryBarrier<JSC::Butterfly *> { struct Butterfly *x0; } x5; } *)prototypeInContext:(id)a0;
- (id)initForClass:(Class)a0;

@end
