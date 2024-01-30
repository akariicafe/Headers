@class NSString, MKLocalSearch, MKMapView, MKMapItem;
@protocol MKAnnotation;

@interface ICMapViewController : UIViewController <MKMapViewDelegate>

@property (retain, nonatomic) id<MKAnnotation> annotation;
@property (retain, nonatomic) MKMapView *mapView;
@property (retain, nonatomic) MKMapItem *mapItem;
@property (retain, nonatomic) MKLocalSearch *localSearch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)wantsFullScreenLayout;
- (BOOL)_canShowWhileLocked;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)mapView:(id)a0 didAddAnnotationViews:(id)a1;
- (void)_toolbarItemPressed:(id)a0;
- (id)initWithAnnotation:(id)a0;
- (void)selectPin;

@end
