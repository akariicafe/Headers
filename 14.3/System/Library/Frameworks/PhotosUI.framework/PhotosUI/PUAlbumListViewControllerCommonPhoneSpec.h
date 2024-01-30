@interface PUAlbumListViewControllerCommonPhoneSpec : PUAlbumListViewControllerSpec

- (BOOL)showsDeleteButtonOnCellContentView;
- (double)posterSubitemCornerRadius;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })stackPerspectiveInsets;
- (double)posterSquareCornerRadius;
- (struct UIOffset { double x0; double x1; })stackOffset;
- (double)sectionHeaderHeight;
- (id)stackPhotoDecoration;
- (struct UIOffset { double x0; double x1; })stackPerspectiveOffset;
- (id)feedViewControllerSpec;
- (double)sectionFooterHeight;
- (long long)albumDeletionConfirmationStyle;
- (id)photosPickerViewControllerSpec;
- (BOOL)shouldUseCollageForCloudFeedPlaceholder;
- (id)emptyStackPhotoDecoration;
- (id)gridViewControllerSpec;
- (id)albumViewControllerSpec;
- (id)panoramaViewControllerSpec;

@end
