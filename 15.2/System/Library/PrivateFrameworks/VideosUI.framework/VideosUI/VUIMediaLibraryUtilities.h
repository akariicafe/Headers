@interface VUIMediaLibraryUtilities : NSObject

+ (id)sortIndexesForMediaEntities:(id)a0 sortIndexPropertyKey:(id)a1;
+ (id)groupingForMediaEntities:(id)a0 groupingKeyPath:(id)a1 groupingSortComparator:(id /* block */)a2 performDefaultSort:(BOOL)a3 sortIndexPropertyKey:(id)a4;
+ (id)sortIndexesForGrouping:(id)a0;
+ (id /* block */)mediaItemEntityTypesSortComparator;
+ (id)_sortIndexesForObjects:(id)a0 titleForObjectBlock:(id /* block */)a1;

@end
