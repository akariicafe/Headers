@class PLAssetsdClient;

@interface PLLimitedLibraryPickerDelegate : NSObject

@property (copy, nonatomic) id /* block */ dismissalBlock;
@property (copy, nonatomic) id /* block */ finishedPickingBlock;
@property (retain, nonatomic) PLAssetsdClient *assetsdClient;

- (void)imagePickerController:(id)a0 didFinishPickingMultipleMediaWithInfo:(id)a1;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;
- (void).cxx_destruct;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)_dismissImagePickerController:(id)a0;
- (void)dismissImagePickerController:(id)a0;

@end
