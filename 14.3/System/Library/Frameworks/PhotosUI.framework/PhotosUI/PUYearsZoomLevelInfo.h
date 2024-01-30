@class NSString, PHFetchResult, NSMutableDictionary;

@interface PUYearsZoomLevelInfo : PUGridZoomLevelInfo <PUSectionedGridLayoutDelegate> {
    PHFetchResult *_yearsFetchResult;
    NSMutableDictionary *_resultsForCollectionList;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)dateRangeFormatterPreset;
- (void)willShowMagnifiedViewController:(id)a0;
- (id)_yearsFetchResult;
- (long long)numberOfVisualSectionsForSectionedGridLayout:(id)a0;
- (id)sectionedGridLayout:(id)a0 sectionsForVisualSection:(long long)a1;
- (double)sectionedGridLayout:(id)a0 sectionHeaderHeightForVisualSection:(long long)a1;
- (double)sectionedGridLayout:(id)a0 accessibilitySectionHeaderHeightForVisualSection:(long long)a1;
- (struct __CFString { } *)aggregateLevelKey;
- (id)initWithZoomLevel:(unsigned long long)a0 zoomLevelManager:(id)a1 baseZoomLevelInfo:(id)a2;
- (id)momentsInCollectionList:(id)a0;
- (id)newCollectionViewLayout;
- (id)renderedStripsElementKind;
- (id)sectionHeaderElementKind;
- (long long)maxRowsPerSection;
- (struct CGSize { double x0; double x1; })thumbnailImageSize;
- (void)updateLayoutMetricsForWidth:(double)a0 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (struct CGSize { double x0; double x1; })imageRequestItemSize;
- (long long)cellFillMode;
- (void)configureSectionHeaderView:(id)a0 forVisualSection:(long long)a1;
- (void)getPhotosDataSource:(id *)a0 displayTitleInfo:(id *)a1 forDetailsForVisualSection:(long long)a2;
- (id)assetsToDisplayInMapForVisualSection:(long long)a0;
- (id)diagnosticsProviderForVisualSection:(long long)a0;
- (long long)imageDeliveryMode;
- (double)cellAspectRatioHint;
- (void)modelDidChange:(id)a0;
- (BOOL)supportsIncrementalChangeNotifications;

@end
