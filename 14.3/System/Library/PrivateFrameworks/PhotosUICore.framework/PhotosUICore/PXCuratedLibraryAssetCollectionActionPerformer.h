@class PXAssetCollectionReference;

@interface PXCuratedLibraryAssetCollectionActionPerformer : PXCuratedLibraryActionPerformer

@property (readonly, nonatomic) PXAssetCollectionReference *assetCollectionReference;

- (void).cxx_destruct;
- (id)initWithActionType:(id)a0 viewModel:(id)a1;
- (id)initWithActionType:(id)a0 viewModel:(id)a1 assetCollectionReference:(id)a2;
- (void)performActionWithCompletionHandler:(id /* block */)a0;
- (id)localizedTitleForUseCase:(unsigned long long)a0;

@end
