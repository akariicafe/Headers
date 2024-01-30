@interface PUPhotosGridViewControllerPhoneSpec : PUPhotosGridViewControllerSpec

- (unsigned long long)supportedInterfaceOrientations;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })gridContentInsets;
- (unsigned short)thumbnailImageFormat;
- (id)albumPickerViewControllerSpec;
- (struct CGSize { double x0; double x1; })baseInterItemSpacing;
- (BOOL)canDisplayOptionsInPopover;
- (BOOL)canDisplaySlideshowButton;
- (long long)cellFillMode;
- (void)configureCollectionViewGridLayout:(id)a0 forWidth:(double)a1 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (long long)forceLoadInitialSectionCount;
- (BOOL)shouldPlaceSelectAllButtonInRightNavigationBar;
- (BOOL)shouldUseAspectItems;

@end
