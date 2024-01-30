@class PLAssetContainerListChangeNotification, PLAggregateAlbumList;

@interface PLAggregateAlbumListChangeNotification : PLAssetContainerListChangeNotification {
    PLAggregateAlbumList *_albumList;
    PLAssetContainerListChangeNotification *_note;
    unsigned long long _indexOffet;
}

+ (id)notificationForAggregateAlbumList:(id)a0 fromAlbumListChangeNotification:(id)a1 indexOffset:(unsigned long long)a2;

- (id)deletedIndexes;
- (id)insertedIndexes;
- (BOOL)_getOldSet:(id *)a0 newSet:(id *)a1;
- (id)albumList;
- (void).cxx_destruct;
- (id)changedIndexesRelativeToSnapshot;
- (void)dealloc;
- (id)insertedObjects;
- (id)object;
- (void)enumerateMovesWithBlock:(id /* block */)a0;
- (BOOL)shouldReload;
- (unsigned long long)snapshotIndexForContainedObject:(id)a0;
- (id)changedIndexes;
- (id)deletedObjects;
- (id)initWithAggregateAlbumList:(id)a0 fromAlbumListChangeNotification:(id)a1 indexOffset:(unsigned long long)a2;
- (id)changedObjects;

@end
