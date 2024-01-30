@class UIAlertAction, PUAlbumStreamActivity, NSString;

@interface PUCollectionListActionPerformer : PXCollectionListActionPerformer <PUAlbumStreamActivityDelegate, PHPickerViewControllerDelegate, UIAdaptivePresentationControllerDelegate>

@property (weak, nonatomic, setter=_setCreateAlbumAlertAction:) UIAlertAction *createAlbumAlertAction;
@property (retain, nonatomic) PUAlbumStreamActivity *_albumStreamActivity;
@property (copy, nonatomic) id /* block */ finishedPickingBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)localizedTitleForActionType:(id)a0 selectionProvider:(id)a1;
+ (BOOL)_canUseSelectionForActionType:(id)a0 selectionProvider:(id)a1;

- (void)presentationControllerDidDismiss:(id)a0;
- (void).cxx_destruct;
- (void)picker:(id)a0 didFinishPicking:(id)a1;
- (void)handleCreateSharedAlbum;
- (void)presentSetupUIForAlbumCreationWithCompletionHandler:(id /* block */)a0;
- (void)_updateCreateAlbumTextField:(id)a0;
- (id)_validateNewCollectionTitle:(id)a0;
- (void)albumStreamActivity:(id)a0 didFinishSuccessfully:(BOOL)a1;
- (void)albumStreamActivity:(id)a0 dismissViewController:(id)a1 completion:(id /* block */)a2;
- (void)albumStreamActivity:(id)a0 presentViewController:(id)a1;

@end
