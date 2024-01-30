@class NSString, PUGridZoomLevelInfo;

@interface PUFullMomentsZoomLevelInfo : PUGridZoomLevelInfo <PUSectionedGridLayoutDelegate, PUPhotosSectionHeaderViewDelegate> {
    PUGridZoomLevelInfo *_transitionOtherLevelInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)headerView:(id)a0 actionButtonPressed:(id)a1;
- (void).cxx_destruct;
- (BOOL)supportsEditMode;
- (BOOL)configureGridCell:(id)a0 forIndexPath:(id)a1;
- (BOOL)wantsMagnifierNavigation;
- (BOOL)wantsAssetCountsVisible;
- (BOOL)wantsCloudStatusVisible;
- (BOOL)wantsAutomaticContentOffsetAdjustment;
- (void)prepareForTransitionToZoomLevelInfo:(id)a0 animated:(BOOL)a1 interactive:(BOOL)a2;
- (void)prepareForTransitionFromZoomLevelInfo:(id)a0 animated:(BOOL)a1 interactive:(BOOL)a2;
- (void)didFinishZoomLevelTransition;
- (void)_prepareTransitionSubviewsForCell:(id)a0 atIndexPath:(id)a1 isAppearing:(BOOL)a2;
- (void)_prepareTransitionImageContentForCell:(id)a0 atIndexPath:(id)a1 appearingZoomLevelInfo:(id)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_fillerViewInsetsForItemAtIndexPath:(id)a0;
- (void)_getDataForVisualSection:(long long)a0 hasActionButton:(BOOL *)a1 locations:(id *)a2 title:(id *)a3 startDate:(id *)a4 endDate:(id *)a5;
- (void)sectionedGridLayout:(id)a0 didFinalizePrepareTransitionIsAppearing:(BOOL)a1;
- (double)sectionedGridLayout:(id)a0 sectionHeaderHeightForVisualSection:(long long)a1;
- (double)sectionedGridLayout:(id)a0 accessibilitySectionHeaderHeightForVisualSection:(long long)a1;
- (struct __CFString { } *)aggregateLevelKey;
- (id)newCollectionViewLayout;
- (id)sectionHeaderElementKind;
- (struct CGSize { double x0; double x1; })thumbnailImageSize;
- (void)updateLayoutMetricsForWidth:(double)a0 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (struct CGSize { double x0; double x1; })imageRequestItemSize;
- (long long)cellFillMode;
- (void)configureSectionHeaderView:(id)a0 forVisualSection:(long long)a1;
- (void)getPhotosDataSource:(id *)a0 displayTitleInfo:(id *)a1 forDetailsForVisualSection:(long long)a2;
- (id)assetsToDisplayInMapForVisualSection:(long long)a0;
- (id)diagnosticsProviderForVisualSection:(long long)a0;
- (BOOL)supportsIncrementalChangeNotifications;

@end
