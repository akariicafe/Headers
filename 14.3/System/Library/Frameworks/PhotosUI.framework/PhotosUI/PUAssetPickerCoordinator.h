@class NSMutableDictionary, NSProgress, NSObject, NSDictionary, PHAsset, PUAssetPickerFilterOptions, UINavigationController, PUAssetPickerContainerController, PUAssetPickerActivityProgressController, NSString, NSMutableOrderedSet, PXSelectionCoordinator, PXLoadingStatusManager, PUPickerConfiguration, PUPhotoPickerResizeTaskDescriptorViewModel, PUPhotosGridDownloadHelper;
@protocol OS_dispatch_group, PUPhotoPicker, PUAssetPickerCoordinatorActionHandler;

@interface PUAssetPickerCoordinator : NSObject <PUAssetPickerContainerControllerActionHandler, PUAssetPickerViewControllerActionHandler, PUAssetExplorerReviewScreenViewControllerDelegate, PUPhotosGridDownloadUpdateHandler, PXSelectionCoordinatorDelegate, UINavigationControllerDelegate, PUPhotoPickerResizeTaskDescriptorViewModelDelegate, PUUIImageViewControllerFileResizingDelegate, PUPhotoPickerServicesConsumer>

@property (retain, nonatomic) PUAssetPickerFilterOptions *filterOptions;
@property (readonly, weak, nonatomic) id<PUAssetPickerCoordinatorActionHandler> coordinatorActionHandler;
@property (retain, nonatomic) NSMutableOrderedSet *selectedAssets;
@property (readonly, nonatomic) PXSelectionCoordinator *selectionCoordinator;
@property (readonly, nonatomic) PUPhotosGridDownloadHelper *downloadHelper;
@property (retain, nonatomic) NSMutableDictionary *downloadProgress;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *multipleAssetAvailabilityGroup;
@property (readonly, nonatomic) PXLoadingStatusManager *loadingStatusManager;
@property (readonly, nonatomic) NSMutableDictionary *assetIdentifierByLoadOperationID;
@property (retain, nonatomic) PUAssetPickerActivityProgressController *progressController;
@property (copy, nonatomic) NSDictionary *downloadAssetsProgressMap;
@property (retain, nonatomic) NSProgress *downloadProgressViewProgress;
@property (retain, nonatomic) PUPhotoPickerResizeTaskDescriptorViewModel *resizeTaskDescriptorViewModel;
@property (retain, nonatomic) PHAsset *selectedAssetToResize;
@property (readonly, nonatomic) PUPickerConfiguration *configuration;
@property (readonly, nonatomic) UINavigationController *navigationController;
@property (readonly, nonatomic) PUAssetPickerContainerController *rootViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PUPhotoPicker> photoPicker;

+ (BOOL)pu_legacy_shouldDownloadVideoComplement:(id)a0 filterOptions:(id)a1;
+ (BOOL)_editingEnabled:(id)a0;
+ (BOOL)_viewImageBeforeSelectingEnabled:(id)a0;
+ (BOOL)_skipSelectionConfirmation:(id)a0;
+ (BOOL)_shouldTreatAssetAsLivePhoto:(id)a0 photoPicker:(id)a1 filterOptions:(id)a2;
+ (id)_extraArgumentsForResizeTaskDescriptor:(id)a0;
+ (BOOL)_assetCanPlay:(id)a0;

- (void)updateProgressWithIdentifier:(id)a0 withValue:(double)a1;
- (void)endShowingProgressWithIdentifier:(id)a0;
- (BOOL)viewController:(id)a0 didSelectAsset:(id)a1;
- (void)viewController:(id)a0 didSelectAssetCollection:(id)a1;
- (void)containerController:(id)a0 didTapCancelButton:(id)a1;
- (void)containerController:(id)a0 didTapAddButton:(id)a1;
- (void)containerController:(id)a0 didTapSelectedItemsButton:(id)a1;
- (void)containerControllerDidAppear:(id)a0;
- (id)initWithPhotoPicker:(id)a0 mediaTypes:(id)a1;
- (id)initWithConfiguration:(id)a0 filterOptions:(id)a1 navigationControllerClass:(Class)a2 selectedAssets:(id)a3 coordinatorActionHandler:(id)a4;
- (BOOL)toggleSelectionForAsset:(id)a0;
- (id)_fileSizeActionsForAssets:(id)a0;
- (void)downloadProgressDidFinishForAsset:(id)a0 success:(BOOL)a1;
- (id)_setupProgressController;
- (void)_handleProgressControllerCancellation;
- (void)_updateProgressViewProgress:(id)a0;
- (void)_dismissDownloadProgressViewWithSuccess:(BOOL)a0;
- (void)pu_legacy_selectAssetWithFileResizing:(id)a0;
- (void)pu_legacy_selectMultipleAssets:(id)a0;
- (void)pu_legacy_showProgressView;
- (void)pu_legacy_selectSingleAsset:(id)a0;
- (void)pu_legacy_cancelPicker;
- (void)pu_legacy_didDisplayPicker;
- (id)init;
- (void).cxx_destruct;
- (void)assetExplorerReviewScreenViewController:(id)a0 didPerformCompletionAction:(unsigned long long)a1 withSelectedAssetUUIDs:(id)a2 livePhotoDisabledAssetUUIDs:(id)a3 substituteAssetsByUUID:(id)a4;
- (void)assetExplorerReviewScreenViewControllerDidPressCancel:(id)a0;
- (id)assetExplorerReviewScreenViewController:(id)a0 fileSizeMenuForSelectedUUIDs:(id)a1;
- (BOOL)assetExplorerReviewScreenViewController:(id)a0 shouldEnableActionType:(unsigned long long)a1 onAsset:(id)a2 inAssetCollection:(id)a3;
- (BOOL)assetExplorerReviewScreenViewController:(id)a0 canPerformActionType:(unsigned long long)a1 onAsset:(id)a2 inAssetCollection:(id)a3;
- (void)presentAlertController:(id)a0;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (id)initWithConfiguration:(id)a0 coordinatorActionHandler:(id)a1;
- (void)setPhotoPickerMediaTypes:(id)a0;
- (id)imageViewControllerFileSizeMenuActions:(id)a0;
- (void)imageViewControllerDidConfirmSelection:(id)a0;
- (id)assetsForResizing;
- (void)selectionCoordinator:(id)a0 willUpdateSelectedObjectsForSnapshot:(id)a1 withRemovedIndexes:(id)a2 insertedIndexes:(id)a3;
- (id)beginShowingProgressForAsset:(id)a0 inCollection:(id)a1;

@end
