@interface PUAlbumListViewControllerPhoneSpec : PUAlbumListViewControllerCommonPhoneSpec

- (struct CGSize { double x0; double x1; })imageSize;
- (id)nameOfEmptyAlbumPlaceholderImage;
- (id)nameOfEmptySharedAlbumPlaceholderImage;
- (unsigned long long)folderStackViewStyle;
- (struct CGSize { double x0; double x1; })cellSizeForStackSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })imageSizeForLayoutReferenceSize:(struct CGSize { double x0; double x1; })a0 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (long long)cellContentViewLayout;
- (void)configureGridLayout:(id)a0 forLayoutReferenceSize:(struct CGSize { double x0; double x1; })a1 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (id)nameOfAddSharedAlbumPlaceholderImage;
- (id)nameOfRecentlyDeletedAlbumPlaceholderImage;
- (id)nameOfHiddenAlbumPlaceholderImage;
- (double)sectionHeaderHeight;
- (struct CGSize { double x0; double x1; })stackSize;
- (void)configureStackViewWithGridStyle:(id)a0;
- (BOOL)shouldShowSectionHeaders;
- (unsigned long long)stackViewStyle;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sectionInsetsForLayoutReferenceSize:(struct CGSize { double x0; double x1; })a0 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (BOOL)shouldUseTableView;
- (double)sectionFooterHeight;
- (struct CGSize { double x0; double x1; })stackSizeForLayoutReferenceSize:(struct CGSize { double x0; double x1; })a0 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;

@end
