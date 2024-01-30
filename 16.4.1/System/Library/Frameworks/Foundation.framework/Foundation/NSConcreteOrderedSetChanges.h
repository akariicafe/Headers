@class isMutable;

@interface NSConcreteOrderedSetChanges : NSOrderedSetChanges {
    struct { isMutable *objects; BOOL x0; struct { struct _NSOrderedChange *buffer; unsigned long long availableIndex; unsigned long long capacity; unsigned long long changesIndex; unsigned long long lastIndex; unsigned long long count; } list; } _changes;
}

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (unsigned long long)changeCount;
- (void)addChange:(id)a0;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (void)dealloc;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)init;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)sortRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 options:(unsigned long long)a1 usingComparator:(id /* block */)a2;
- (void)_enumerateChanges:(unsigned long long)a0 stop:(BOOL *)a1 usingBlock:(id /* block */)a2;
- (void)enumerateChanges:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)enumerateChangesUsingBlock:(id /* block */)a0;

@end
