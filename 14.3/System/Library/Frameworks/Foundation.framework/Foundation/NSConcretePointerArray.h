@interface NSConcretePointerArray : NSPointerArray {
    struct NSSlice { void **items; BOOL wantsStrong; BOOL wantsWeak; BOOL wantsARC; BOOL shouldCopyIn; BOOL usesStrong; BOOL usesWeak; BOOL usesARC; BOOL usesSentinel; BOOL pointerPersonality; BOOL integerPersonality; BOOL simpleReadClear; void /* function */ *sizeFunction; void /* function */ *hashFunction; void /* function */ *isEqualFunction; void /* function */ *describeFunction; void /* function */ *acquireFunction; void /* function */ *relinquishFunction; void /* function */ *allocateFunction; void /* function */ *freeFunction; void /* function */ *readAt; void /* function */ *clearAt; void /* function */ *storeAt; } slice;
    unsigned long long count;
    unsigned long long capacity;
    unsigned long long options;
    unsigned long long mutations;
    BOOL needsCompaction;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithOptions:(unsigned long long)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)_markNeedsCompaction;
- (id)init;
- (void)compact;
- (void)setCount:(unsigned long long)a0;
- (void)replacePointerAtIndex:(unsigned long long)a0 withPointer:(void *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)removePointer:(void *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (void *)pointerAtIndex:(unsigned long long)a0;
- (void)addPointer:(void *)a0;
- (unsigned long long)indexOfPointer:(void *)a0;
- (void)arrayGrow:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)pointerFunctions;
- (void)removePointerAtIndex:(unsigned long long)a0;
- (id)initWithPointerFunctions:(id)a0;
- (unsigned long long)count;
- (void)insertPointer:(void *)a0 atIndex:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;

@end
