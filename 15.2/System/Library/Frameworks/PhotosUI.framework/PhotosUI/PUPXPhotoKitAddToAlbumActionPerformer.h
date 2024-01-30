@class PUAlbumPickerViewController;

@interface PUPXPhotoKitAddToAlbumActionPerformer : PXPhotoKitAssetActionPerformer

@property (retain, nonatomic) PUAlbumPickerViewController *albumPickerViewController;

+ (id)createBarButtonItemWithTarget:(id)a0 action:(SEL)a1 actionManager:(id)a2;
+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2;

- (void).cxx_destruct;
- (void)performUserInteractionTask;
- (void)_handlePickedAlbum:(id)a0 assets:(id)a1;
- (void)_handleUserInteractionTaskResult:(BOOL)a0 error:(id)a1;

@end
