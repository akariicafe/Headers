@class NSArray, NSString, PHManualFetchResult;

@interface PUAssetHidingHelper : NSObject <PXPhotoLibraryUIChangeObserver> {
    BOOL _areAllAssetsHidden;
    BOOL _didCheckAllAssetHidden;
    BOOL _canToogleAssetsVisibility;
    BOOL _didCheckCanToogleAssetsVisibility;
}

@property (retain, nonatomic, setter=_setAssetsFetchResult:) PHManualFetchResult *_assetsFetchResults;
@property (copy, nonatomic) NSArray *assets;
@property (readonly, nonatomic) BOOL isHiding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)photoLibraryDidChangeOnMainQueue:(id)a0;
- (id)prepareForPhotoLibraryChange:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)_areAllAssetsHidden;
- (void)_prepareAssetsVisibilityValueIfNeeded;
- (BOOL)canToggleAssetsVisibility;
- (id)menuItemTitleForTogglingAssetsVisibility;
- (void)applyHiddenState:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id)alertControllerForTogglingAssetsVisibilityWithCompletionHandler:(id /* block */)a0;
- (id)attemptTogglingAssetsVisibilityFromViewController:(id)a0 sourceView:(id)a1 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 completionHandler:(id /* block */)a3;

@end
