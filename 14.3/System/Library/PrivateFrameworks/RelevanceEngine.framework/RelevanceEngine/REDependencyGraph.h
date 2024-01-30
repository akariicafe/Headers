@class NSArray, NSMapTable;

@interface REDependencyGraph : NSObject <NSCopying> {
    NSMapTable *_nodes;
}

@property (readonly, nonatomic) NSArray *allItems;
@property (readonly, nonatomic) unsigned long long count;

- (void)removeItem:(id)a0;
- (void)addItem:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)description;
- (BOOL)containsItem:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithPointerFunctions:(unsigned long long)a0;
- (void)_enumerateSortedFirstLevelDependenciesOfItem:(id)a0 usingComparator:(id /* block */)a1 withBlock:(id /* block */)a2;
- (void)markItem:(id)a0 dependentOnItem:(id)a1;
- (BOOL)item:(id)a0 isDependencyOfItem:(id)a1;
- (void)enumerateDependenciesOfItem:(id)a0 usingBlock:(id /* block */)a1;
- (id)topologicalSortedItemsWithComparator:(id /* block */)a0;
- (void)_visitNode:(id)a0 visited:(id)a1 temporary:(id)a2 result:(id)a3 comparator:(id /* block */)a4 warn:(BOOL)a5;
- (id)topologicalSortedItems;

@end
