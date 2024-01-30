@interface PUAlbumListViewControllerPhoneSpec : PUAlbumListViewControllerCommonPhoneSpec

- (struct CGSize { double x0; double x1; })stackSize;
- (double)sectionHeaderHeight;
- (unsigned long long)folderStackViewStyle;
- (id)nameOfAddSharedAlbumPlaceholderImage;
- (double)sectionFooterHeight;
- (struct CGSize { double x0; double x1; })cellSizeForStackSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })stackSizeForLayoutReferenceSize:(struct CGSize { double x0; double x1; })a0 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sectionInsetsForLayoutReferenceSize:(struct CGSize { double x0; double x1; })a0 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (id)nameOfRecentlyDeletedAlbumPlaceholderImage;
- (BOOL)shouldUseTableView;
- (BOOL)shouldShowSectionHeaders;
- (void)configureStackViewWithGridStyle:(id)a0;
- (unsigned long long)stackViewStyle;
- (id)nameOfEmptyAlbumPlaceholderImage;
- (long long)cellContentViewLayout;
- (id)nameOfEmptySharedAlbumPlaceholderImage;
- (struct CGSize { double x0; double x1; })imageSizeForLayoutReferenceSize:(struct CGSize { double x0; double x1; })a0 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (id)nameOfHiddenAlbumPlaceholderImage;
- (void)configureGridLayout:(id)a0 forLayoutReferenceSize:(struct CGSize { double x0; double x1; })a1 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (struct CGSize { double x0; double x1; })imageSize;

@end
