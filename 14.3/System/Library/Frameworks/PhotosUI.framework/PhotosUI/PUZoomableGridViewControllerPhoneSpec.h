@interface PUZoomableGridViewControllerPhoneSpec : PUZoomableGridViewControllerSpec

- (struct CGSize { double x0; double x1; })magnifiedImageSize;
- (long long)fullMomentsSectionHeaderStyle;
- (long long)collectionsSectionHeaderStyle;
- (void)configureYearsLevelGridLayout:(id)a0 forWidth:(double)a1 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (BOOL)canDisplayMultipleRightBarButtonItems;
- (struct CGSize { double x0; double x1; })collectionsLevelThumbnailSize;
- (void)configureFullMomentsLevelGridLayout:(id)a0 forWidth:(double)a1 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (struct CGSize { double x0; double x1; })yearsLevelThumbnailSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })magnifiedDragEdgeInsets;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionsLevelSectionHeaderHighlightInset;
- (void)updateGridLayoutUsingFloatingHeaders:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })yearsLevelSectionHeaderHighlightInset;
- (double)magnifiedYOffset;
- (void)configureCollectionsLevelGridLayout:(id)a0 forWidth:(double)a1 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })fullMomentsLevelSectionHeaderHighlightInset;
- (struct CGSize { double x0; double x1; })fullMomentsLevelThumbnailSize;
- (id)newGridSpec;
- (BOOL)dynamicLayoutEnabled;
- (long long)yearsSectionHeaderStyle;

@end
