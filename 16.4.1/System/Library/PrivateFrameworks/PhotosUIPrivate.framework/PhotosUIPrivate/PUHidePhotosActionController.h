@class NSArray, NSUndoManager, PXHideAssetsAction;

@interface PUHidePhotosActionController : NSObject {
    PXHideAssetsAction *_action;
}

@property (readonly, copy, nonatomic) NSArray *assets;
@property (readonly, nonatomic) NSUndoManager *undoManager;

- (void)performActionWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)alertControllerForTogglingAssetsVisibilityWithCompletionHandler:(id /* block */)a0;
- (id)initWithAssets:(id)a0 undoManager:(id)a1;

@end
