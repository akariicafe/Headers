@class NSString, PXInlineHeadersSpriteLayout, PXZoomableInlineHeadersDataSourceManager, PXZoomableInlineHeadersLayoutSpec;
@protocol PXZoomableInlineHeadersLayoutGeometrySource;

@interface PXZoomableInlineHeadersLayout : PXGSplitLayout <PXSectionedDataSourceManagerObserver> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    PXInlineHeadersSpriteLayout *_yearsLayout;
    PXInlineHeadersSpriteLayout *_monthsLayout;
}

@property (readonly, nonatomic) PXZoomableInlineHeadersDataSourceManager *dataSourceManager;
@property (retain, nonatomic) PXZoomableInlineHeadersLayoutSpec *spec;
@property (nonatomic) double yearsAlpha;
@property (nonatomic) double monthsAlpha;
@property (weak, nonatomic) id<PXZoomableInlineHeadersLayoutGeometrySource> geometrySource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidateAnchorItemFrames;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)update;
- (void)_updateSublayouts;
- (id)initWithDataSourceManager:(id)a0;
- (void)invalidateGeometry;
- (void).cxx_destruct;

@end
