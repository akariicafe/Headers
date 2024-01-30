@class offset;

@interface __NSArrayM : NSMutableArray {
    _Atomic struct __cow_state_t *cow;
    struct { offset **list; unsigned int x0; unsigned int size; union { unsigned long long mutations; struct { unsigned int muts; unsigned int used; } ; } state; } storage;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)_mutate;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (unsigned long long)indexOfObjectIdenticalTo:(id)a0;
- (void)removeObjectsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)setObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void)removeAllObjects;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)mutableCopy;
- (id)allObjects;
- (void)removeLastObject;
- (void)exchangeObjectAtIndex:(unsigned long long)a0 withObjectAtIndex:(unsigned long long)a1;
- (void)replaceObjectsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withObjects:(const id *)a1 count:(unsigned long long)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)insertObjects:(const id *)a0 count:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void)enumerateObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addObject:(id)a0;
- (unsigned long long)count;
- (id)copy;
- (void)dealloc;
- (void)removeObjectAtIndex:(unsigned long long)a0;

@end
