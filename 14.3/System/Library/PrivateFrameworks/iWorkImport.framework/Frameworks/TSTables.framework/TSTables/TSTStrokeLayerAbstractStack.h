@interface TSTStrokeLayerAbstractStack : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } mRWLock;
}

- (void)unlock;
- (id)init;
- (void)dealloc;
- (unsigned long long)count;
- (void)lockForRead;
- (void)lockForWrite;
- (void)enumerateStrokesInRange:(struct TSTSimpleRange { long long x0; unsigned long long x1; })a0 usingBlock:(id /* block */)a1;
- (id)p_strokeLayerEnumeration;
- (id)portalledStrokeLayer;
- (void)enumerateStrokesAndCapsInRange:(struct TSTSimpleRange { long long x0; unsigned long long x1; })a0 usingBlock:(id /* block */)a1;
- (id)lookupStrokeAtIndex:(long long)a0;
- (void)enumerateStrokesFrom:(unsigned int)a0 to:(unsigned int)a1 usingBlock:(id /* block */)a2;
- (void)enumerateStrokesAndCapsFrom:(unsigned int)a0 to:(unsigned int)a1 usingBlock:(id /* block */)a2;

@end
