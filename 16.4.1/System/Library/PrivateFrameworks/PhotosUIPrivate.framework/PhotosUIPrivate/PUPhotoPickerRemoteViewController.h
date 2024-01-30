@class NSDictionary, PUAssetPickerCoordinator, PUPhotoPickerExtensionContext, NSString, PUPhotoPickerRemoteViewControllerRequestOptions, NSLayoutConstraint, NSArray;

@interface PUPhotoPickerRemoteViewController : UIViewController <_UIAppearanceRestriction, NSExtensionRequestHandling, PUPhotoPicker, PUPhotoPickerTestSupportHandler>

@property (weak, nonatomic) PUPhotoPickerExtensionContext *extensionContext;
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
+ (BOOL)_preventsAppearanceProxyCustomization;

- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)updateViewConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)presentViewController:(id)a0;
- (void)loadView;
- (void)beginRequestWithExtensionContext:(id)a0;
- (void)cancelPhotoPicker;
- (void)didDisplayPhotoPickerPreview;
- (void)didDisplayPhotoPickerSourceType:(long long)a0;
- (void)didSelectMultipleMediaItemsWithInfoDictionaries:(id)a0;
- (void)performPhotoPickerPreviewOfFirstAsset;
- (void)_allowSharingSelectionOfInfoDictionaries:(id)a0 completion:(id /* block */)a1;
- (void)_handlePerformTraitCollectionUpdateUsingData:(id)a0 completion:(id /* block */)a1;
- (void)_handleViewControllerRequestWithOptions:(id)a0 error:(id)a1;
- (void)_loadContentViewIfNeeded;
- (void)_logAssetSelectionIfNeeded:(id)a0;
- (void)didSelectMediaWithInfoDictionary:(id)a0 allowedHandler:(id /* block */)a1;
- (void)performPhotosSelection;
- (void)performTraitCollectionUpdateUsingData:(id)a0 completion:(id /* block */)a1;

@end
