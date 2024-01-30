@class PUFontManager, NSString, UIImage, PUPhotosPanoramaViewControllerSpec, PUPhotosGridViewControllerSpec, PUFeedViewControllerSpec, PUPhotoDecoration, PUPhotosAlbumViewControllerSpec, PXLayoutMetricInterpolator;

@interface PUAlbumListViewControllerSpec : PULegacyViewControllerSpec {
    UIImage *_emptyAlbumPlaceholderImage;
    UIImage *_emptySharedAlbumPlaceholderImage;
}

@property (readonly, nonatomic) PUFontManager *_fontManager;
@property (readonly, nonatomic) PXLayoutMetricInterpolator *_insetsInterpolator;
@property (readonly, nonatomic) PXLayoutMetricInterpolator *_stackWidthInterpolator;
@property (readonly) BOOL shouldUseTableView;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentSizeForViewInPopover;
@property (readonly) struct CGSize { double width; double height; } imageSize;
@property (readonly) long long imageContentMode;
@property (readonly, nonatomic) unsigned long long stackViewStyle;
@property (readonly, nonatomic) unsigned long long folderStackViewStyle;
@property (readonly, nonatomic) PUPhotoDecoration *stackPhotoDecoration;
@property (readonly, nonatomic) PUPhotoDecoration *emptyStackPhotoDecoration;
@property (readonly, nonatomic) struct CGSize { double width; double height; } stackSize;
@property (readonly, nonatomic) struct UIOffset { double horizontal; double vertical; } stackOffset;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } stackPerspectiveInsets;
@property (readonly, nonatomic) struct UIOffset { double horizontal; double vertical; } stackPerspectiveOffset;
@property (readonly, nonatomic) double posterSquareCornerRadius;
@property (readonly, nonatomic) double posterSubitemCornerRadius;
@property (readonly) struct CGSize { double width; double height; } collageImageSize;
@property (readonly) long long collageImageContentMode;
@property (readonly, nonatomic) double collageSpacing;
@property (readonly, nonatomic) BOOL showsDeleteButtonOnCellContentView;
@property (readonly, nonatomic) long long cellContentViewLayout;
@property (readonly, nonatomic) BOOL usesStackTransitionToGrid;
@property (readonly, nonatomic) double sectionHeaderHeight;
@property (readonly, nonatomic) double sectionFooterHeight;
@property (readonly, nonatomic) BOOL shouldShowSectionHeaders;
@property (readonly, nonatomic) NSString *nameOfEmptyPeopleAlbumPlaceholderImage;
@property (readonly, nonatomic) NSString *nameOfEmptyAlbumPlaceholderImage;
@property (readonly, nonatomic) NSString *nameOfEmptySharedAlbumPlaceholderImage;
@property (readonly, nonatomic) BOOL shouldUseCollageForCloudFeedPlaceholder;
@property (readonly, nonatomic) BOOL shouldUseShortTitleForStandInAlbumList;
@property (readonly, nonatomic) BOOL canShowVirtualCollections;
@property (readonly, nonatomic) long long albumDeletionWarningStyle;
@property (readonly, nonatomic) PUAlbumListViewControllerSpec *standInAlbumListViewControllerSpec;
@property (readonly, nonatomic) PUPhotosGridViewControllerSpec *gridViewControllerSpec;
@property (readonly, nonatomic) PUPhotosAlbumViewControllerSpec *albumViewControllerSpec;
@property (readonly, nonatomic) PUPhotosPanoramaViewControllerSpec *panoramaViewControllerSpec;
@property (readonly, nonatomic) PUFeedViewControllerSpec *feedViewControllerSpec;

+ (id)emptyPlaceholderImageForSystemImageNamed:(id)a0 scale:(long long)a1;
+ (id)padSpec;
+ (id)phoneSpec;

- (void)configureStackViewWithGridStyle:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sectionInsetsForLayoutReferenceSize:(struct CGSize { double x0; double x1; })a0 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (struct CGSize { double x0; double x1; })imageSizeForLayoutReferenceSize:(struct CGSize { double x0; double x1; })a0 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (struct CGSize { double x0; double x1; })stackSizeForLayoutReferenceSize:(struct CGSize { double x0; double x1; })a0 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (struct CGSize { double x0; double x1; })cellSizeForStackSize:(struct CGSize { double x0; double x1; })a0;
- (void)configureGridLayout:(id)a0 forLayoutReferenceSize:(struct CGSize { double x0; double x1; })a1 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (void).cxx_destruct;
- (void)_getStackSize:(struct CGSize { double x0; double x1; } *)a0 outEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1 forLayoutReferenceSize:(struct CGSize { double x0; double x1; })a2 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3;
- (struct CGPoint { double x0; double x1; })_pixelRoundedOriginForCenteredImage:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 window:(id)a2;
- (struct CGSize { double x0; double x1; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureCollectionViewAlbumListLayout:(id)a0 forBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)emptyAlbumPlaceholderImageForWindow:(id)a0;
- (id)emptySharedAlbumPlaceholderImageForWindow:(id)a0;
- (struct CGSize { double x0; double x1; })tileSizeForLayoutReferenceSize:(struct CGSize { double x0; double x1; })a0 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 stackViewStyle:(unsigned long long)a2;

@end
