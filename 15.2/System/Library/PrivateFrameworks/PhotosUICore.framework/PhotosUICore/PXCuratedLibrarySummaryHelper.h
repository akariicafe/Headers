@class NSString, PXBrowserSummaryController;
@protocol PXLibrarySummaryDataSource, PXDisplayAssetCollection, PXLibrarySummaryOutputPresenter;

@interface PXCuratedLibrarySummaryHelper : NSObject <PXBrowserSummaryControllerDataSource, PXChangeObserver> {
    BOOL _isPerformingUpdates;
    BOOL _isPerformingChanges;
    struct { BOOL title; BOOL subtitle; BOOL topmostAssetCollection; } _needsUpdateFlags;
    struct { BOOL visibleContentSnapshot; BOOL topmostAssetCollection; BOOL shouldUpdateImmediately; } _dataSourceRespondsTo;
    struct { BOOL setTitle; BOOL setSubtitle; BOOL setAttributedTitle; BOOL defaultAttributes; BOOL emphasizedAttributes; } _outputPresenterRespondsTo;
}

@property (readonly, nonatomic) PXBrowserSummaryController *summaryController;
@property (retain, nonatomic, setter=_setTopmostAssetCollection:) id<PXDisplayAssetCollection> topmostAssetCollection;
@property (weak, nonatomic) id<PXLibrarySummaryDataSource> dataSource;
@property (weak, nonatomic) id<PXLibrarySummaryOutputPresenter> outputPresenter;
@property (nonatomic) BOOL shouldUseAbbreviatedDates;
@property (readonly, nonatomic) BOOL shouldShowImportDates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_performChanges:(id /* block */)a0;
- (void)_updateTitle;
- (void)_updateSubtitleFromSummaryController;
- (void)_updateIfNeeded;
- (void)_invalidateTitle;
- (BOOL)_needsUpdate;
- (void)visibleContentDidChange;
- (void)_updateSubtitle;
- (void)_invalidateTopmostAssetCollection;
- (void)_setNeedsUpdate;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_invalidateSubtitle;
- (id)init;
- (void)_updateTopmostAssetCollection;
- (id)visibleContentSnapshotForBrowserSummaryController:(id)a0;
- (void)_updateTitleFromSummaryController;
- (BOOL)browserSummaryControllerShouldUpdateImmediately:(id)a0;

@end
