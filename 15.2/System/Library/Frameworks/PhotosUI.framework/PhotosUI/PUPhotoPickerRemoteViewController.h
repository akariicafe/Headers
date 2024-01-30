@class PUPhotoPickerRemoteViewControllerRequestOptions, PUPhotoPickerExtensionContext, NSString, NSArray, PUAssetPickerCoordinator, NSDictionary, NSLayoutConstraint, UIViewController, PUPhotoPickerRemoteNavigationController;

@interface PUPhotoPickerRemoteViewController : UIViewController <PUPhotoPickerRemoteNavigationControllerDelegate, NSExtensionRequestHandling, PUPhotoPicker, PUPhotoPickerTestSupportHandler>

@property (weak, nonatomic) PUPhotoPickerExtensionContext *extensionContext;
@property (retain, nonatomic) UIViewController *contentViewController;
@property (retain, nonatomic) PUPhotoPickerRemoteNavigationController *contentNavigationController;
@property (retain, nonatomic) PUPhotoPickerRemoteViewControllerRequestOptions *options;
@property (retain, nonatomic) PUAssetPickerCoordinator *assetPickerCoordinator;
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
@property (readonly, nonatomic) unsigned long long savingOptions;
@property (readonly, nonatomic) NSArray *mediaTypes;
@property (readonly, nonatomic) BOOL allowsMultipleSelection;
@property (readonly, nonatomic) unsigned long long multipleSelectionLimit;
@property (readonly, nonatomic) BOOL requiresPickingConfirmation;
@property (readonly, nonatomic) BOOL showsFileSizePicker;
@property (readonly, nonatomic) BOOL showsPrompt;
@property (readonly, nonatomic) BOOL convertAutoloopsToGIF;
@property (readonly, nonatomic) NSDictionary *properties;

+ (void)initialize;

- (void)updateViewConstraints;
- (void)viewWillLayoutSubviews;
- (void)didSelectMultipleMediaItemsWithInfoDictionaries:(id)a0;
- (void)loadView;
- (void)presentViewController:(id)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)beginRequestWithExtensionContext:(id)a0;
- (void)cancelPhotoPicker;
- (void)performPhotoPickerPreviewOfFirstAsset;
- (void)didDisplayPhotoPickerSourceType:(long long)a0;
- (void)didDisplayPhotoPickerPreview;
- (void)didSelectMediaWithInfoDictionary:(id)a0 allowedHandler:(id /* block */)a1;
- (void)performTraitCollectionUpdateUsingData:(id)a0 completion:(id /* block */)a1;
- (void)performPhotosSelection;
- (void)photoPickerRemoteNavigationController:(id)a0 viewControllerToPush:(id)a1;
- (void)_handleViewControllerRequestWithOptions:(id)a0 error:(id)a1;
- (void)_loadContentViewIfNeeded;
- (void)_setPhotoPickerInViewController:(id)a0;
- (void)_handlePerformTraitCollectionUpdateUsingData:(id)a0 completion:(id /* block */)a1;
- (void)_logAssetSelectionIfNeeded:(id)a0;
- (void)_allowSharingSelectionOfInfoDictionaries:(id)a0 completion:(id /* block */)a1;

@end
