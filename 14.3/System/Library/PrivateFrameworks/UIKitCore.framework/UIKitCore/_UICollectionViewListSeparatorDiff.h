@class NSMutableDictionary, _UICollectionViewListSnapshotter, _UIDataSourceUpdateMap, NSArray;

@interface _UICollectionViewListSeparatorDiff : NSObject {
    _UICollectionViewListSnapshotter *_oldSnapshot;
    _UICollectionViewListSnapshotter *_newSnapshot;
    _UIDataSourceUpdateMap *_map;
    NSMutableDictionary *_insertedIndexPaths;
    NSMutableDictionary *_deletedIndexPaths;
    NSArray *_insertedSeparators;
    NSArray *_deletedSeparators;
}

- (void).cxx_destruct;
- (id)initWithOldSnapshot:(id)a0 newSnapshot:(id)a1 updateItems:(id)a2;
- (void)_prepareInsertsAndDeletes;
- (id)indexPathsToDeleteForSeparators;
- (void)_mapUpdateItems:(id)a0;
- (id)indexPathsToInsertForSeparators;

@end
