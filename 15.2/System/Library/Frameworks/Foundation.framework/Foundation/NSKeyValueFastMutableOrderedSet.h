@class NSKeyValueMutatingOrderedSetMethodSet;

@interface NSKeyValueFastMutableOrderedSet : NSKeyValueMutableOrderedSet {
    NSKeyValueMutatingOrderedSetMethodSet *_mutatingMethods;
}

- (void)removeObjectsAtIndexes:(id)a0;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)replaceObjectsAtIndexes:(id)a0 withObjects:(id)a1;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)_proxyInitWithContainer:(id)a0 getter:(id)a1;
- (void)_proxyNonGCFinalize;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)insertObjects:(id)a0 atIndexes:(id)a1;

@end
