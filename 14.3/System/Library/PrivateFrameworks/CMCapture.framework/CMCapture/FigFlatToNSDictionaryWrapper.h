@interface FigFlatToNSDictionaryWrapper : NSDictionary {
    struct OpaqueFigFlatDictionary { } *_flatDictionary;
    struct OpaqueFigFlatDictionaryKeySpec { } *_keySpec;
    int _keySpace;
    void *_dictionaryBacking;
    void *_exportedKeySpec;
    id /* block */ _deallocatorBlock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lazyInitializationMutex;
}

- (id)objectForKey:(id)a0;
- (id)keyEnumerator;
- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (void)dealloc;
- (id)initLazilyWithFlatDictionaryBacking:(void *)a0 exportedKeySpec:(void *)a1 deallocatorBlock:(id /* block */)a2;
- (BOOL)_ensureFlatDictionaryIsInitialized;
- (id)arrayForFlatDictionaryArrayDataKey:(struct { int x0; int x1; char *x2; int x3; unsigned long long x4; void *x5; } *)a0;
- (id)initWithFlatDictionary:(struct OpaqueFigFlatDictionary { } *)a0 keySpec:(struct OpaqueFigFlatDictionaryKeySpec { } *)a1;
- (unsigned long long)count;

@end
