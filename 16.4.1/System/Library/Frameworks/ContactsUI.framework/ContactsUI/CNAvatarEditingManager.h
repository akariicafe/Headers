@class CNPhotoPickerAnimojiProviderItem, CNPhotoPickerVariantsManager, NSString, AVTStickerConfiguration, UIImage, UIViewController;
@protocol CNAvatarEditingManagerDelegate, AVTAvatarRecord;

@interface CNAvatarEditingManager : NSObject <AVTPoseSelectionViewControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate>

@property (readonly, nonatomic) id<AVTAvatarRecord> avatarRecord;
@property (retain, nonatomic) AVTStickerConfiguration *poseConfiguration;
@property (retain, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) CNPhotoPickerVariantsManager *variantsManager;
@property (retain, nonatomic) UIImage *imageWithAlpha;
@property (weak, nonatomic) id<CNAvatarEditingManagerDelegate> delegate;
@property (retain, nonatomic) CNPhotoPickerAnimojiProviderItem *originalItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;

- (void).cxx_destruct;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;
- (id)captureFlashViewWithSize:(struct CGSize { double x0; double x1; })a0 alpha:(double)a1;
- (id)compositeImageDataForImage:(id)a0 backgroundColor:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computeFullscreenImageRectForScreenWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)createImagePickerForEditingImageData:(id)a0 withCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 customBackgroundColor:(id)a2;
- (id)fullScreenImageFromImage:(id)a0 inSize:(struct CGSize { double x0; double x1; })a1;
- (id)imagePickerForItem:(id)a0;
- (id)initForEditingWithAvatarRecord:(id)a0 variantsManager:(id)a1 fromViewController:(id)a2;
- (id)initWithAvatarRecord:(id)a0 variantsManager:(id)a1;
- (void)poseSelectionController:(id)a0 didSelectPoseWithConfiguration:(id)a1;
- (void)poseSelectionControllerDidCancel:(id)a0;
- (void)presentImagePickerForImage:(id)a0 fadeIn:(BOOL)a1 completion:(id /* block */)a2;
- (id)renderImage:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
