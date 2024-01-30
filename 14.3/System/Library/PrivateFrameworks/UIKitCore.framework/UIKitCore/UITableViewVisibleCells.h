@class NSMutableArray;

@interface UITableViewVisibleCells : NSMutableArray {
    NSMutableArray *_array;
}

- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (id)_array;
- (void)removeLastObject;
- (void).cxx_destruct;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (unsigned long long)count;
- (void)addObject:(id)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0;

@end
