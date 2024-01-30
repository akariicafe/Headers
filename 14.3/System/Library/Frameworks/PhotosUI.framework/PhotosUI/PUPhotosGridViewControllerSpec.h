@class PUPhotosPickerViewControllerSpec, PUAlbumPickerViewControllerSpec;

@interface PUPhotosGridViewControllerSpec : NSObject

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } safeAreaInsets;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } layoutMargins;
@property (readonly, nonatomic) long long sizeSubclass;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentSizeForViewInPopover;
@property (readonly, nonatomic) struct CGSize { double width; double height; } baseInterItemSpacing;
@property (readonly, nonatomic) unsigned short thumbnailImageFormat;
@property (readonly, nonatomic) long long cellFillMode;
@property (readonly, nonatomic) long long cellBannerTextAlignment;
@property (readonly, nonatomic) BOOL canDisplayOptionsInPopover;
@property (readonly, nonatomic) BOOL canDisplaySlideshowButton;
@property (readonly, nonatomic) BOOL shouldPlaceSelectAllButtonInRightNavigationBar;
@property (readonly, nonatomic) BOOL shouldPlaceDeleteInCenterToolbarPosition;
@property (readonly, nonatomic) BOOL canDisplayEditActionsInNavigationBar;
@property (readonly, nonatomic) BOOL canCommitPreview;
@property (readonly, nonatomic) BOOL usesStackPopTransition;
@property (readonly, nonatomic) BOOL displaysAvalancheStacks;
@property (readonly, nonatomic) BOOL wantsBackButtonTitleForPhotoBrowser;
@property (readonly, nonatomic) PUPhotosPickerViewControllerSpec *photosPickerViewControllerSpec;
@property (readonly, nonatomic) PUAlbumPickerViewControllerSpec *albumPickerViewControllerSpec;
@property (readonly, nonatomic) BOOL wantsCustomNavigationTransition;
@property (readonly, nonatomic) long long forceLoadInitialSectionCount;
@property (readonly, nonatomic) double sectionHeaderHeight;
@property (readonly, nonatomic) long long sectionHeaderStyle;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } sectionHeaderInsets;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } gridContentInsets;

- (id)init;
- (void).cxx_destruct;
- (void)configureCollectionViewGridLayout:(id)a0 forWidth:(double)a1 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (BOOL)shouldUseAspectItems;
- (unsigned long long)supportedInterfaceOrientations;

@end
