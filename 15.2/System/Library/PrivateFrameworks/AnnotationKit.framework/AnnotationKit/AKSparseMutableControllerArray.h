@class NSMutableArray;

@interface AKSparseMutableControllerArray : NSMutableArray {
    NSMutableArray *_backendArray;
}

- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)objectsAtIndexes:(id)a0;
- (void)removeAllObjects;
- (void)removeLastObject;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)addObject:(id)a0;
- (unsigned long long)count;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)removeObject:(id)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)_backFillUntilCount:(unsigned long long)a0;
- (BOOL)containsAnyObjects:(id)a0;

@end
