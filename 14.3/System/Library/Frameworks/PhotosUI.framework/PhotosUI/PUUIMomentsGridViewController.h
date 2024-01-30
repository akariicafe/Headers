@class UIBarButtonItem, NSArray, NSString, PUSessionInfo, PUPhotoPickerFileSizeToolbarProvider, PUPhotoPickerResizeTaskDescriptor, PUUIImagePickerControllerHelper;
@protocol PUPhotoPicker;

@interface PUUIMomentsGridViewController : PUPhotosGridViewController <PUPhotoPickerFileSizeToolbarProviderDelegate, PUPhotosGridViewSupplementalToolbarDataSource, PUPhotoPickerServicesConsumer, PUPhotoPickerSelectionHandler, PUPhotoPickerTestSupportHandler> {
    UIBarButtonItem *_imagePickerCancelButton;
    UIBarButtonItem *_imagePickerSelectionDoneButton;
    PUUIImagePickerControllerHelper *__imagePickerControllerHelper;
    PUPhotoPickerFileSizeToolbarProvider *_fileSizePickerToolbarProvider;
}

@property (readonly) PUUIImagePickerControllerHelper *_imagePickerControllerHelper;
@property (copy, nonatomic, setter=_setImagePickerMediaTypes:) NSArray *_imagePickerMediaTypes;
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
- (id)initWithModalPresentationStyle:(long long)a0;
- (void)getTitle:(out id *)a0 prompt:(out id *)a1 shouldHideBackButton:(out BOOL *)a2 leftBarButtonItems:(out id *)a3 rightBarButtonItems:(out id *)a4;
- (void)_setTitle;
- (id)newGridLayout;
- (void)_handleImagePickerCancel:(id)a0;
- (void)_scrollToBottomIfNeeded;
- (void)_handleImagePickerSelectionDone:(id)a0;
- (void)_handleImagePickerMultipleSelectionDone;
- (void)_handleImagePickerSingleSelectionDone;
- (void)viewWillAppear:(BOOL)a0;
- (void)performPhotoPickerPreviewOfFirstAsset;
- (BOOL)shouldShowMenu;
- (void)handleToggleSelectionOfItemAtIndexPath:(id)a0;
- (void)handleNavigateToAsset:(id)a0 inContainer:(id)a1;
- (BOOL)updateSpec;
- (BOOL)canDragIn;
- (void)viewDidAppear:(BOOL)a0;
- (double)sectionedGridLayout:(id)a0 sectionHeaderHeightForVisualSection:(long long)a1;
- (double)sectionedGridLayout:(id)a0 accessibilitySectionHeaderHeightForVisualSection:(long long)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)initiallyScrolledToBottom;
- (BOOL)shouldPerformAutomaticContentOffsetAdjustment;
- (void)configureSupplementaryView:(id)a0 ofKind:(id)a1 forIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)setPhotoPickerMediaTypes:(id)a0;

@end
