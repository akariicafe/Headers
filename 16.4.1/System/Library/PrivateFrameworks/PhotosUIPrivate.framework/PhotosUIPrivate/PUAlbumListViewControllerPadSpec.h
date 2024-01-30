@interface PUAlbumListViewControllerPadSpec : PUAlbumListViewControllerSpec

- (void)configureStackViewWithGridStyle:(id)a0;
- (double)sectionFooterHeight;
- (struct CGSize { double x0; double x1; })imageSize;
- (double)sectionHeaderHeight;
- (unsigned long long)stackViewStyle;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sectionInsetsForLayoutReferenceSize:(struct CGSize { double x0; double x1; })a0 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (struct UIOffset { double x0; double x1; })stackPerspectiveOffset;
- (long long)cellContentViewLayout;
- (struct CGSize { double x0; double x1; })stackSize;
- (double)posterSquareCornerRadius;
- (struct CGSize { double x0; double x1; })imageSizeForLayoutReferenceSize:(struct CGSize { double x0; double x1; })a0 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (struct CGSize { double x0; double x1; })stackSizeForLayoutReferenceSize:(struct CGSize { double x0; double x1; })a0 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (struct UIOffset { double x0; double x1; })stackOffset;
- (struct CGSize { double x0; double x1; })cellSizeForStackSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)shouldShowSectionHeaders;
- (BOOL)showsDeleteButtonOnCellContentView;
- (void)configureGridLayout:(id)a0 forLayoutReferenceSize:(struct CGSize { double x0; double x1; })a1 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })stackPerspectiveInsets;
- (double)posterSubitemCornerRadius;
- (unsigned long long)folderStackViewStyle;
- (long long)albumDeletionWarningStyle;
- (id)albumViewControllerSpec;
- (BOOL)canShowVirtualCollections;
- (long long)collageImageContentMode;
- (struct CGSize { double x0; double x1; })collageImageSize;
- (double)collageSpacing;
- (id)emptyStackPhotoDecoration;
- (id)feedViewControllerSpec;
- (id)gridViewControllerSpec;
- (id)panoramaViewControllerSpec;
- (BOOL)shouldUseCollageForCloudFeedPlaceholder;
- (id)stackPhotoDecoration;
- (BOOL)usesStackTransitionToGrid;

@end
