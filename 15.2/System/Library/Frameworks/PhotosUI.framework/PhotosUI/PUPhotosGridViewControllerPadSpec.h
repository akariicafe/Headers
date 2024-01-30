@interface PUPhotosGridViewControllerPadSpec : PUPhotosGridViewControllerSpec

- (unsigned long long)supportedInterfaceOrientations;
- (id)photosPickerViewControllerSpec;
- (BOOL)canDisplayOptionsInPopover;
- (long long)sectionHeaderStyle;
- (long long)cellFillMode;
- (struct CGSize { double x0; double x1; })baseInterItemSpacing;
- (void)configureCollectionViewGridLayout:(id)a0 forWidth:(double)a1 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (BOOL)canDisplayEditActionsInNavigationBar;
- (unsigned short)thumbnailImageFormat;
- (BOOL)usesStackPopTransition;
- (BOOL)shouldUseAspectItems;
- (BOOL)wantsBackButtonTitleForPhotoBrowser;
- (long long)cellBannerTextAlignment;
- (BOOL)shouldPlaceSelectAllButtonInRightNavigationBar;
- (BOOL)canDisplaySlideshowButton;
- (id)albumPickerViewControllerSpec;
- (BOOL)wantsCustomNavigationTransition;
- (BOOL)shouldPlaceDeleteInCenterToolbarPosition;

@end
