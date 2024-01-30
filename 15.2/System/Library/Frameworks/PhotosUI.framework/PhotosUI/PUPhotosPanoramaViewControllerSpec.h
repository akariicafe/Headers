@interface PUPhotosPanoramaViewControllerSpec : PULegacyViewControllerSpec

+ (id)padSpec;
+ (id)phoneSpec;

- (double)sectionHeaderHeight;
- (id)gridSpec;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)cellFillMode;
- (unsigned short)thumbnailImageFormat;
- (double)globalFooterHeight;
- (void)configureCollectionViewGridLayout:(id)a0 referenceWidth:(double)a1 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (struct CGSize { double x0; double x1; })_itemSizeForWidth:(double)a0;
- (unsigned short)fastThumbnailImageFormat;

@end
