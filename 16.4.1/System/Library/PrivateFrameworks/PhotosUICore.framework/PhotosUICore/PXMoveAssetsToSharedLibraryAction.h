@class NSArray;

@interface PXMoveAssetsToSharedLibraryAction : PXAssetsAction {
    NSArray *_suggestedAssets;
}

- (void)performAction:(id /* block */)a0;
- (id)actionIdentifier;
- (void).cxx_destruct;
- (id)initWithAssets:(id)a0;
- (id)localizedActionName;
- (void)performUndo:(id /* block */)a0;

@end
