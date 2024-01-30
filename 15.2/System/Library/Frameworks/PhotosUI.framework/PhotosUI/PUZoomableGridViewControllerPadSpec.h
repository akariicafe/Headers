@interface PUZoomableGridViewControllerPadSpec : PUZoomableGridViewControllerSpec

- (struct CGSize { double x0; double x1; })fullMomentsLevelThumbnailSize;
- (void)configureYearsLevelGridLayout:(id)a0 forWidth:(double)a1 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (long long)fullMomentsSectionHeaderStyle;
- (long long)collectionsSectionHeaderStyle;
- (struct CGSize { double x0; double x1; })yearsLevelThumbnailSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionsLevelSectionHeaderHighlightInset;
- (void)configureCollectionsLevelGridLayout:(id)a0 forWidth:(double)a1 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (long long)yearsSectionHeaderStyle;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })fullMomentsLevelSectionHeaderHighlightInset;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })magnifiedDragEdgeInsets;
- (struct CGSize { double x0; double x1; })collectionsLevelThumbnailSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })yearsLevelSectionHeaderHighlightInset;
- (BOOL)canDisplayMultipleRightBarButtonItems;
- (id)newGridSpec;
- (void)configureFullMomentsLevelGridLayout:(id)a0 forWidth:(double)a1 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (struct CGSize { double x0; double x1; })magnifiedImageSize;
- (double)magnifiedYOffset;

@end
