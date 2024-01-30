@class NSArray, REDependencyGraph;

@interface REOrderingArray : NSObject {
    NSArray *_orderedObjects;
    REDependencyGraph *_dependencyGraph;
    BOOL _needsUpdate;
    unsigned long long _batchCount;
}

@property (readonly, nonatomic) NSArray *comparators;
@property (readonly, nonatomic) unsigned long long count;

- (void)addObject:(id)a0;
- (void)removeObject:(id)a0;
- (void)performBatchUpdates:(id /* block */)a0;
- (unsigned long long)indexOfObject:(id)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)containsObject:(id)a0;
- (void)updateObject:(id)a0;
- (void)_createDependenciesForObject:(id)a0;
- (void)_performOrMarkUpdate;
- (void)_updateContentOrder;
- (id)initWithComparators:(id)a0;
- (void)sortAllObjects;

@end
