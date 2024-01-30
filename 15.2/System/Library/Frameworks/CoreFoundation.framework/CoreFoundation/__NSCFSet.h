@interface __NSCFSet : NSMutableSet {
    unsigned char _cfinfo[4];
    unsigned int _rc;
    unsigned int _bits[4];
    void *_callbacks;
    id *_values;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)objectEnumerator;
- (void)removeAllObjects;
- (unsigned long long)retainCount;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (id)description;
- (BOOL)_isDeallocating;
- (BOOL)isEqual:(id)a0;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addObject:(id)a0;
- (unsigned long long)count;
- (unsigned long long)_trueCount;
- (void)getObjects:(id *)a0;
- (unsigned long long)hash;
- (void)removeObject:(id)a0;
- (BOOL)_tryRetain;
- (oneway void)release;
- (id)member:(id)a0;

@end
