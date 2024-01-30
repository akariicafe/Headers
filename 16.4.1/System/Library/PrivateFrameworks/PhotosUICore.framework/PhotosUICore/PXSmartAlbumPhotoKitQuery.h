@class NSString, NSArray, PHCollectionList, PHPhotoLibrary, PHAssetCollection, PXLabeledValue, NSMutableArray, PXSmartAlbumPhotoKitEditingContext, PLQuery, PXFetchResultCountObserver;
@protocol PXSmartAlbumQueryDelegate;

@interface PXSmartAlbumPhotoKitQuery : NSObject <PXSmartAlbumConditionDelegate, PXFetchResultCountObserverDelegate, PXSmartAlbumQuery> {
    PHAssetCollection *_albumToEdit;
    PHCollectionList *_collectionList;
    PHPhotoLibrary *_photoLibrary;
    PXSmartAlbumPhotoKitEditingContext *_editingContext;
    PLQuery *_query;
    PXFetchResultCountObserver *_fetchResultCountObserver;
}

@property (nonatomic) BOOL canPersistChanges;
@property (retain, nonatomic) NSString *statusString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) NSArray *conjunctionValues;
@property (retain, nonatomic) PXLabeledValue *conjunctionValue;
@property (retain, nonatomic) NSMutableArray *conditions;
@property (weak, nonatomic) id<PXSmartAlbumQueryDelegate> delegate;

+ (void)_createSmartAlbumWithTitle:(id)a0 inCollectionList:(id)a1 query:(id)a2 photoLibrary:(id)a3 completionHandler:(id /* block */)a4;
+ (void)_editSmartAlbum:(id)a0 title:(id)a1 query:(id)a2 completionHandler:(id /* block */)a3;
+ (id)queryWithSmartAlbum:(id)a0 collectionList:(id)a1 photoLibrary:(id)a2 error:(id *)a3;

- (void)persistChangesWithCompletion:(id /* block */)a0;
- (void)removeCondition:(id)a0;
- (id)init;
- (void)fetchResultCountObserver:(id)a0 didChangeFetchResultCount:(long long)a1;
- (void).cxx_destruct;
- (void)_updateFetchResultCountObserver;
- (id)_initWithSmartAlbum:(id)a0 collectionList:(id)a1 photoLibrary:(id)a2 query:(id)a3 editingContext:(id)a4 conditions:(id)a5;
- (void)_updateCanPersistChanges;
- (void)_updateQueryFromConditions;
- (void)_updateStatusString;
- (id)addNewConditionAfterCondition:(id)a0;
- (void)conditionDidChange:(id)a0;
- (id)replaceCondition:(id)a0 withConditionOfType:(long long)a1;

@end
