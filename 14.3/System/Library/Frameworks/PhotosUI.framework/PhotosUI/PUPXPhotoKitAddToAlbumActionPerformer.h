@class PUAlbumPickerViewController;

@interface PUPXPhotoKitAddToAlbumActionPerformer : PXPhotoKitAssetActionPerformer

@property (retain, nonatomic) PUAlbumPickerViewController *albumPickerViewController;

+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2;
+ (id)createBarButtonItemWithTarget:(id)a0 action:(SEL)a1 actionManager:(id)a2;

- (void)performUserInteractionTask;
- (void).cxx_destruct;
- (void)_handlePickedAlbum:(id)a0 assets:(id)a1;
- (void)_handleUserInteractionTaskResult:(BOOL)a0 error:(id)a1;

@end
