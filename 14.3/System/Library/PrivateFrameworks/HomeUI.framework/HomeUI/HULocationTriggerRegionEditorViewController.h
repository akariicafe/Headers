@class UIView, MKMapView, NSArray, MKLocalSearch, HMHome, HULocationTriggerEditorMapDragRadiusView, HULocationTriggerRegion, UISearchBar, UITableView, NSLayoutConstraint, NSString, NSIndexPath;
@protocol HULocationTriggerRegionEditorViewControllerDelegate;

@interface HULocationTriggerRegionEditorViewController : UIViewController <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource, MKMapViewDelegate, MKMapViewDelegatePrivate, HFLocationManagerObserver, HULocationTriggerEditorMapDragRadiusViewDelegate, HUPreloadableViewController>

@property (retain, nonatomic) HULocationTriggerRegion *region;
@property (retain, nonatomic) UISearchBar *searchBar;
@property (retain, nonatomic) UIView *dividerView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) MKMapView *mapView;
@property (retain, nonatomic) HULocationTriggerEditorMapDragRadiusView *dragView;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (retain, nonatomic) NSArray *constraints;
@property (retain, nonatomic) NSLayoutConstraint *mapHeightConstraint;
@property (retain, nonatomic) NSArray *recents;
@property (retain, nonatomic) MKLocalSearch *localSearch;
@property (retain, nonatomic) NSArray *localSearchResults;
@property (readonly, nonatomic) HMHome *home;
@property (weak, nonatomic) id<HULocationTriggerRegionEditorViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_homeImage;
+ (id)_pinImage;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (id)mapView:(id)a0 rendererForOverlay:(id)a1;
- (void)mapView:(id)a0 regionWillChangeAnimated:(BOOL)a1;
- (void)_done:(id)a0;
- (void)mapView:(id)a0 regionDidChangeAnimated:(BOOL)a1;
- (void)_cancel:(id)a0;
- (BOOL)_hasLocation;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)mapViewDidChangeVisibleRegion:(id)a0;
- (void)loadView;
- (void)_reloadData;
- (id)initWithCoder:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)mapView:(id)a0 viewForAnnotation:(id)a1;
- (void)mapView:(id)a0 didSelectAnnotationView:(id)a1;
- (void)mapView:(id)a0 didDeselectAnnotationView:(id)a1;
- (void)updateViewConstraints;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_updateUI;
- (double)_mapHeight;
- (void)viewWillAppear:(BOOL)a0;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)hu_preloadContent;
- (id)initWithRegion:(id)a0 home:(id)a1 delegate:(id)a2;
- (void)_updateRecentsWithSearchText:(id)a0;
- (long long)_homeRowIndex;
- (void)_setupMap;
- (void)_updateMapHeight;
- (void)_updateUIWithRegion:(id)a0;
- (unsigned long long)_proximityType;
- (long long)_firstRecentRowIndex;
- (long long)_lastRecentRowIndex;
- (void)_displayLocationCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (void)_showMapRegionForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 radius:(double)a1;
- (id)_overlayWithCenterCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 radius:(double)a1;
- (long long)_firstLocalSearchResultRowIndex;
- (id)_locationForRecentMetadataDictionary:(id)a0;
- (void)_resetSearchResults;
- (void)mapRadiusView:(id)a0 radiusDidChange:(double)a1;
- (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })mapRadiusView:(id)a0 boundingMapRectForOverlay:(id)a1;
- (id)mapRadiusView:(id)a0 overlayForRadius:(double)a1;
- (id)showLocationRegionInvalidAlert;

@end
