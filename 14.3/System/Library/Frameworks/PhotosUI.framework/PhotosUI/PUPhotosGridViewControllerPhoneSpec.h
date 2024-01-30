@interface PUPhotosGridViewControllerPhoneSpec : PUPhotosGridViewControllerSpec

- (struct CGSize { double x0; double x1; })baseInterItemSpacing;
- (void)configureCollectionViewGridLayout:(id)a0 forWidth:(double)a1 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (unsigned short)thumbnailImageFormat;
- (BOOL)shouldUseAspectItems;
- (long long)forceLoadInitialSectionCount;
- (BOOL)shouldPlaceSelectAllButtonInRightNavigationBar;
- (BOOL)canDisplaySlideshowButton;
- (id)albumPickerViewControllerSpec;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })gridContentInsets;
- (unsigned long long)supportedInterfaceOrientations;
- (id)photosPickerViewControllerSpec;
- (BOOL)canDisplayOptionsInPopover;
- (long long)cellFillMode;

@end
