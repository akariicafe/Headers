@class NSString;

@interface NTKCPhotosAddController : NSObject <PHPickerViewControllerDelegate, UINavigationControllerDelegate, UIAdaptivePresentationControllerDelegate>

@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_sharedInstance;
+ (id)pickerConfigurationWithLimit:(unsigned long long)a0;
+ (void)presentPhotosAddControllerFromViewController:(id)a0 configuration:(id)a1 withCompletion:(id /* block */)a2;
+ (void)presentPhotosAddControllerFromViewController:(id)a0 selectionLimit:(unsigned long long)a1 withCompletion:(id /* block */)a2;
+ (void)presentPhotosAddControllerFromViewController:(id)a0 withCompletion:(id /* block */)a1;
+ (void)presentSinglePhotoAddControllerFromViewController:(id)a0 withCompletion:(id /* block */)a1;

- (void)presentationControllerDidDismiss:(id)a0;
- (void).cxx_destruct;
- (void)picker:(id)a0 didFinishPicking:(id)a1;

@end
