@class UIViewController, NSString, PXPlacesMapFetchResultController, PHAsset, PXPhotoKitAssetsDataSourceManager, UIBarButtonItem;
@protocol PXPlacesMapGeotaggableInfoDelegate, PXPlacesGeotaggable, PXPlacesAssetsSelectionDelegate, PXPlacesMapBarButtonsDelegate, PXPlacesMapLocationEditDelegate;

@interface PXPlacesMapFetchResultViewController : UIViewController <PXPlacesMapControllerChangeDelegate, PXPlacesMapControllerSelectionDelegate, PXOneUpPresentationDelegate, PXChangeObserver, PXPlacesMapFetchResultControllerAccess>

@property (retain, nonatomic) PXPlacesMapFetchResultController *mapFetchResultsController;
@property (retain) PHAsset<PXPlacesGeotaggable> *selectedGeotaggable;
@property (retain, nonatomic) id<PXPlacesMapGeotaggableInfoDelegate> geotaggableInfoDelegate;
@property (retain, nonatomic) UIBarButtonItem *filterAssetsBtn;
@property (retain, nonatomic) PXPhotoKitAssetsDataSourceManager *oneUpDataSourceManager;
@property (weak, nonatomic) id<PXPlacesAssetsSelectionDelegate> assetSelectionDelegate;
@property (weak, nonatomic) id<PXPlacesMapBarButtonsDelegate> barButtonsDelegate;
@property (weak, nonatomic) id<PXPlacesMapLocationEditDelegate> editLocationDelegate;
@property (weak, nonatomic) UIViewController *pxOneUpPresentationViewController;
@property (nonatomic) unsigned long long style;
@property (nonatomic) BOOL showNavigationBar;
@property BOOL canEditLocation;
@property BOOL autoRefocusOnDataChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)px_gridPresentation;
- (id)oneUpPresentationDataSourceManager:(id)a0;
- (long long)oneUpPresentationOrigin:(id)a0;
- (id)oneUpPresentationMediaProvider:(id)a0;
- (void)_commonInit;
- (void)dataSourceDidChange:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)oneUpPresentationInitialAssetReference:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (id)init;
- (void).cxx_destruct;
- (void)loadView;
- (void)_editDidPress;
- (id)_fetchHydratedAssetForPlacesAsset:(id)a0;
- (void)_placeNavigationBarItems:(id)a0;
- (void)_placeToolbarItems:(id)a0;
- (void)_reloadContentModeDisplay:(unsigned long long)a0;
- (void)_selectedGeotaggables:(id)a0;
- (id)dataSourceForAssets:(id)a0;
- (void)didEnterForeground:(id)a0;
- (void)didSelectGeotaggableItems:(id)a0 fromMapView:(id)a1;
- (void)locationServiceAuthorizationChanged;
- (void)mapRegionDidChange:(id)a0;
- (void)ppt_performPlacesScrollTest:(id)a0 iterations:(long long)a1 screenDelta:(long long)a2 delay:(double)a3 completion:(id /* block */)a4;
- (void)ppt_performPlacesZoomTest:(id)a0 iterations:(long long)a1 delay:(double)a2 completion:(id /* block */)a3;
- (BOOL)pu_shouldOptOutFromChromelessBars;
- (void)reloadStyle;
- (void)tapCountToolbarButton:(id)a0;
- (void)tapFilterAssetsBtn:(id)a0;
- (void)tapInfoToolbarButton:(id)a0;
- (void)tapShowAll:(id)a0;

@end
