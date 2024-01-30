@class PXPlacesPhotoAssetsStore, PXPlacesMapView, PXPlacesMapController, NSObject, PXPlacesMapPipeline;
@protocol PXPlacesMapControllerAccess, PXPlacesMapGeotaggableInfoDelegate, OS_dispatch_queue;

@interface PXPlacesMapFetchResultController : NSObject

@property (retain, nonatomic) id<PXPlacesMapControllerAccess> mapViewController;
@property (weak, nonatomic) id<PXPlacesMapGeotaggableInfoDelegate> geotaggableInfoDelegate;
@property (retain) PXPlacesPhotoAssetsStore *providedAssetStore;
@property (retain) PXPlacesMapPipeline *providedPipeline;
@property (retain, nonatomic) PXPlacesPhotoAssetsStore *albumAssetStore;
@property (retain, nonatomic) PXPlacesMapPipeline *albumPipeline;
@property (retain, nonatomic) PXPlacesMapPipeline *currentPipeline;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic) PXPlacesMapView *mapView;
@property (readonly, nonatomic) PXPlacesMapController *mapController;
@property (nonatomic) unsigned long long contentMode;

- (void)resumeWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)loadFetchResult:(id)a0 withCompletion:(id /* block */)a1;
- (void)focusOnGeotaggablesAnimated:(BOOL)a0;
- (void)focusOnProvidedAssetsAnimated:(BOOL)a0;
- (id)initWithGeotaggableInfoDelegate:(id)a0 andMapViewController:(id)a1;
- (void)loadFetchResults:(id)a0 withCompletion:(id /* block */)a1;
- (void)loadProvidedAssetStoreWithCompletion:(id /* block */)a0;
- (void)reloadContentModeWithCompletion:(id /* block */)a0;
- (void)reloadMapWithCompletion:(id /* block */)a0;
- (id)visibleGeotaggables;
- (id)currentAssetStore;
- (void)focusOnMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 animated:(BOOL)a1;
- (void)focusOnProvidedAssetsImmediately;

@end
