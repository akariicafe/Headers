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

- (void)rehash;
- (id)dump;
- (void *)existingItemForSetItem:(const void *)a0 forAbsentKey:(const void *)a1;
- (id)objectEnumerator;
- (void)removeObjectForKey:(id)a0;
- (void)replaceItem:(const void *)a0 forExistingKey:(const void *)a1;
- (id)initWithKeyPointerFunctions:(id)a0 valuePointerFunctions:(id)a1 capacity:(unsigned long long)a2;
- (void)_setBackingStore;
- (id)allValues;
- (void)encodeWithCoder:(id)a0;
- (id)allKeys;
- (void)checkCount:(const char *)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)keyPointerFunctions;
- (unsigned long long)getKeys:(const void **)a0 values:(const void **)a1;
- (id)description;
- (id)keyEnumerator;
- (BOOL)mapMember:(const void *)a0 originalKey:(const void **)a1 value:(const void **)a2;
- (void)assign:(unsigned long long)a0 key:(const void *)a1 value:(const void *)a2 isNew:(BOOL)a3;
- (BOOL)containsKeys:(const void **)a0 values:(const void **)a1 count:(unsigned long long)a2;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)realCount;
- (id)init;
- (unsigned long long)rehashAround:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (id)objectForKey:(id)a0;
- (id)valuePointerFunctions;
- (void)raiseCountUnderflowException;
- (unsigned long long)count;
- (unsigned long long)__capacity;
- (id)copy;
- (unsigned long long)hash;
- (void)dealloc;
- (void)setItem:(const void *)a0 forAbsentKey:(const void *)a1;
- (void)removeAllItems;
- (id)initWithKeyOptions:(unsigned long long)a0 valueOptions:(unsigned long long)a1 capacity:(unsigned long long)a2;
- (void)grow;
- (void)setItem:(const void *)a0 forKnownAbsentKey:(const void *)a1;

@end
