@interface VUIMediaLibraryUtilities : NSObject

+ (id)_sortIndexesForObjects:(id)a0 titleForObjectBlock:(id /* block */)a1;
+ (id)groupingForMediaEntities:(id)a0 groupingKeyPath:(id)a1 groupingSortComparator:(id /* block */)a2 performDefaultSort:(BOOL)a3 sortIndexPropertyKey:(id)a4;
+ (id /* block */)mediaItemEntityTypesSortComparator;
+ (id)sortIndexesForGrouping:(id)a0;
+ (id)sortIndexesForMediaEntities:(id)a0 sortIndexPropertyKey:(id)a1;

@end
