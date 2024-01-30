@class PUBrowsingSession, NSArray, UIViewController, PXActionManager, NSString, PUAssetActionPerformer;
@protocol PUPreviewActionControllerDelegate;

@interface PUPreviewActionController : NSObject <PUAssetActionPerformerDelegate> {
    struct { BOOL didDismissWithActionIdentifier; BOOL preventRevealInMomentAction; } _delegateRespondsTo;
}

@property (retain, nonatomic, setter=_setActiveActionPerformer:) PUAssetActionPerformer *_activeActionPerformer;
@property (readonly, nonatomic) NSArray *actions;
@property (retain, nonatomic) PUBrowsingSession *browsingSession;
@property (weak, nonatomic) UIViewController *presentingViewController;
@property (weak, nonatomic) id<PUPreviewActionControllerDelegate> delegate;
@property (retain, nonatomic) PXActionManager *photosUICoreActionManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_executeActionPerformer:(id)a0;
- (void)_performTrashAction;
- (void).cxx_destruct;
- (BOOL)assetActionPerformer:(id)a0 presentViewController:(id)a1;
- (BOOL)assetActionPerformer:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (id)contextMenuActionIfAvailableForActionType:(unsigned long long)a0;
- (id)_contextMenuActionWithTitle:(id)a0 image:(id)a1 attributes:(unsigned long long)a2 actionHandler:(id /* block */)a3;
- (id)debugActions;
- (unsigned long long)_confirmationFreeActionForPreferredAction:(unsigned long long)a0;
- (void)_notifiyDelegateOfAction:(id)a0;
- (void)_performSimpleActionWithType:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)_promptTrashActionConfirmationForAsset:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_performFavoriteAction:(BOOL)a0;

@end
