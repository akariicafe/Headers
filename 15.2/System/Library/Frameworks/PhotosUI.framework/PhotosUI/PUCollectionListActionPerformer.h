@class UIAlertAction, PUAlbumStreamActivity, NSString;

@interface PUCollectionListActionPerformer : PXCollectionListActionPerformer <PUAlbumStreamActivityDelegate>

@property (weak, nonatomic, setter=_setCreateAlbumAlertAction:) UIAlertAction *createAlbumAlertAction;
@property (retain, nonatomic) PUAlbumStreamActivity *_albumStreamActivity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)albumStreamActivity:(id)a0 didFinishSuccessfully:(BOOL)a1;
- (void)albumStreamActivity:(id)a0 presentViewController:(id)a1;
- (void)albumStreamActivity:(id)a0 dismissViewController:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)_updateCreateAlbumTextField:(id)a0;
- (id)_validateNewCollectionTitle:(id)a0;
- (void)presentSetupUIForAlbumCreationWithCompletionHandler:(id /* block */)a0;
- (void)presentImagePickerWithAlbumName:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleCreateSharedAlbum;

@end
