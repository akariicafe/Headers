@class NSFileProviderDomain, PUAssetPickerCoordinator, NSString, NSLayoutConstraint;

@interface PUPickerPrincipalUIViewController : UIViewController <PUAssetPickerCoordinatorActionHandler, _PUPickerUnavailableUIViewControllerDelegate, NSExtensionRequestHandling>

@property (retain, nonatomic) NSFileProviderDomain *domain;
@property (retain, nonatomic) PUAssetPickerCoordinator *coordinator;
@property (retain, nonatomic) NSLayoutConstraint *topConstraint;
@property (retain, nonatomic) NSLayoutConstraint *bottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *leadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *trailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *leadingSafeAreaConstraint;
@property (retain, nonatomic) NSLayoutConstraint *trailingSafeAreaConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_remoteViewControllerInterface;

- (void).cxx_destruct;
- (BOOL)setImagePickerPhotoLibrary:(id)a0 error:(id *)a1;
- (void)updateViewConstraints;
- (void)_pickerUnavailableUIViewControllerCancelButtonTapped:(id)a0;
- (void)coordinator:(id)a0 didFinishWithAssets:(id)a1;
- (id)synchronousLoadConfigurationFromExtensionContext:(id *)a0;
- (void)logExitIfNeeded:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;

@end
