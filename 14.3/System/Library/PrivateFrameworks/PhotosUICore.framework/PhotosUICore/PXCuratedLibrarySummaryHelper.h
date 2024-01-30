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

- (void)_updateTitle;
- (void)_performChanges:(id /* block */)a0;
- (void)visibleContentDidChange;
- (id)init;
- (void)_updateSubtitle;
- (void).cxx_destruct;
- (void)_setNeedsUpdate;
- (BOOL)browserSummaryControllerShouldUpdateImmediately:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_updateTopmostAssetCollection;
- (void)_updateTitleFromSummaryController;
- (BOOL)_needsUpdate;
- (void)_updateIfNeeded;
- (id)visibleContentSnapshotForBrowserSummaryController:(id)a0;
- (void)_updateSubtitleFromSummaryController;
- (void)_invalidateSubtitle;
- (void)_invalidateTopmostAssetCollection;
- (void)_invalidateTitle;

@end
