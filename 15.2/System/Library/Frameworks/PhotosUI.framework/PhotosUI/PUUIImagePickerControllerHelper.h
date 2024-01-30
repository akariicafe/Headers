@class PUPhotosGridDownloadHelper, PUPhotosGridViewController, PUUIAlbumListViewController, NSObject;
@protocol OS_dispatch_group, PUPhotoPicker;

@interface PUUIImagePickerControllerHelper : NSObject {
    PUPhotosGridDownloadHelper *_downloadHelper;
}

@property (retain, nonatomic) NSObject<OS_dispatch_group> *multiSelectionGroup;
@property (nonatomic) BOOL didHandleSelectionOfAssets;
@property (readonly, weak, nonatomic) PUPhotosGridViewController *gridViewController;
@property (readonly, weak, nonatomic) PUUIAlbumListViewController *albumListViewController;
@property (readonly, weak, nonatomic) id<PUPhotoPicker> photoPicker;
@property (readonly, nonatomic) BOOL allowsMultipleSelection;
@property (readonly, nonatomic) BOOL requiresPickingConfirmation;
@property (readonly, nonatomic) BOOL showsFileSizePicker;
@property (readonly, nonatomic, getter=isAnyAssetDownloading) BOOL anyAssetDownloading;

+ (id)gridViewControllerSpec;
+ (id)albumListViewControllerSpec;
+ (id)assetsFilterPredicateForMediaTypes:(id)a0;
+ (unsigned long long)imagePickerTypesForMediaTypes:(id)a0;
+ (id)collectionsFilterPredicateForMediaTypes:(id)a0;
+ (int)albumFilterForMediaTypes:(id)a0;

- (id)_mediaTypes;
- (void).cxx_destruct;
- (void)cancelPhotoPicker;
- (BOOL)showsPrompt;
- (unsigned long long)multipleSelectionLimit;
- (id)_extraArgumentsForResizeTaskDescriptor:(id)a0;
- (void)handleToggleSelectionOfItemAtIndexPath:(id)a0;
- (id)initWithAlbumListViewController:(id)a0 photoPickerServices:(id)a1;
- (void)updateSessionInfo;
- (id)initWithGridViewController:(id)a0 photoPickerServices:(id)a1;
- (void)_selectAsset:(id)a0 withHintCollection:(id)a1 hintIndexPath:(id)a2;
- (void)handleSelectionOfAsset:(id)a0 inCollection:(id)a1 resizeTaskDescriptor:(id)a2;
- (void)handleSelectionOfAssets:(id)a0 resizeTaskDescriptor:(id)a1;
- (void)_handleSelectionOfDownloadedAssets:(id)a0 resizeTaskDescriptor:(id)a1;
- (void)_pushImageViewControllerForAsset:(id)a0 allowEditing:(BOOL)a1 expectsLivePhoto:(BOOL)a2;
- (void)_notifyImagePickerOfAssetAvailability:(id)a0 resizeTaskDescriptor:(id)a1;
- (id)_pickerProperties;
- (void)_showImageViewController:(id)a0;
- (void)handleKeyboardAvoidanceIfNeeded:(id)a0;

@end
