@class NSString, MKMapView, HKLocationReadings, UIButton;

@interface HKRouteView : UIView <MKMapViewDelegate> {
    MKMapView *_mapView;
    HKLocationReadings *_locationReadings;
}

@property (retain, nonatomic) UIButton *toggleMapTypeButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (id)mapView:(id)a0 rendererForOverlay:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)mapView:(id)a0 viewForAnnotation:(id)a1;
- (void)setLocationReadings:(id)a0;
- (void)_clearMapViewIfNeeded;
- (void)_setRouteMapType:(unsigned long long)a0;
- (void)_addAnnotation:(id)a0 isStartPoint:(BOOL)a1;
- (void)_displayMapRouteForLocationReadings;
- (id)routeImageForSharing;
- (void)_toggleMapType;

@end
