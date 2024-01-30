@class PLAssetsdClient;

@interface PLLimitedLibraryPickerDelegate : NSObject

@property (copy, nonatomic) id /* block */ dismissalBlock;
@property (retain, nonatomic) PLAssetsdClient *assetsdClient;

- (void)_dismissImagePickerController:(id)a0;
- (void)dismissImagePickerController:(id)a0;
- (void)imagePickerController:(id)a0 didFinishPickingMultipleMediaWithInfo:(id)a1;
- (void).cxx_destruct;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;
- (void)imagePickerControllerDidCancel:(id)a0;

@end
