@interface NSConcreteMapTable : NSMapTable {
    struct NSSlice { void **items; BOOL wantsStrong; BOOL wantsWeak; BOOL wantsARC; BOOL shouldCopyIn; BOOL usesStrong; BOOL usesWeak; BOOL usesARC; BOOL usesSentinel; BOOL pointerPersonality; BOOL integerPersonality; BOOL simpleReadClear; void /* function */ *sizeFunction; void /* function */ *hashFunction; void /* function */ *isEqualFunction; void /* function */ *describeFunction; void /* function */ *acquireFunction; void /* function */ *relinquishFunction; void /* function */ *allocateFunction; void /* function */ *freeFunction; void /* function */ *readAt; void /* function */ *clearAt; void /* function */ *storeAt; } keys;
    struct NSSlice { void **items; BOOL wantsStrong; BOOL wantsWeak; BOOL wantsARC; BOOL shouldCopyIn; BOOL usesStrong; BOOL usesWeak; BOOL usesARC; BOOL usesSentinel; BOOL pointerPersonality; BOOL integerPersonality; BOOL simpleReadClear; void /* function */ *sizeFunction; void /* function */ *hashFunction; void /* function */ *isEqualFunction; void /* function */ *describeFunction; void /* function */ *acquireFunction; void /* function */ *relinquishFunction; void /* function */ *allocateFunction; void /* function */ *freeFunction; void /* function */ *readAt; void /* function */ *clearAt; void /* function */ *storeAt; } values;
    unsigned long long count;
    unsigned long long capacity;
    unsigned long long keyOptions;
    unsigned long long valueOptions;
    unsigned long long mutations;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } growLock;
    BOOL shouldRehash;
}

+ (BOOL)supportsSecureCoding;

- (id)dump;
- (id)objectForKey:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)keyEnumerator;
- (id)init;
- (void)_setBackingStore;
- (BOOL)mapMember:(const void *)a0 originalKey:(const void **)a1 value:(const void **)a2;
- (unsigned long long)rehashAround:(unsigned long long)a0;
- (void)dealloc;
- (void)checkCount:(const char *)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)copy;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)allValues;
- (id)objectEnumerator;
- (void)grow;
- (id)description;
- (void)raiseCountUnderflowException;
- (id)allKeys;
- (BOOL)isEqual:(id)a0;
- (void)removeAllItems;
- (unsigned long long)count;
- (unsigned long long)getKeys:(const void **)a0 values:(const void **)a1;
- (BOOL)containsKeys:(const void **)a0 values:(const void **)a1 count:(unsigned long long)a2;
- (void *)existingItemForSetItem:(const void *)a0 forAbsentKey:(const void *)a1;
- (id)valuePointerFunctions;
- (void)setItem:(const void *)a0 forAbsentKey:(const void *)a1;
- (void)setItem:(const void *)a0 forKnownAbsentKey:(const void *)a1;
- (id)initWithKeyPointerFunctions:(id)a0 valuePointerFunctions:(id)a1 capacity:(unsigned long long)a2;
- (id)keyPointerFunctions;
- (void)rehash;
- (unsigned long long)__capacity;
- (void)replaceItem:(const void *)a0 forExistingKey:(const void *)a1;
- (void)removeObjectForKey:(id)a0;
- (id)initWithKeyOptions:(unsigned long long)a0 valueOptions:(unsigned long long)a1 capacity:(unsigned long long)a2;
- (void)assign:(unsigned long long)a0 key:(const void *)a1 value:(const void *)a2 isNew:(BOOL)a3;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)realCount;

@end
