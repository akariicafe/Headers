@class NSDateFormatter, MKMapView, NSArray, NSString, NSMutableArray;

@interface WFKnownNetworkGeoTagViewController : UIViewController <MKMapViewDelegate>

@property (retain, nonatomic) MKMapView *mapView;
@property (retain, nonatomic) NSMutableArray *annotations;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (retain, nonatomic) NSArray *geoTags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)mapView:(id)a0 viewForAnnotation:(id)a1;
- (void)addMap;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)addAnnotations;
- (void)setVisibleMapRegion;
- (void)showPinsOnMap;
- (void)addAnnotationForGeotag:(id)a0;

@end
