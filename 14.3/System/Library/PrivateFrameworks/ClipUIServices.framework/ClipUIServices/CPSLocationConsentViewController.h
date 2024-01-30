@class OBBoldTrayButton, NSString, MKMapView, CLCircularRegion, MKPointAnnotation, MKCircle, OBLinkTrayButton;

@interface CPSLocationConsentViewController : OBWelcomeController <MKMapViewDelegate> {
    NSString *_appName;
    NSString *_clipBundleID;
    CLCircularRegion *_region;
    struct CLLocationCoordinate2D { double latitude; double longitude; } _deviceLocationCoordinate;
    NSString *_deviceLocationSymbolName;
    MKMapView *_mapView;
    MKCircle *_circleOverlay;
    MKPointAnnotation *_deviceLocationAnnotation;
    OBBoldTrayButton *_allowForAllButton;
    OBLinkTrayButton *_allowOnceButton;
}

@property (copy, nonatomic) id /* block */ actionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (id)mapView:(id)a0 rendererForOverlay:(id)a1;
- (void)mapViewDidChangeVisibleRegion:(id)a0;
- (id)mapView:(id)a0 viewForAnnotation:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (void)_setupContentView;
- (void)_buttonActionTriggered:(id)a0;

@end
