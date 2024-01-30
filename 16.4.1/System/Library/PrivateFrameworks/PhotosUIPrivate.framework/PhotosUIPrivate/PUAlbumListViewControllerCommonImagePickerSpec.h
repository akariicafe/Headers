@interface PUAlbumListViewControllerCommonImagePickerSpec : PUAlbumListViewControllerCommonPhoneSpec

- (void)configureStackViewWithGridStyle:(id)a0;
- (double)sectionFooterHeight;
- (struct CGSize { double x0; double x1; })imageSize;
- (double)sectionHeaderHeight;
- (unsigned long long)stackViewStyle;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sectionInsetsForLayoutReferenceSize:(struct CGSize { double x0; double x1; })a0 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (long long)cellContentViewLayout;
- (struct CGSize { double x0; double x1; })stackSize;
- (BOOL)showsDeleteButtonOnCellContentView;
- (BOOL)shouldUseTableView;
- (unsigned long long)folderStackViewStyle;
- (struct CGSize { double x0; double x1; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldUseCollageForCloudFeedPlaceholder;

@end
