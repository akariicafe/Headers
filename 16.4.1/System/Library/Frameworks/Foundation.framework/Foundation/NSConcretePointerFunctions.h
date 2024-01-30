@interface NSConcretePointerFunctions : NSPointerFunctions {
    struct NSSlice { void **items; struct NSSliceExternalAcquisitionProperties *acquisitionProps; struct NSSliceExternalPersonalityProperties *personalityProps; struct NSSliceInternalProperties *internalProps; } slice;
}

+ (void)initializeBackingStore:(struct NSSlice { void **x0; struct NSSliceExternalAcquisitionProperties *x1; struct NSSliceExternalPersonalityProperties *x2; struct NSSliceInternalProperties *x3; } *)a0 sentinel:(BOOL)a1 dynamic:(BOOL)a2;
+ (BOOL)initializeSlice:(struct NSSlice { void **x0; struct NSSliceExternalAcquisitionProperties *x1; struct NSSliceExternalPersonalityProperties *x2; struct NSSliceInternalProperties *x3; } *)a0 withOptions:(unsigned long long)a1;

- (void /* function */ *)isEqualFunction;
- (BOOL)usesWeakReadAndWriteBarriers;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void /* function */ *)sizeFunction;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void /* function */ *)hashFunction;
- (unsigned long long)hash;
- (void)setRelinquishFunction:(void /* function */ *)a0;
- (void)setUsesWeakReadAndWriteBarriers:(BOOL)a0;
- (BOOL)usesStrongWriteBarrier;
- (id)init;
- (void)setAcquireFunction:(void /* function */ *)a0;
- (void)setIsEqualFunction:(void /* function */ *)a0;
- (void /* function */ *)relinquishFunction;
- (void /* function */ *)descriptionFunction;
- (void)setSizeFunction:(void /* function */ *)a0;
- (void)setUsesStrongWriteBarrier:(BOOL)a0;
- (id)initWithOptions:(unsigned long long)a0;
- (void /* function */ *)acquireFunction;
- (void)setHashFunction:(void /* function */ *)a0;
- (void)setDescriptionFunction:(void /* function */ *)a0;

@end
