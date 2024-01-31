@class NSString, CNContactStyle;
@protocol CNVisualIdentityPickerPresenterDelegate, CNVisualIdentityImagePickerControllerDelegate;

@interface CNVisualIdentityImagePickerController : NSObject <UINavigationControllerDelegate, UIImagePickerControllerDelegate, PHPickerViewControllerDelegate>

@property (retain, nonatomic) CNContactStyle *contactStyle;
@property (retain, nonatomic) NSString *photoLibraryAssetID;
@property (weak, nonatomic) id<CNVisualIdentityPickerPresenterDelegate> presenterDelegate;
@property (weak, nonatomic) id<CNVisualIdentityImagePickerControllerDelegate> delegate;
@property (nonatomic) BOOL isMeContact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;
+ (id)cameraImagePicker;
+ (id)imagePickerForEditingImageData:(id)a0 withCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (id)imagePickerForEditingImageData:(id)a0 withCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 backgroundColor:(id)a2;
+ (id)photoLibraryImagePickerWithIsMeContact:(BOOL)a0;
+ (id)photoPickerForEditingImageData:(id)a0 withCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 backgroundColor:(id)a2 isMeContact:(BOOL)a3;
+ (id)photoPickerForEditingImageData:(id)a0 withCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 isMeContact:(BOOL)a2;

- (id)initWithContactStyle:(id)a0;
- (void).cxx_destruct;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;
- (void)imageDataFromPickerResult:(id)a0 completionHandler:(id /* block */)a1;
- (void)picker:(id)a0 didFinishPicking:(id)a1;
- (void)presentCameraImagePickerFromViewController:(id)a0;
- (void)presentImagePicker:(id)a0 withStyle:(long long)a1 fromViewController:(id)a2;
- (void)presentImagePicker:(id)a0 withStyle:(long long)a1 fromViewController:(id)a2 forVisualIdentityPicker:(id)a3;
- (void)presentMoveAndScaleForImageData:(id)a0 withCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 fromViewController:(id)a2;
- (void)presentMoveAndScaleForImageData:(id)a0 withCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 fromViewController:(id)a2 backgroundColor:(id)a3;
- (void)presentPhotoLibraryPickerFromViewController:(id)a0 sourceView:(id)a1;
- (id)providerItemFromImagePickerInfo:(id)a0;

@end
