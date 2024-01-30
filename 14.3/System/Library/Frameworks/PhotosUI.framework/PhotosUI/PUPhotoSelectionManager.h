@class NSHashTable, NSArray, NSSet, NSOrderedSet, NSDictionary, NSMutableSet, PXSelectionSnapshot, NSMapTable;
@protocol PHAssetCollectionDataSource;

@interface PUPhotoSelectionManager : NSObject <NSCopying> {
    NSHashTable *_changeObservers;
    NSMapTable *_selectionEntriesByAssetCollection;
    NSMutableSet *_uniqueAssetSelection;
    long long _selectionChangeCount;
}

@property (readonly, nonatomic) long long options;
@property (weak, nonatomic) id<PHAssetCollectionDataSource> dataSource;
@property (readonly, nonatomic) BOOL isAnyAssetSelected;
@property (readonly, nonatomic) NSSet *selectedAssets;
@property (readonly, nonatomic) NSOrderedSet *orderedSelectedAssets;
@property (readonly, nonatomic) NSDictionary *selectedAssetsByAssetCollection;
@property (readonly, nonatomic) NSArray *selectedAssetCollections;
@property (readonly, nonatomic) PXSelectionSnapshot *selectionSnapshot;

- (void)registerChangeObserver:(id)a0;
- (id)initWithOptions:(long long)a0;
- (void)unregisterChangeObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct PXAssetMediaTypeCount { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; })requestAssetsMediaTypeCount;
- (void)selectAssetAtIndex:(unsigned long long)a0 inAssetCollection:(id)a1;
- (void)selectAllAssetsInAssetCollections:(id)a0;
- (id)selectedAssetsWithAssetCollectionOrdering:(id)a0;
- (void)deselectAllAssets;
- (id)_selectionEntryForAssetCollection:(id)a0 createIfNeeded:(BOOL)a1;
- (void)deselectAssetAtIndex:(unsigned long long)a0 inAssetCollection:(id)a1;
- (void)deselectAssetsAtIndexes:(id)a0 inAssetCollection:(id)a1;
- (void)deselectAllAssetsInAssetCollections:(id)a0;
- (BOOL)isAssetAtIndexSelected:(unsigned long long)a0 inAssetCollection:(id)a1;
- (BOOL)isAnyAssetSelectedInAssetCollections:(id)a0;
- (BOOL)areAllAssetsSelectedInAssetCollections:(id)a0;
- (id)selectedAssetIndexesWithAssetCollectionOrdering:(id)a0;
- (void)enumerateSelectedAssetsWithAssetCollectionOrdering:(id)a0 block:(id /* block */)a1;
- (id)localizedSelectionString;
- (void)handlePhotoLibraryChange:(id)a0;
- (void)invalidateAllAssetIndexes;
- (void)_beginSelectionChange;
- (void)_endSelectionChange;
- (BOOL)_shouldUniqueAssets;
- (BOOL)isAnyAssetSelectedInAssetCollection:(id)a0;
- (BOOL)areAllAssetsSelectedInAssetCollection:(id)a0;
- (void)selectAssetsAtIndexes:(id)a0 inAssetCollection:(id)a1;

@end
