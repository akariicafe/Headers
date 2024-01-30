@interface PUAlbumListViewControllerCommonPhoneSpec : PUAlbumListViewControllerSpec

- (double)sectionFooterHeight;
- (double)sectionHeaderHeight;
- (struct UIOffset { double x0; double x1; })stackPerspectiveOffset;
- (double)posterSquareCornerRadius;
- (struct UIOffset { double x0; double x1; })stackOffset;
- (BOOL)showsDeleteButtonOnCellContentView;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })stackPerspectiveInsets;
- (double)posterSubitemCornerRadius;
- (long long)albumDeletionWarningStyle;
- (id)albumViewControllerSpec;
- (id)emptyStackPhotoDecoration;
- (id)feedViewControllerSpec;
- (id)gridViewControllerSpec;
- (id)panoramaViewControllerSpec;
- (BOOL)shouldUseCollageForCloudFeedPlaceholder;
- (id)stackPhotoDecoration;

@end
