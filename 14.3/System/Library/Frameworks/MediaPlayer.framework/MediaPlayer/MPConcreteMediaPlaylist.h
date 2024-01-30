@class MPMediaQuery, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MPConcreteMediaPlaylist : MPMediaPlaylist <NSCopying> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_properties;
    MPMediaQuery *_itemsQuery;
    void *_clusterPlaylist;
}

+ (BOOL)supportsSecureCoding;

- (id)valueForProperty:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (unsigned long long)mediaTypes;
- (id)representativeItem;
- (id)initWithCoder:(id)a0;
- (BOOL)existsInLibrary;
- (void)addMediaItems:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeFirstItem;
- (id)multiverseIdentifier;
- (id)itemsQuery;
- (void)_enumerateItemPersistentIDsUsingBlock:(id /* block */)a0;
- (id)items;
- (void)addItemWithProductID:(id)a0 completionHandler:(id /* block */)a1;
- (id)valuesForProperties:(id)a0;
- (BOOL)_allowsEditing;
- (void)setValue:(id)a0 forProperty:(id)a1 withCompletionBlock:(id /* block */)a2;
- (BOOL)isEqual:(id)a0;
- (void)removeAllItems;
- (void)appendItem:(id)a0 completion:(id /* block */)a1;
- (id)initWithProperties:(id)a0 itemsQuery:(id)a1;
- (void)_updateLibraryForPlaylistEdit:(id)a0;
- (void)replaceItems:(id)a0 completion:(id /* block */)a1;
- (void)replaceItemsWithPersistentIDs:(id)a0 completion:(id /* block */)a1;
- (void)appendItems:(id)a0 completion:(id /* block */)a1;
- (void)endGeneratingGeniusClusterItems;
- (unsigned long long)count;
- (id)mediaLibrary;
- (void)removeItems:(id)a0 atFilteredIndexes:(id)a1 completionBlock:(id /* block */)a2;
- (void)moveItemFromIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1 completionBlock:(id /* block */)a2;
- (void)populateWithSeedItem:(id)a0 completionBlock:(id /* block */)a1;
- (void)populateWithSeedItem:(id)a0 queue:(id)a1 completionBlock:(id /* block */)a2;
- (BOOL)beginGeneratingGeniusClusterItemsWithSeedItems:(id)a0 error:(id *)a1;
- (id)geniusClusterItemsWithCount:(unsigned long long)a0 error:(id *)a1;
- (BOOL)setValue:(id)a0 forProperty:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
