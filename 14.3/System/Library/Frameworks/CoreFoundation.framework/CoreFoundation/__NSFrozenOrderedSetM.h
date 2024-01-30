@class NSMutableArray;

@interface __NSFrozenOrderedSetM : NSOrderedSet {
    _Atomic struct __cow_state_t *cow;
    struct { struct __CFBasicHash *set; NSMutableArray *array; } storage;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (unsigned long long)countForObject:(id)a0;
- (id)mutableCopy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)copy;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (unsigned long long)indexOfObject:(id)a0;
- (void)enumerateObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (BOOL)containsObject:(id)a0;
- (id)objectAtIndex:(unsigned long long)a0;

@end
