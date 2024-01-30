@interface TSTStrokeLayerAbstractStack : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } mRWLock;
}

- (void)unlock;
- (unsigned long long)count;
- (void)dealloc;
- (id)init;
- (void)lockForRead;
- (void)lockForWrite;
- (id)mutableStrokeLayerWithContext:(id)a0 subtractingDefaultsFrom:(id)a1 forRange:(struct TSTSimpleRange { long long x0; unsigned long long x1; })a2;
- (void)enumerateStrokesAndCapsFrom:(unsigned int)a0 to:(unsigned int)a1 usingBlock:(id /* block */)a2;
- (void)enumerateStrokesAndCapsInRange:(struct TSTSimpleRange { long long x0; unsigned long long x1; })a0 usingBlock:(id /* block */)a1;
- (void)enumerateStrokesFrom:(unsigned int)a0 to:(unsigned int)a1 usingBlock:(id /* block */)a2;
- (void)enumerateStrokesInRange:(struct TSTSimpleRange { long long x0; unsigned long long x1; })a0 usingBlock:(id /* block */)a1;
- (void)enumerateWidthsInRange:(struct TSTSimpleRange { long long x0; unsigned long long x1; })a0 usingBlock:(id /* block */)a1;
- (id)lookupStrokeAtIndex:(long long)a0;
- (struct vector<TSTStrokeLayer *__unsafe_unretained, std::allocator<TSTStrokeLayer *__unsafe_unretained>> { id *x0; id *x1; struct __compressed_pair<TSTStrokeLayer *__unsafe_unretained *, std::allocator<TSTStrokeLayer *__unsafe_unretained>> { id *x0; } x2; })p_strokeLayerVector;
- (id)portalledStrokeLayer;

@end
