@class UIView, NSString, MKMapView, NSCache, NSSet, UISearchBar, UITableView, NSMutableArray, EKStructuredLocation, MKPointAnnotation, MKCircleRenderer, NSObject;
@protocol OS_dispatch_queue;

@interface EKEventDetailLocationDisambiguationContentViewController : UIViewController <UISearchBarDelegate, MKMapViewDelegate, UITableViewDelegate, UITableViewDataSource> {
    EKStructuredLocation *_location;
    NSMutableArray *_pois;
    id /* block */ _completionBlock;
    UISearchBar *_searchBar;
    MKMapView *_mapView;
    UIView *_separatorLine;
    UITableView *_tableView;
    MKPointAnnotation *_pin;
    MKCircleRenderer *_circleRenderer;
    BOOL _textChanged;
    BOOL _geocoding;
    BOOL _done;
    NSObject<OS_dispatch_queue> *_iconRenderQueue;
    NSCache *_iconCache;
    BOOL _rowSelectionInitialized;
    unsigned long long _currentLayoutParadigm;
    NSSet *_tallConstraints;
    NSSet *_iPadConstraints;
    NSSet *_splitConstraints;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)searchBarTextDidEndEditing:(id)a0;
- (void)tableView:(id)a0 willDisplayHeaderView:(id)a1 forSection:(long long)a2;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)updateViewConstraints;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)searchBarSearchButtonClicked:(id)a0;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (BOOL)searchBarShouldBeginEditing:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)_createConstraints;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (id)mapView:(id)a0 rendererForOverlay:(id)a1;
- (void)doneTapped:(id)a0;
- (void)_deselectCircle;
- (id)_constraintsForParadigm:(unsigned long long)a0;
- (void)_selectCircle;
- (void)_selectRow:(unsigned long long)a0;
- (BOOL)_shouldEnableAddButton;
- (void)_updateMapRegion;
- (void)cancelTapped:(id)a0;
- (id)initWithLocation:(id)a0 pois:(id)a1 completionBlock:(id /* block */)a2;

@end
