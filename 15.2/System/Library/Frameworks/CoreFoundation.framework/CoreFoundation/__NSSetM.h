@class state;

@interface __NSSetM : NSMutableSet {
    _Atomic struct __cow_state_t *cow;
    struct { state **objs; union { unsigned long long mutations; struct { unsigned int muts; unsigned int used : 26; unsigned char szidx : 6; } ; } x0; } storage;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)_mutate;
- (double)clumpingFactor;
- (id)objectEnumerator;
- (BOOL)containsObject:(id)a0;
- (void)removeAllObjects;
- (unsigned long long)countForObject:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)mutableCopy;
- (void)getObjects:(id *)a0 count:(unsigned long long)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)enumerateObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addObject:(id)a0;
- (unsigned long long)count;
- (id)copy;
- (void)dealloc;
- (void)removeObject:(id)a0;
- (id)member:(id)a0;
- (double)clumpingInterestingThreshold;

@end
