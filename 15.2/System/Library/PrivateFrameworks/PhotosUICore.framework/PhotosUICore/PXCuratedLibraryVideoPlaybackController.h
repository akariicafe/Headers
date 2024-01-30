@class NSString, PXCuratedLibraryViewModel, PXCuratedLibraryLayout;

@interface PXCuratedLibraryVideoPlaybackController : PXGridInlinePlaybackController <PXChangeObserver, PXGDisplayAssetPixelBufferSourcesProvider, PXGRectDiagnosticsProvider> {
    PXCuratedLibraryViewModel *_viewModel;
    long long _presentedZoomLevel;
    long long _newZoomLevel;
}

@property (retain, nonatomic) PXCuratedLibraryLayout *curatedLibraryLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldDisplayPreviousNonnullPixelBufferForPixelBufferSource:(id)a0;
- (id)createPlaybackRecordForDisplayAsset:(id)a0 mediaProvider:(id)a1 geometryReference:(id)a2;
- (id)pixelBufferSourceForDisplayAsset:(id)a0 mediaProvider:(id)a1 spriteReference:(id)a2;
- (BOOL)canPlayAsset:(id)a0;
- (id)initViewViewModel:(id)a0;
- (BOOL)canProvideGeometriesForRecords;
- (void)enumerateRectDiagnosticsForLayout:(id)a0 usingBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)filterSortedRecordsToPlay:(id)a0;
- (id)init;
- (BOOL)canUpdatePlayingRecords;
- (BOOL)_canPlayVideosInZoomLevel:(long long)a0;
- (BOOL)shouldEnablePlayback;
- (void)didUpdatePlayingRecords;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentVisibleRect;
- (void)recyclePixelBufferSourceForDisplayAssets:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForPlaybackRecord:(id)a0 minPlayableSize:(out struct CGSize { double x0; double x1; } *)a1;

@end
