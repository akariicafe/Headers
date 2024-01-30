@class state;

@interface __NSDictionaryM : NSMutableDictionary {
    struct { state **buffer; union { struct { unsigned long long mutations; } ; struct { unsigned int muts; unsigned int other; } ; struct { unsigned int mutbits : 31; unsigned char copyKeys : 1; unsigned int used : 25; unsigned char kvo : 1; unsigned char szidx : 6; } ; } x0; } storage;
    _Atomic struct __cow_state_t *cow;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)_mutate;
- (double)_clumpingFactor;
- (void)removeObjectForKey:(id)a0;
- (id)keysOfEntriesWithOptions:(unsigned long long)a0 passingTest:(id /* block */)a1;
- (void)removeAllObjects;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)keyOfEntryWithOptions:(unsigned long long)a0 passingTest:(id /* block */)a1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)mutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)getObjects:(id *)a0 andKeys:(id *)a1 count:(unsigned long long)a2;
- (id)keyEnumerator;
- (id)_cfMutableCopy;
- (void)__apply:(void /* function */ *)a0 context:(void *)a1;
- (void)__setObject:(id)a0 forKey:(id)a1;
- (id)objectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (void)removeEntriesWithOptions:(unsigned long long)a0 passingTest:(id /* block */)a1;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)copy;
- (void)dealloc;
- (void)setObservationInfo:(void *)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (double)_clumpingInterestingThreshold;

@end
