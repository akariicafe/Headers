@class PLAssetContainerListChangeNotification, PLAggregateAlbumList;

@interface PLAggregateAlbumListChangeNotification : PLAssetContainerListChangeNotification {
    PLAggregateAlbumList *_albumList;
    PLAssetContainerListChangeNotification *_note;
    unsigned long long _indexOffet;
}

+ (id)notificationForAggregateAlbumList:(id)a0 fromAlbumListChangeNotification:(id)a1 indexOffset:(unsigned long long)a2;

- (id)deletedIndexes;
- (id)changedIndexes;
- (id)changedObjects;
- (BOOL)shouldReload;
- (id)deletedObjects;
- (id)changedIndexesRelativeToSnapshot;
- (id)insertedObjects;
- (void).cxx_destruct;
- (void)enumerateMovesWithBlock:(id /* block */)a0;
- (unsigned long long)snapshotIndexForContainedObject:(id)a0;
- (BOOL)_getOldSet:(id *)a0 newSet:(id *)a1;
- (void)dealloc;
- (id)insertedIndexes;
- (id)albumList;
- (id)object;
- (id)initWithAggregateAlbumList:(id)a0 fromAlbumListChangeNotification:(id)a1 indexOffset:(unsigned long long)a2;

@end
