@interface NSCountedSet : NSMutableSet {
    id _table;
    void *_reserved;
}

+ (BOOL)supportsSecureCoding;

- (unsigned long long)countForObject:(id)a0;
- (void)getObjects:(id *)a0 count:(unsigned long long)a1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)init;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)removeObject:(id)a0;
- (id)member:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)objectEnumerator;
- (unsigned long long)count;
- (id)descriptionWithLocale:(id)a0;
- (id)initWithArray:(id)a0;
- (void)addObject:(id)a0;
- (id)initWithSet:(id)a0;
- (id)initWithSet:(id)a0 copyItems:(BOOL)a1;
- (Class)classForCoder;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;

@end
