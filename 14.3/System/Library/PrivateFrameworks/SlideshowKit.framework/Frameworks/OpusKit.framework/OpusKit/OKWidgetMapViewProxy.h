@class NSString, OKMKMapView;

@interface OKWidgetMapViewProxy : OKWidgetView <OKWidgetMapViewProxyExports, UIGestureRecognizerDelegate, MKMapViewDelegate> {
    struct { struct CLLocationCoordinate2D { double latitude; double longitude; } center; struct { double latitudeDelta; double longitudeDelta; } span; } _region;
    BOOL _zoomToFitAnnotations;
}

@property (readonly, retain, nonatomic) OKMKMapView *mapView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)a0;

- (BOOL)prepareForDisplay:(BOOL)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)mapViewDidFinishRenderingMap:(id)a0 fullyRendered:(BOOL)a1;
- (id)valueForUndefinedKey:(id)a0;
- (void)mapView:(id)a0 annotationView:(id)a1 calloutAccessoryControlTapped:(id)a2;
- (id)initWithWidget:(id)a0;
- (id)mapView:(id)a0 viewForAnnotation:(id)a1;
- (id)settingObjectForKey:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)prepareForWarmup:(BOOL)a0;
- (BOOL)prepareForUnload:(BOOL)a0;
- (BOOL)supportsReadiness;
- (void)setAntialiasing:(BOOL)a0;
- (BOOL)settingScrollEnabled;
- (void)setSettingScrollEnabled:(BOOL)a0;
- (void)selectAnnotationWithIdentifier:(id)a0 animated:(BOOL)a1;
- (void)zoomToAnnotationsWithIdentifiers:(id)a0 animated:(BOOL)a1;
- (void)setSettingShowsPointsOfInterest:(BOOL)a0;
- (BOOL)settingShowsPointsOfInterest;
- (void)setSettingShowsBuildings:(BOOL)a0;
- (BOOL)settingShowsBuildings;
- (unsigned long long)settingMapType;
- (void)setSettingMapType:(unsigned long long)a0;
- (BOOL)settingZoomEnabled;
- (void)setSettingZoomEnabled:(BOOL)a0;
- (BOOL)settingScrollWheelEnabled;
- (void)setSettingScrollWheelEnabled:(BOOL)a0;
- (BOOL)settingShowsUserLocation;
- (void)setSettingShowsUserLocation:(BOOL)a0;
- (struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })settingRegion;
- (void)setSettingRegion:(struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (struct CLLocationCoordinate2D { double x0; double x1; })settingCenterCoordinate;
- (void)setSettingCenterCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (void)setSettingAnnotations:(id)a0;
- (void)setSettingZoomToFitAnnotations:(BOOL)a0;

@end
