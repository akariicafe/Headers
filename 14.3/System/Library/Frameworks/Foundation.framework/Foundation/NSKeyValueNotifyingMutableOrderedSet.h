@class NSMutableOrderedSet;

@interface NSKeyValueNotifyingMutableOrderedSet : NSKeyValueMutableOrderedSet {
    NSMutableOrderedSet *_mutableOrderedSet;
}

+ (id)_proxyShare;

- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)removeObjectsAtIndexes:(id)a0;
- (void)replaceObjectsAtIndexes:(id)a0 withObjects:(id)a1;
- (id)objectsAtIndexes:(id)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_proxyNonGCFinalize;
- (unsigned long long)count;
- (id)_proxyInitWithContainer:(id)a0 getter:(id)a1;
- (unsigned long long)indexOfObject:(id)a0;
- (void)insertObjects:(id)a0 atIndexes:(id)a1;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0;

@end
