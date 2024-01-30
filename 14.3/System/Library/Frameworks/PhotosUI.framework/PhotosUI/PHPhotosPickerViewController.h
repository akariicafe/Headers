@class PUPhotosPickerViewControllerSpec, PHPhotosPickerOptions, PUPhotosPickerViewController;

@interface PHPhotosPickerViewController : UIViewController {
    PUPhotosPickerViewController *_photosPickerViewController;
    PUPhotosPickerViewControllerSpec *_spec;
}

@property (readonly, nonatomic) PHPhotosPickerOptions *options;
@property (copy, nonatomic) id /* block */ completionHandler;

- (id)initWithOptions:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_commonPHPhotosPickerViewControllerInitializer;
- (void)_handlePickerViewControllerDidFinish:(id)a0;
- (BOOL)_updateSpecIfNeeded;
- (void)traitCollectionDidChange:(id)a0;

@end
