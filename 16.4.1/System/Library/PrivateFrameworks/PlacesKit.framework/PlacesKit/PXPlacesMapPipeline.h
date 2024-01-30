@class NSString, PXPlacesImageCache;
@protocol PXPlacesMapLayout, PXPlacesMapUpdatePlan, PXPlacesGeotaggedItemDataSource, PXPlacesMapRenderer, PXPlacesMapSelectionHandler;

@interface PXPlacesMapPipeline : NSObject <PXPlacesMapPipelineComponentProvider>

@property (readonly, nonatomic) id<PXPlacesGeotaggedItemDataSource> dataSource;
@property (readonly) id<PXPlacesMapLayout> layout;
@property (readonly) id<PXPlacesMapUpdatePlan> updatePlan;
@property (readonly) id<PXPlacesMapRenderer> renderer;
@property (readonly) id<PXPlacesMapSelectionHandler> selectionHandler;
@property (retain) PXPlacesImageCache *imageCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void).cxx_destruct;
- (id)executeRemoval;
- (id)executeWithUpdatedViewPort:(id)a0 andDataSourceChange:(id)a1;
- (id)initWithLayout:(id)a0 updatePlan:(id)a1 renderer:(id)a2 selectionHandler:(id)a3;

@end
