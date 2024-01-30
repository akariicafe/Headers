@class NSMutableDictionary, ML3DatabaseConnection;

@interface ML3SortMapFaultingEntryArray : NSMutableArray {
    ML3DatabaseConnection *_connection;
    NSMutableDictionary *_dirtyInserts;
}

- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)removeLastObject;
- (void).cxx_destruct;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)initWithConnection:(id)a0;
- (unsigned long long)count;
- (void)addObject:(id)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)enumerateDirtyObjectsUsingBlock:(id /* block */)a0;

@end
