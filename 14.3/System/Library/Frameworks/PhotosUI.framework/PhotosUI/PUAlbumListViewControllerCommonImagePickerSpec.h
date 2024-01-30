@interface PUAlbumListViewControllerCommonImagePickerSpec : PUAlbumListViewControllerCommonPhoneSpec

- (struct CGSize { double x0; double x1; })imageSize;
- (id)nameOfEmptyAlbumPlaceholderImage;
- (id)nameOfEmptySharedAlbumPlaceholderImage;
- (unsigned long long)folderStackViewStyle;
- (BOOL)showsDeleteButtonOnCellContentView;
- (long long)cellContentViewLayout;
- (id)nameOfAddSharedAlbumPlaceholderImage;
- (id)nameOfRecentlyDeletedAlbumPlaceholderImage;
- (id)nameOfHiddenAlbumPlaceholderImage;
- (double)sectionHeaderHeight;
- (struct CGSize { double x0; double x1; })stackSize;
- (void)configureStackViewWithGridStyle:(id)a0;
- (unsigned long long)stackViewStyle;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sectionInsetsForLayoutReferenceSize:(struct CGSize { double x0; double x1; })a0 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (BOOL)shouldUseTableView;
- (double)sectionFooterHeight;
- (struct CGSize { double x0; double x1; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldUseCollageForCloudFeedPlaceholder;

@end
