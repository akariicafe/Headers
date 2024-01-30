@class NSArray, NSMapTable;

@interface REDependencyGraph : NSObject <NSCopying> {
    NSMapTable *_nodes;
}

@property (readonly, nonatomic) NSArray *allItems;
@property (readonly, nonatomic) unsigned long long count;

- (void)_enumerateSortedFirstLevelDependenciesOfItem:(id)a0 usingComparator:(id /* block */)a1 withBlock:(id /* block */)a2;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (void)addItem:(id)a0;
- (void)enumerateDependenciesOfItem:(id)a0 usingBlock:(id /* block */)a1;
- (void)removeItem:(id)a0;
- (id)topologicalSortedItems;
- (id)initWithPointerFunctions:(unsigned long long)a0;
- (id)description;
- (void)_visitNode:(id)a0 visited:(id)a1 temporary:(id)a2 result:(id)a3 comparator:(id /* block */)a4 warn:(BOOL)a5;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)item:(id)a0 isDependencyOfItem:(id)a1;
- (void)markItem:(id)a0 dependentOnItem:(id)a1;
- (BOOL)containsItem:(id)a0;
- (id)topologicalSortedItemsWithComparator:(id /* block */)a0;

@end
