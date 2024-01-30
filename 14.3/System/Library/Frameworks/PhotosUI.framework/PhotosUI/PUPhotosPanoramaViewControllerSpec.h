@interface PUPhotosPanoramaViewControllerSpec : PULegacyViewControllerSpec

+ (id)phoneSpec;
+ (id)padSpec;

- (unsigned short)thumbnailImageFormat;
- (double)sectionHeaderHeight;
- (id)gridSpec;
- (struct CGSize { double x0; double x1; })_itemSizeForWidth:(double)a0;
- (void)configureCollectionViewGridLayout:(id)a0 referenceWidth:(double)a1 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (unsigned short)fastThumbnailImageFormat;
- (unsigned long long)supportedInterfaceOrientations;
- (double)globalFooterHeight;
- (long long)cellFillMode;

@end
