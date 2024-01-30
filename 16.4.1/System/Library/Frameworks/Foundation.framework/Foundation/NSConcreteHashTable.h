@interface NSConcreteHashTable : NSHashTable <NSSecureCoding> {
    struct NSSlice { void **items; struct NSSliceExternalAcquisitionProperties *acquisitionProps; struct NSSliceExternalPersonalityProperties *personalityProps; struct NSSliceInternalProperties *internalProps; } slice;
    unsigned long long count;
    unsigned long long capacity;
    unsigned long long mutations;
    unsigned long options : 63;
    unsigned char hasDynamicSlice : 1;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)removeItem:(const void *)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)addObject:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)rehashAround:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (id)objectEnumerator;
- (void)raiseCountUnderflowException;
- (void)hashGrow;
- (void)removeAllItems;
- (unsigned long long)count;
- (void)insertItem:(const void *)a0;
- (void)dealloc;
- (id)initWithPointerFunctions:(id)a0 capacity:(unsigned long long)a1;
- (BOOL)isEqual:(id)a0;
- (void)getKeys:(const void **)a0 count:(unsigned long long *)a1;
- (unsigned long long)hash;
- (id)copy;
- (id)allObjects;
- (void *)getItem:(const void *)a0;
- (id)init;
- (void)assign:(unsigned long long)a0 key:(const void *)a1;
- (void)insertKnownAbsentItem:(const void *)a0;
- (id)description;
- (id)pointerFunctions;
- (id)initWithOptions:(unsigned long long)a0 capacity:(unsigned long long)a1;
- (void)rehash;

@end
