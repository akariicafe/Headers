@interface NSConcretePointerFunctions : NSPointerFunctions {
    struct NSSlice { void **items; BOOL wantsStrong; BOOL wantsWeak; BOOL wantsARC; BOOL shouldCopyIn; BOOL usesStrong; BOOL usesWeak; BOOL usesARC; BOOL usesSentinel; BOOL pointerPersonality; BOOL integerPersonality; BOOL simpleReadClear; void /* function */ *sizeFunction; void /* function */ *hashFunction; void /* function */ *isEqualFunction; void /* function */ *describeFunction; void /* function */ *acquireFunction; void /* function */ *relinquishFunction; void /* function */ *allocateFunction; void /* function */ *freeFunction; void /* function */ *readAt; void /* function */ *clearAt; void /* function */ *storeAt; } slice;
}

+ (void)initializeBackingStore:(struct NSSlice { void **x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; void /* function */ *x17; void /* function */ *x18; void /* function */ *x19; void /* function */ *x20; void /* function */ *x21; void /* function */ *x22; } *)a0 sentinel:(BOOL)a1;
+ (BOOL)initializeSlice:(struct NSSlice { void **x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; void /* function */ *x17; void /* function */ *x18; void /* function */ *x19; void /* function */ *x20; void /* function */ *x21; void /* function */ *x22; } *)a0 withOptions:(unsigned long long)a1;

- (id)initWithOptions:(unsigned long long)a0;
- (void)setDescriptionFunction:(void /* function */ *)a0;
- (BOOL)usesStrongWriteBarrier;
- (void)setSizeFunction:(void /* function */ *)a0;
- (void /* function */ *)sizeFunction;
- (void)setHashFunction:(void /* function */ *)a0;
- (void)setRelinquishFunction:(void /* function */ *)a0;
- (void)setUsesWeakReadAndWriteBarriers:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void)setAcquireFunction:(void /* function */ *)a0;
- (void)setIsEqualFunction:(void /* function */ *)a0;
- (void /* function */ *)isEqualFunction;
- (BOOL)usesWeakReadAndWriteBarriers;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void /* function */ *)relinquishFunction;
- (void /* function */ *)hashFunction;
- (void /* function */ *)descriptionFunction;
- (unsigned long long)hash;
- (void /* function */ *)acquireFunction;
- (void)setUsesStrongWriteBarrier:(BOOL)a0;

@end
