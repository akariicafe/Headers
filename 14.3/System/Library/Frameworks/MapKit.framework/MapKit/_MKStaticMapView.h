@class MKUserLocation, NSString, NSArray, MKMapSnapshotter, MKMapSnapshot, UIImageView, MKMapCamera, MKAnnotationManager, MKAnnotationView, NSMutableArray, MKAnnotationContainerView, MKMapSnapshotOptions;
@protocol _MKStaticMapViewDelegate;

@interface _MKStaticMapView : UIView <MKAnnotationContainerViewDelegate, MKAnnotationMarkerContainer, MKAnnotationManagerDelegate, MKLocationManagerObserver> {
    id<_MKStaticMapViewDelegate> _delegate;
    MKMapSnapshotOptions *_snapshotOptions;
    UIImageView *_imageView;
    MKMapSnapshotter *_currentSnapshotter;
    MKMapSnapshot *_gridSnapshot;
    MKMapSnapshot *_snapshot;
    MKAnnotationManager *_annotationManager;
    MKAnnotationContainerView *_annotationContainer;
    MKUserLocation *_userLocation;
    MKAnnotationView *_userLocationView;
    NSMutableArray *_currentUpdateAddedAnnotations;
    BOOL _currentUpdateRemovedCustomFeatureAnnotation;
    unsigned long long _snapshotGeneration;
    BOOL _loading;
}

@property (nonatomic) struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; } region;
@property (nonatomic) struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; } visibleMapRect;
@property (copy, nonatomic) MKMapCamera *camera;
@property (readonly, nonatomic) NSArray *annotations;
@property (nonatomic) BOOL showsUserLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldHideOffscreenSelectedAnnotation;
- (void)locationManagerDidPauseLocationUpdates:(id)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)locationManagerUpdatedLocation:(id)a0;
- (void)locationManagerFailedToUpdateLocation:(id)a0 withError:(id)a1;
- (void)locationManagerDidReset:(id)a0;
- (BOOL)locationManagerShouldPauseLocationUpdates:(id)a0;
- (void)locationManager:(id)a0 didUpdateVehicleHeading:(double)a1 timestamp:(id)a2;
- (void)locationManager:(id)a0 didUpdateVehicleSpeed:(double)a1 timestamp:(id)a2;
- (struct CGPoint { double x0; double x1; })convertCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 toPointToView:(id)a1;
- (struct CLLocationCoordinate2D { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 toCoordinateFromView:(id)a1;
- (void)selectAnnotationRepresentation:(id)a0 animated:(BOOL)a1;
- (void)_hideAllAnnotations;
- (void)_showAllAnnotations;
- (unsigned long long)_incrementSnapshotGeneration;
- (void)_startSnapshotRequest;
- (void)_displayGridWithCompletionHandler:(id /* block */)a0;
- (void)locationManagerUpdatedLimitsPrecisionState:(id)a0;
- (void)addAnnotationRepresentation:(id)a0 allowAnimation:(BOOL)a1;
- (void)removeAnnotationRepresentation:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleRectInView:(id)a0;
- (void)deselectAnnotationRepresentation:(id)a0 animated:(BOOL)a1;
- (void)moveAnnotationRepresentation:(id)a0 fromCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1 animated:(BOOL)a2 duration:(double)a3;
- (void)annotationManager:(id)a0 didAddAnnotationRepresentations:(id)a1;
- (void)annotationManager:(id)a0 didRemoveAnnotationRepresentations:(id)a1;
- (void)annotationManagerDidChangeVisibleAnnotationRepresentations:(id)a0;
- (id)annotationManager:(id)a0 representationForAnnotation:(id)a1;
- (void)annotationManager:(id)a0 didSelectAnnotationRepresentation:(id)a1;
- (void)annotationManager:(id)a0 didDeselectAnnotationRepresentation:(id)a1;
- (BOOL)annotationManager:(id)a0 canSelectAnnotationRepresentation:(id)a1;
- (BOOL)annotationContainerShouldAlignToPixels:(id)a0;
- (BOOL)annotationContainerIsRotated:(id)a0;
- (void)annotationContainerWillAnimateBubble:(id)a0;
- (id)annotationContainer:(id)a0 requestAddingClusterForAnnotationViews:(id)a1;
- (void)annotationContainer:(id)a0 requestRemovingClusterAnnotationView:(id)a1 updateVisible:(BOOL)a2;
- (void)annotationContainerDidAnimateBubble:(id)a0;
- (void)annotationContainer:(id)a0 annotationView:(id)a1 calloutAccessoryControlTapped:(id)a2;
- (void)calloutDidAppearForAnnotationView:(id)a0 inContainer:(id)a1;
- (void)annotationContainerWillDropPins:(id)a0;
- (id /* block */)annotationRectTest;
- (void)annotationContainer:(id)a0 calloutPrimaryActionTriggeredForAnnotationView:(id)a1;
- (void)annotationContainer:(id)a0 scrollToRevealCalloutWithOffset:(struct CGPoint { double x0; double x1; })a1 annotationCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a2 completionHandler:(id /* block */)a3;
- (double)annotationContainer:(id)a0 pinDropDistanceForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1 maxDistance:(double *)a2;
- (void)annotationContainerDidDropPins:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleCenteringRectInView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })annotationContainerVisibleRect:(id)a0;
- (BOOL)annotationContainer:(id)a0 isAnnotationView:(id)a1 validForDisplayAtPoint:(struct CGPoint { double x0; double x1; })a2;
- (void)addAnnotation:(id)a0;
- (id /* block */)annotationCoordinateTest;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addAnnotations:(id)a0;
- (void)removeAnnotations:(id)a0;
- (void)removeAnnotation:(id)a0;
- (void)_updateSnapshot:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)locationManagerDidResumeLocationUpdates:(id)a0;

@end
