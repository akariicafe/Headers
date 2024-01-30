@interface PUAlbumListViewControllerCommonImagePickerSpec : PUAlbumListViewControllerCommonPhoneSpec

- (struct CGSize { double x0; double x1; })stackSize;
- (double)sectionHeaderHeight;
- (unsigned long long)folderStackViewStyle;
- (id)nameOfAddSharedAlbumPlaceholderImage;
- (double)sectionFooterHeight;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sectionInsetsForLayoutReferenceSize:(struct CGSize { double x0; double x1; })a0 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (id)nameOfRecentlyDeletedAlbumPlaceholderImage;
- (BOOL)shouldUseTableView;
- (BOOL)shouldUseCollageForCloudFeedPlaceholder;
- (struct CGSize { double x0; double x1; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureStackViewWithGridStyle:(id)a0;
- (unsigned long long)stackViewStyle;
- (id)nameOfEmptyAlbumPlaceholderImage;
- (long long)cellContentViewLayout;
- (id)nameOfEmptySharedAlbumPlaceholderImage;
- (id)nameOfHiddenAlbumPlaceholderImage;
- (BOOL)showsDeleteButtonOnCellContentView;
- (struct CGSize { double x0; double x1; })imageSize;

@end
