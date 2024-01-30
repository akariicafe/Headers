@interface __NSCFSet : NSMutableSet {
    unsigned char _cfinfo[4];
    unsigned int _rc;
    unsigned int _bits[4];
    void *_callbacks;
    id *_values;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (void)getObjects:(id *)a0;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (void)removeObject:(id)a0;
- (unsigned long long)retainCount;
- (id)member:(id)a0;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)objectEnumerator;
- (id)retain;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)count;
- (void)addObject:(id)a0;
- (void)removeAllObjects;
- (Class)classForCoder;
- (unsigned long long)_trueCount;

@end
