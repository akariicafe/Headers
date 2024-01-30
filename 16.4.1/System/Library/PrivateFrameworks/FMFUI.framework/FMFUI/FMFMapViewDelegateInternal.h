@class NSString, MKMapView, FMFWildcardGestureRecognizer, FMFAnnotationView;
@protocol FMFMapViewDelegateInternalDelegate;

@interface FMFMapViewDelegateInternal : NSObject <UIGestureRecognizerDelegate, MKMapViewDelegate>

@property (weak, nonatomic) id<FMFMapViewDelegateInternalDelegate> delegate;
@property (nonatomic) BOOL respondingToUserTouch;
@property (retain, nonatomic) FMFWildcardGestureRecognizer *gr;
@property (nonatomic) FMFAnnotationView *selectedAnnotationView;
@property (nonatomic) MKMapView *mapView;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } lastUserLocationCoordinate;
@property (nonatomic) BOOL isMapCenteringDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)mapView:(id)a0 didDeselectAnnotationView:(id)a1;
- (void)mapView:(id)a0 didSelectAnnotationView:(id)a1;
- (void)mapView:(id)a0 didUpdateUserLocation:(id)a1;
- (void)mapView:(id)a0 regionDidChangeAnimated:(BOOL)a1;
- (void)mapView:(id)a0 regionWillChangeAnimated:(BOOL)a1;
- (id)mapView:(id)a0 rendererForOverlay:(id)a1;
- (id)mapView:(id)a0 viewForAnnotation:(id)a1;
- (void)mapViewDidFinishRenderingMap:(id)a0 fullyRendered:(BOOL)a1;
- (BOOL)canSelectAnnotation:(id)a0;
- (void)endTouches;
- (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })mapRectMakeWithRadialDistanceForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 andRadius:(double)a1;
- (void)selectAnnotation:(id)a0;
- (id)fmfOverlayColor;
- (void)_moveCenterByOffset:(struct CGPoint { double x0; double x1; })a0 from:(struct CLLocationCoordinate2D { double x0; double x1; })a1 mapView:(id)a2;
- (id)accuracyCircleForLocation:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsetsWithMinApplied:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)fmfOverlayColorSatellite;
- (id)initWithDelegate:(id)a0 mapView:(id)a1;
- (BOOL)regionIsValid:(struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (void)slideAnnotation:(id)a0 intoViewIfNeededForMapView:(id)a1;
- (void)updateOverlaysForAnnotationMove:(id)a0 mapView:(id)a1;
- (void)zoomToFitAnnotationsForMapView:(id)a0 includeMe:(BOOL)a1 duration:(double)a2;
- (void)zoomToFitLocation:(id)a0 forMapView:(id)a1;

@end
