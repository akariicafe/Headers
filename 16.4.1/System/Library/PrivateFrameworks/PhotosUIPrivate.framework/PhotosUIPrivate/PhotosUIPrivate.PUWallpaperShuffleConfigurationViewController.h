@interface PhotosUIPrivate.PUWallpaperShuffleConfigurationViewController : UIViewController <UIAdaptivePresentationControllerDelegate> {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ manualSelectionPhotoPicker;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentViewController;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

- (void)presentationControllerWillDismiss:(id)a0;
- (id)initWithPhotoLibrary:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)didFailFinishingWithPosterConfiguration;
- (id)initWithPhotoLibrary:(id)a0 style:(long long)a1;
- (id)initWithPhotoLibrary:(id)a0 style:(long long)a1 posterConfiguration:(id)a2 centerMedia:(id)a3;

@end
