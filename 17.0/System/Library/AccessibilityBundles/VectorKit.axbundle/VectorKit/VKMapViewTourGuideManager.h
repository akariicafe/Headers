@class VKMapViewTourStatus, NSString, VKMapView, VKFeatureAccessibilityElement, VKMapViewAccessibilityElementManager;

@interface VKMapViewTourGuideManager : NSObject <MKLocationManagerObserver, VKMapViewTourGuideDelegate>

@property (retain, nonatomic) VKMapViewAccessibilityElementManager *elementManager;
@property (retain, nonatomic) VKMapViewTourStatus *tourStatus;
@property (retain, nonatomic) NSString *lastTourStatusAnnouncement;
@property (retain, nonatomic) VKFeatureAccessibilityElement *lastCurrentTourLocation;
@property (weak, nonatomic) VKMapView *mapView;
@property (nonatomic, getter=isRunning) BOOL running;
@property (nonatomic) long long secondsSinceZoomRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)detailLevel;
+ (BOOL)shouldSuppressLocationUpdates;
+ (id)_descriptionForDetailLevel;
+ (void)decreaseDetailLevel;
+ (void)increaseDetailLevel;

- (long long)_orientation;
- (void)locationManager:(id)a0 didUpdateVehicleHeading:(double)a1 timestamp:(id)a2;
- (void)locationManagerDidPauseLocationUpdates:(id)a0;
- (void)dealloc;
- (void)locationManagerDidResumeLocationUpdates:(id)a0;
- (void).cxx_destruct;
- (void)locationManager:(id)a0 didUpdateVehicleSpeed:(double)a1 timestamp:(id)a2;
- (id)_elements;
- (struct { double x0; double x1; })_center;
- (double)_yaw;
- (void)locationManagerUpdatedLocation:(id)a0;
- (void)locationManagerDidReset:(id)a0;
- (void)locationManagerFailedToUpdateHeading:(id)a0 withError:(id)a1;
- (void)locationManagerFailedToUpdateLocation:(id)a0 withError:(id)a1;
- (BOOL)locationManagerShouldPauseLocationUpdates:(id)a0;
- (void)locationManagerUpdatedHeading:(id)a0;
- (void)_updateElements;
- (long long)detailLevel;
- (id)initWithMapView:(id)a0 elementManager:(id)a1;
- (BOOL)_elementsInvalidForOrientation:(long long)a0;
- (id)_descriptionForOrientation:(long long)a0;
- (BOOL)_elementIntersectsElement:(id)a0 point:(struct CGPoint { double x0; double x1; })a1 radius:(double)a2;
- (BOOL)_elementValidForCurrentDetailLevel:(id)a0;
- (BOOL)_elementsInvalidForCenter:(struct { double x0; double x1; })a0;
- (double)_normalizedThetaFromTheta:(double)a0;
- (void)_queueTourStatusAnnouncement:(id)a0;
- (BOOL)_setZoomLevelForUserSpeed:(double)a0;
- (void)_startObservingUpdates;
- (void)_stopObservingUpdates;
- (id)_tourLocationForUserPoint:(struct CGPoint { double x0; double x1; })a0 radius:(double)a1 ignoreLocation:(id)a2;
- (id)_tourPOIForUserPoint:(struct CGPoint { double x0; double x1; })a0 radius:(double)a1 futureUserTheta:(double)a2 thetaFromCourse:(double *)a3 shouldFilterIfBehind:(BOOL)a4;
- (unsigned long long)_tourPOISideFromTheta:(double)a0;
- (void)_updateElementsComplete:(id)a0;
- (void)_updateTourStatusWithCenter:(struct { double x0; double x1; })a0 location:(id)a1 orientation:(long long)a2;
- (void)startTour;
- (void)stopTour;
- (id)tourStatusForMapView:(id)a0;

@end
