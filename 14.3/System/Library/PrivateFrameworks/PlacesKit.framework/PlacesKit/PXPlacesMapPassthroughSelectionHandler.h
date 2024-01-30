@class NSString;
@protocol PXPlacesMapPipelineComponentProvider;

@interface PXPlacesMapPassthroughSelectionHandler : NSObject <PXPlacesMapSelectionHandler>

@property (weak, nonatomic) id<PXPlacesMapPipelineComponentProvider> pipelineComponentProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)reset;
- (id)selectedGeotaggablesForRenderable:(id)a0 mapView:(id)a1;

@end
