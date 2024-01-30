@interface NSConcreteHashTable : NSHashTable <NSSecureCoding> {
    struct NSSlice { void **items; BOOL wantsStrong; BOOL wantsWeak; BOOL wantsARC; BOOL shouldCopyIn; BOOL usesStrong; BOOL usesWeak; BOOL usesARC; BOOL usesSentinel; BOOL pointerPersonality; BOOL integerPersonality; BOOL simpleReadClear; void /* function */ *sizeFunction; void /* function */ *hashFunction; void /* function */ *isEqualFunction; void /* function */ *describeFunction; void /* function */ *acquireFunction; void /* function */ *relinquishFunction; void /* function */ *allocateFunction; void /* function */ *freeFunction; void /* function */ *readAt; void /* function */ *clearAt; void /* function */ *storeAt; } slice;
    unsigned long long count;
    unsigned long long capacity;
    unsigned long long options;
    unsigned long long mutations;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)removeItem:(const void *)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)init;
- (void)hashGrow;
- (unsigned long long)rehashAround:(unsigned long long)a0;
- (void)dealloc;
- (id)copy;
- (id)initWithOptions:(unsigned long long)a0 capacity:(unsigned long long)a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)objectEnumerator;
- (id)description;
- (void)raiseCountUnderflowException;
- (BOOL)isEqual:(id)a0;
- (id)pointerFunctions;
- (void)removeAllItems;
- (unsigned long long)count;
- (void)addObject:(id)a0;
- (void *)getItem:(const void *)a0;
- (void)insertKnownAbsentItem:(const void *)a0;
- (id)allObjects;
- (void)getKeys:(const void **)a0 count:(unsigned long long *)a1;
- (void)rehash;
- (id)initWithPointerFunctions:(id)a0 capacity:(unsigned long long)a1;
- (void)insertItem:(const void *)a0;
- (void)assign:(unsigned long long)a0 key:(const void *)a1;
- (void)encodeWithCoder:(id)a0;

@end
