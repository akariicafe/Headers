@class NSString;

@interface NTKCPhotosAddController : NSObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate>

@property (copy, nonatomic) id /* block */ multipleCompletion;
@property (copy, nonatomic) id /* block */ singleCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_sharedInstance;
+ (void)presentPhotosAddControllerFromViewController:(id)a0 selectionLimit:(unsigned long long)a1 withCompletion:(id /* block */)a2;
+ (void)_presentAddControllerFromViewController:(id)a0 multiple:(BOOL)a1 limit:(unsigned long long)a2 completion:(id)a3;
+ (void)presentPhotosAddControllerFromViewController:(id)a0 withCompletion:(id /* block */)a1;
+ (void)presentSinglePhotoAddControllerFromViewController:(id)a0 withCompletion:(id /* block */)a1;

- (void)imagePickerController:(id)a0 didFinishPickingMultipleMediaWithInfo:(id)a1;
- (void).cxx_destruct;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)_dismiss:(id)a0 photos:(id)a1 single:(id)a2;

@end
