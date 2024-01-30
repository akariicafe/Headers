@class FMAnnotationView, MKMapView, NSString, FMFWildcardGestureRecognizer;
@protocol FMFMapViewDelegateInternalDelegate;

@interface FMFMapViewDelegateInternal : NSObject <UIGestureRecognizerDelegate, MKMapViewDelegate>

@property (weak, nonatomic) id<FMFMapViewDelegateInternalDelegate> delegate;
@property (nonatomic) BOOL respondingToUserTouch;
@property (retain, nonatomic) FMFWildcardGestureRecognizer *gr;
@property (nonatomic) FMAnnotationView *selectedAnnotationView;
@property (nonatomic) MKMapView *mapView;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } lastUserLocationCoordinate;
@property (nonatomic) BOOL isMapCenteringDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)mapView:(id)a0 didUpdateUserLocation:(id)a1;
- (id)mapView:(id)a0 rendererForOverlay:(id)a1;
- (void)mapView:(id)a0 regionWillChangeAnimated:(BOOL)a1;
- (void)mapView:(id)a0 regionDidChangeAnimated:(BOOL)a1;
- (void)mapViewDidFinishRenderingMap:(id)a0 fullyRendered:(BOOL)a1;
- (void).cxx_destruct;
- (id)mapView:(id)a0 viewForAnnotation:(id)a1;
- (void)mapView:(id)a0 didSelectAnnotationView:(id)a1;
- (void)mapView:(id)a0 didDeselectAnnotationView:(id)a1;
- (BOOL)canSelectAnnotation:(id)a0;
- (void)endTouches;
- (void)zoomToFitAnnotationsForMapView:(id)a0 includeMe:(BOOL)a1 disallowAnimation:(BOOL)a2;
- (id)initWithDelegate:(id)a0 mapView:(id)a1;
- (void)updateOverlaysForAnnotationMove:(id)a0 mapView:(id)a1;
- (void)selectAnnotation:(id)a0;
- (void)zoomToFitLocation:(id)a0 forMapView:(id)a1;
- (id)accuracyCircleForLocation:(id)a0;
- (void)slideAnnotation:(id)a0 intoViewIfNeededForMapView:(id)a1;
- (id)fmfOverlayColorSatellite;
- (id)fmfOverlayColor;
- (void)_moveCenterByOffset:(struct CGPoint { double x0; double x1; })a0 from:(struct CLLocationCoordinate2D { double x0; double x1; })a1 mapView:(id)a2;
- (BOOL)regionIsValid:(struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsetsWithMinApplied:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })mapRectMakeWithRadialDistanceForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 andRadius:(double)a1;

@end
