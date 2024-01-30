@class NSString, MKMapView;

@interface HKMapRouteTableViewCell : UITableViewCell <MKMapViewDelegate>

@property (class, readonly) NSString *defaultReuseIdentifier;

@property (retain) MKMapView *mapView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)setupSubviews;
- (id)mapView:(id)a0 rendererForOverlay:(id)a1;
- (id)mapView:(id)a0 viewForAnnotation:(id)a1;
- (void)setUpConstraints;

@end
