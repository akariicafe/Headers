@interface NSCountedSet : NSMutableSet {
    id _table;
}

+ (BOOL)supportsSecureCoding;

- (unsigned long long)countForObject:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)addObject:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithArray:(id)a0;
- (void)removeObject:(id)a0;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (id)initWithCoder:(id)a0;
- (id)objectEnumerator;
- (Class)classForCoder;
- (id)member:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (void)removeAllObjects;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)dealloc;
- (id)initWithSet:(id)a0 copyItems:(BOOL)a1;
- (id)init;
- (id)descriptionWithLocale:(id)a0;
- (id)initWithSet:(id)a0;
- (void)getObjects:(id *)a0 count:(unsigned long long)a1;

@end
