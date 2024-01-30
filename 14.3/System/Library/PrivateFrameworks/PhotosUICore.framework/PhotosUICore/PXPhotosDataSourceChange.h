@class PHFetchResultChangeDetails, NSIndexSet, NSArray, PHChange, PXSectionedDataSourceChangeDetails, NSDictionary;

@interface PXPhotosDataSourceChange : NSObject {
    long long _previousCollectionsCount;
    NSDictionary *_assetCollectionToSectionCache;
    PHFetchResultChangeDetails *_collectionListChangeDetails;
    NSDictionary *_assetCollectionChangeDetails;
    BOOL _prepared;
    NSIndexSet *_deletedSections;
    NSIndexSet *_insertedSections;
    NSIndexSet *_changedSections;
    NSArray *_deletedIndexPaths;
    NSArray *_insertedIndexPaths;
    NSArray *_changedIndexPaths;
    NSArray *_contentChangedIndexPaths;
    NSArray *_favoriteChangedIndexPaths;
    BOOL _changesAreNoOp;
}

@property (readonly) BOOL hasIncrementalChanges;
@property (readonly) BOOL changesAreNoOp;
@property (readonly, copy) NSIndexSet *deletedSections;
@property (readonly, copy) NSIndexSet *insertedSections;
@property (readonly, copy) NSIndexSet *changedSections;
@property (readonly, copy) NSArray *deletedIndexPaths;
@property (readonly, copy) NSArray *insertedIndexPaths;
@property (readonly, copy) NSArray *changedIndexPaths;
@property (readonly, copy) NSArray *contentChangedIndexPaths;
@property (readonly, copy) NSArray *favoriteChangedIndexPaths;
@property (readonly, weak) PHChange *originatingPhotoLibraryChange;
@property (readonly) PXSectionedDataSourceChangeDetails *sectionedDataSourceChangeDetails;
@property (readonly, nonatomic) NSIndexSet *sectionsWithKeyAssetChanges;

- (void).cxx_destruct;
- (id)initWithFromIdentifier:(unsigned long long)a0 toIdentifier:(unsigned long long)a1;
- (BOOL)affectsSectionsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)_shouldPerformFullReloadForCollectionListChangeNotifications:(id)a0 collectionChangeNotifications:(id)a1;
- (id)description;
- (id)initWithIncrementalChanges:(id)a0 assetCollectionChangeDetails:(id)a1 sectionsWithKeyAssetChanges:(id)a2 previousCollectionsCount:(long long)a3 assetCollectionToSectionCache:(id)a4 originatingPhotoLibraryChange:(id)a5 fromIdentifier:(unsigned long long)a6 toIdentifier:(unsigned long long)a7;
- (id)indexPathAfterRevertingIncrementalChangeDetailsFromIndexPath:(id)a0;
- (void)prepareIfNeeded;
- (void)_prepareIncrementalDetails;
- (id)indexPathAfterApplyingIncrementalChangesToIndexPath:(id)a0;

@end
