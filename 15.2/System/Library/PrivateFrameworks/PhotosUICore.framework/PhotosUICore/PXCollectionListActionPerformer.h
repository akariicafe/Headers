@class PHAssetCollection, PHCollectionList;

@interface PXCollectionListActionPerformer : PXActionPerformer

@property (retain, nonatomic) PHAssetCollection *createdAssetCollection;
@property (readonly, nonatomic) PHCollectionList *collectionList;

+ (id)localizedTitleForActionType:(id)a0;
+ (BOOL)canPerformActionForCollectionList:(id)a0;

- (void).cxx_destruct;
- (void)performUserInteractionTask;
- (id)initWithActionType:(id)a0 collectionList:(id)a1;
- (void)presentSetupUIForAlbumCreationWithCompletionHandler:(id /* block */)a0;
- (void)handleCreateSharedAlbum;
- (void)createAlbumWithAssets:(id)a0 albumTitle:(id)a1;
- (long long)_albumInsertionIndex;

@end
