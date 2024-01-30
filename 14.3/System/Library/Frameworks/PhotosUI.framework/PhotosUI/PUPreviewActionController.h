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

- (void)_performRestoreAction;
- (void).cxx_destruct;
- (BOOL)assetActionPerformer:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (void)_executeActionPerformer:(id)a0;
- (void)_performTrashAction;
- (BOOL)assetActionPerformer:(id)a0 presentViewController:(id)a1;
- (unsigned long long)_actionForPreferredAction:(unsigned long long)a0;
- (void)_notifiyDelegateOfAction:(id)a0;
- (void)_performCopyAction;
- (void)_performSimpleActionWithType:(unsigned long long)a0;
- (void)_performFavoriteAction:(BOOL)a0;
- (void)_performRevealInMomentAction;

@end
