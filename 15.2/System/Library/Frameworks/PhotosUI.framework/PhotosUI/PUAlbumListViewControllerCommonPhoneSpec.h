@interface PUAlbumListViewControllerCommonPhoneSpec : PUAlbumListViewControllerSpec

- (struct UIOffset { double x0; double x1; })stackPerspectiveOffset;
- (double)sectionHeaderHeight;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })stackPerspectiveInsets;
- (double)sectionFooterHeight;
- (double)posterSquareCornerRadius;
- (id)feedViewControllerSpec;
- (long long)albumDeletionConfirmationStyle;
- (id)photosPickerViewControllerSpec;
- (BOOL)shouldUseCollageForCloudFeedPlaceholder;
- (id)emptyStackPhotoDecoration;
- (id)gridViewControllerSpec;
- (id)albumViewControllerSpec;
- (struct UIOffset { double x0; double x1; })stackOffset;
- (id)panoramaViewControllerSpec;
- (double)posterSubitemCornerRadius;
- (id)stackPhotoDecoration;
- (BOOL)showsDeleteButtonOnCellContentView;

@end
