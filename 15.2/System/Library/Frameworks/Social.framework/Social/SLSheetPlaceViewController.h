@class SLSheetPlaceSearchController, NSString, NSArray, MKMapView, UISearchBar, UITableView, ACAccount, NSObject, SLPlace, NSBundle, UISearchDisplayController;
@protocol SLSheetPlaceViewControllerDelegate, SLPlaceDataSource;

@interface SLSheetPlaceViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate, UISearchDisplayDelegate, MKMapViewDelegate, SLPlaceDataSourceDelegate> {
    NSArray *_places;
    SLPlace *_selectedPlace;
    NSBundle *_effectiveBundle;
    UITableView *_tableView;
    UISearchBar *_searchBar;
    UISearchDisplayController *_searchDisplayController;
    SLSheetPlaceSearchController *_placeSearchController;
    MKMapView *_mapView;
    BOOL _searchPresented;
    BOOL _searchAnimationComplete;
    double _mapHeight;
}

@property (retain) ACAccount *account;
@property (retain) NSObject<SLPlaceDataSource> *placeDataSource;
@property (retain) NSArray *places;
@property (weak) NSObject<SLSheetPlaceViewControllerDelegate> *selectionDelegate;
@property (nonatomic) BOOL searchEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (void)didReceiveMemoryWarning;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)willAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (BOOL)searchDisplayController:(id)a0 shouldReloadTableForSearchString:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void)searchBarCancelButtonClicked:(id)a0;
- (void)searchBarTextDidEndEditing:(id)a0;
- (void)loadView;
- (void)searchBarTextDidBeginEditing:(id)a0;
- (BOOL)searchBarShouldBeginEditing:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setPlaces:(id)a0;
- (void).cxx_destruct;
- (void)mapView:(id)a0 didSelectAnnotationView:(id)a1;
- (void)searchDisplayControllerDidBeginSearch:(id)a0;
- (void)searchDisplayControllerDidEndSearch:(id)a0;
- (void)searchDisplayControllerWillEndSearch:(id)a0;
- (void)cancelButtonTapped:(id)a0;
- (id)places;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_calculatePreferredContentSize;
- (void)_centerMapWithSelectedPlace:(id)a0;
- (double)_mapHeightForInterfaceOrientation:(long long)a0;
- (double)_preferredViewHeight;
- (void)_layoutNormal;
- (void)_layoutForSearch;
- (void)_presentSearch;
- (void)_restoreFromSearch;
- (BOOL)_forceSelectPlace:(id)a0 setMapAnnotation:(BOOL)a1;
- (void)_centerMapForPlaces;
- (struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })_regionForPlaces:(id)a0;
- (id)_placeForRow:(long long)a0;
- (void)placeManager:(id)a0 updatedPlaces:(id)a1;
- (void)placeManager:(id)a0 failedWithError:(id)a1;
- (id)initWithPlaceDataSource:(id)a0 effectiveBundle:(id)a1;
- (void)setSelectedPlace:(id)a0;

@end
