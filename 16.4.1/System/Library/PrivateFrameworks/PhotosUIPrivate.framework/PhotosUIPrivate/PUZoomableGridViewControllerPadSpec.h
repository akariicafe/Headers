@interface PUZoomableGridViewControllerPadSpec : PUZoomableGridViewControllerSpec

- (BOOL)canDisplayMultipleRightBarButtonItems;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionsLevelSectionHeaderHighlightInset;
- (struct CGSize { double x0; double x1; })collectionsLevelThumbnailSize;
- (long long)collectionsSectionHeaderStyle;
- (void)configureCollectionsLevelGridLayout:(id)a0 forWidth:(double)a1 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (void)configureFullMomentsLevelGridLayout:(id)a0 forWidth:(double)a1 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (void)configureYearsLevelGridLayout:(id)a0 forWidth:(double)a1 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })fullMomentsLevelSectionHeaderHighlightInset;
- (struct CGSize { double x0; double x1; })fullMomentsLevelThumbnailSize;
- (long long)fullMomentsSectionHeaderStyle;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })magnifiedDragEdgeInsets;
- (struct CGSize { double x0; double x1; })magnifiedImageSize;
- (double)magnifiedYOffset;
- (id)newGridSpec;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })yearsLevelSectionHeaderHighlightInset;
- (struct CGSize { double x0; double x1; })yearsLevelThumbnailSize;
- (long long)yearsSectionHeaderStyle;

@end
