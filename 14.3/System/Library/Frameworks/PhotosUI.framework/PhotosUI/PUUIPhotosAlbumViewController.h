@class UIBarButtonItem, NSArray, NSString, PUSessionInfo, PUPhotoPickerFileSizeToolbarProvider, PUPhotoPickerResizeTaskDescriptor, PUUIImagePickerControllerHelper;
@protocol PUPhotoPicker;

@interface PUUIPhotosAlbumViewController : PUPhotosAlbumViewController <PUPhotoPickerFileSizeToolbarProviderDelegate, PUPhotosGridViewSupplementalToolbarDataSource, PUPhotoPickerServicesConsumer, PUPhotoPickerSelectionHandler> {
    UIBarButtonItem *_imagePickerCancelButton;
    UIBarButtonItem *_imagePickerSelectionDoneButton;
    PUUIImagePickerControllerHelper *__imagePickerControllerHelper;
    PUPhotoPickerFileSizeToolbarProvider *_fileSizePickerToolbarProvider;
}

@property (readonly) PUUIImagePickerControllerHelper *_imagePickerControllerHelper;
@property (copy, nonatomic, setter=_setImagePickerMediaTypes:) NSArray *_imagePickerMediaTypes;
@property (nonatomic, setter=_setAlbumFilter:) int _albumFilter;
@property (readonly, nonatomic) BOOL referenceValuesDidChange;
@property (nonatomic) BOOL didDisappear;
@property (nonatomic) double lastKnownWidth;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } lastKnownSafeAreaInsets;
@property (retain, nonatomic) PUPhotoPickerResizeTaskDescriptor *resizeTaskDescriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isAnyAssetSelected) BOOL anyAssetSelected;
@property (readonly, nonatomic) NSArray *selectedAssets;
@property (readonly, nonatomic) PUSessionInfo *sessionInfo;
@property (readonly, nonatomic, getter=isAnyAssetDownloading) BOOL anyAssetDownloading;
@property (weak, nonatomic) id<PUPhotoPicker> photoPicker;

- (id)initWithSpec:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)canDragOut;
- (BOOL)canNavigateToPhotoInteractively:(BOOL)a0;
- (void)photoPickerFileSizeToolbarProvider:(id)a0 presentSizePickerViewController:(id)a1;
- (void)photoPickerFileSizeToolbarProvider:(id)a0 didSelectResizeTaskDescriptor:(id)a1;
- (void)loadView;
- (void)performPhotoPickerSelection;
- (void)getTitle:(out id *)a0 prompt:(out id *)a1 shouldHideBackButton:(out BOOL *)a2 leftBarButtonItems:(out id *)a3 rightBarButtonItems:(out id *)a4;
- (id)filterPredicateForAlbum:(id)a0;
- (BOOL)canBeginStackCollapseTransition;
- (void)_handleImagePickerCancel:(id)a0;
- (BOOL)pu_wantsNavigationBarVisible;
- (void)_scrollToBottomIfNeeded;
- (void)_handleImagePickerSelectionDone:(id)a0;
- (void)_handleImagePickerMultipleSelectionDone;
- (void)_handleImagePickerSingleSelectionDone;
- (void)viewWillAppear:(BOOL)a0;
- (double)topMarginForPhotosGlobalFooterView:(id)a0;
- (BOOL)shouldShowMenu;
- (BOOL)shouldShowSectionHeaders;
- (void)handleToggleSelectionOfItemAtIndexPath:(id)a0;
- (void)handleNavigateToAsset:(id)a0 inContainer:(id)a1;
- (BOOL)canDragIn;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setAlbum:(id)a0 existingFetchResult:(id)a1;
- (BOOL)wantsGlobalFooter;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)setPhotoPickerMediaTypes:(id)a0;

@end
