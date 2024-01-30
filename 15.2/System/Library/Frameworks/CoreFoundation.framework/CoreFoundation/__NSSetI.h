@interface __NSSetI : NSSet {
    unsigned long _used : 58;
    unsigned char _szidx : 6;
    id _list[0];
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (double)clumpingFactor;
- (id)objectEnumerator;
- (BOOL)containsObject:(id)a0;
- (unsigned long long)countForObject:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)mutableCopy;
- (void)getObjects:(id *)a0 count:(unsigned long long)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)enumerateObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)copy;
- (void)dealloc;
- (id)member:(id)a0;
- (double)clumpingInterestingThreshold;

@end
