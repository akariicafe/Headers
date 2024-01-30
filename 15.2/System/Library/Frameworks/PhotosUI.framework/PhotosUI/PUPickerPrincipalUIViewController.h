@class NSFileProviderDomain, PUAssetPickerCoordinator, NSOrderedSet, NSLayoutConstraint, NSDate, NSString;

@interface PUPickerPrincipalUIViewController : UIViewController <PUAssetPickerCoordinatorActionHandler, _PUPickerUnavailableUIViewControllerDelegate, NSExtensionRequestHandling, PUPickerPrincipalUIViewControllerInterface>

@property (retain, nonatomic) NSFileProviderDomain *domain;
@property (retain, nonatomic) PUAssetPickerCoordinator *coordinator;
@property (retain, nonatomic) NSLayoutConstraint *topConstraint;
@property (retain, nonatomic) NSLayoutConstraint *bottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *leadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *trailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *leadingSafeAreaConstraint;
@property (retain, nonatomic) NSLayoutConstraint *trailingSafeAreaConstraint;
@property (retain, nonatomic) NSOrderedSet *selectedObjectIDs;
@property (retain, nonatomic) NSDate *selectionDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
+ (BOOL)shouldDebounceDidFinishPicking:(id)a0 previousSelectedObjectIDs:(id)a1 previousSelectionDate:(id)a2;

- (void)updateViewConstraints;
- (void)viewDidLoad;
- (BOOL)setImagePickerPhotoLibrary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)_deselectAssetsWithIdentifiers:(id)a0;
- (void)_moveAssetWithIdentifier:(id)a0 afterIdentifier:(id)a1;
- (void)_pickerUnavailableUIViewControllerCancelButtonTapped:(id)a0;
- (void)coordinator:(id)a0 didFinishPicking:(id)a1;
- (id)synchronousLoadConfigurationFromExtensionContext:(id *)a0;
- (void)finishPicking:(id)a0;
- (void)logExitIfNeeded:(id)a0;
- (void)confirmPicking:(id)a0 completionHandler:(id /* block */)a1;

@end
