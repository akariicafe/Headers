@class NSMutableOrderedSet;

@interface NSKeyValueNotifyingMutableOrderedSet : NSKeyValueMutableOrderedSet {
    NSMutableOrderedSet *_mutableOrderedSet;
}

+ (id)_proxyShare;

- (void)removeObjectsAtIndexes:(id)a0;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)replaceObjectsAtIndexes:(id)a0 withObjects:(id)a1;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)objectsAtIndexes:(id)a0;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)_proxyInitWithContainer:(id)a0 getter:(id)a1;
- (unsigned long long)count;
- (void)_proxyNonGCFinalize;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)insertObjects:(id)a0 atIndexes:(id)a1;
- (unsigned long long)indexOfObject:(id)a0;

@end
