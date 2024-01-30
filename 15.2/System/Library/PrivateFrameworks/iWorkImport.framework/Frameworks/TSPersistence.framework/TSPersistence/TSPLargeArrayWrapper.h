@class TSPAbstractMutableLargeArray;

@interface TSPLargeArrayWrapper : NSMutableArray {
    TSPAbstractMutableLargeArray *_backingStore;
}

- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)removeLastObject;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)addObject:(id)a0;
- (unsigned long long)count;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (id)initWithLargeArray:(id)a0;

@end
