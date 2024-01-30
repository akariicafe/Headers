@class PHAssetCollection, PHCollectionList, PHFetchResult;

@interface PXCollectionListActionPerformer : PXActionPerformer

@property (nonatomic) unsigned long long collectionActionType;
@property (retain, nonatomic) PHAssetCollection *createdAssetCollection;
@property (readonly, nonatomic) PHCollectionList *collectionList;
@property (readonly, nonatomic) PHFetchResult *parentCollectionListFetchResult;

+ (BOOL)canPerformActionForCollectionList:(id)a0;

- (void)performUserInteractionTask;
- (void).cxx_destruct;
- (id)initWithActionType:(id)a0 collectionList:(id)a1 fetchResult:(id)a2;
- (void)createAlbumWithAssets:(id)a0 albumTitle:(id)a1;
- (long long)_albumInsertionIndex;
- (void)_albumCreationDidBegin;
- (id)initWithActionType:(id)a0 collectionList:(id)a1;
- (void)presentSetupUIForAlbumCreationWithCompletionHandler:(id /* block */)a0;
- (void)handleCreateAlbum;
- (void)handleCreateSharedAlbum;
- (void)handleCreateFolder;
- (void)handleCreateSmartAlbum;

@end
