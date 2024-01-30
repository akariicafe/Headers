@class NSMapTable;

@interface JSVirtualMachine : NSObject {
    struct OpaqueJSContextGroup { } *m_group;
    struct Lock { struct Atomic<unsigned char> { struct atomic<unsigned char> { struct __cxx_atomic_impl<unsigned char, std::__1::__cxx_atomic_base_impl<unsigned char> > { _Atomic unsigned char __a_value; } __a_; } value; } m_byte; } m_externalDataMutex;
    NSMapTable *m_contextCache;
    NSMapTable *m_externalObjectGraph;
    NSMapTable *m_externalRememberedSet;
}

@property (readonly) struct OpaqueJSContextGroup { } *JSContextGroupRef;

+ (id)virtualMachineWithContextGroupRef:(struct OpaqueJSContextGroup { } *)a0;
+ (unsigned long long)setNumberOfDFGCompilerThreads:(unsigned long long)a0;
+ (void)setCrashOnVMCreation:(BOOL)a0;
+ (unsigned long long)setNumberOfFTLCompilerThreads:(unsigned long long)a0;

- (void)addExternalRememberedObject:(id)a0;
- (id)externalObjectGraph;
- (id)init;
- (BOOL)isOldExternalObject:(id)a0;
- (void)removeManagedReference:(id)a0 withOwner:(id)a1;
- (void)dealloc;
- (id)contextForGlobalContextRef:(struct OpaqueJSContext { } *)a0;
- (id).cxx_construct;
- (struct Lock { struct Atomic<unsigned char> { struct atomic<unsigned char> { struct __cxx_atomic_impl<unsigned char, std::__1::__cxx_atomic_base_impl<unsigned char> > { _Atomic unsigned char x0; } x0; } x0; } x0; } *)externalDataMutex;
- (void)shrinkFootprintWhenIdle;
- (BOOL)isWebThreadAware;
- (id)initWithContextGroupRef:(struct OpaqueJSContextGroup { } *)a0;
- (void)addManagedReference:(id)a0 withOwner:(id)a1;
- (void)addContext:(id)a0 forGlobalContextRef:(struct OpaqueJSContext { } *)a1;
- (id)externalRememberedSet;

@end
