@class NSString;
@protocol VKMapViewCameraDelegate;

@interface VKCameraDelegateMediator : NSObject <VKMapViewCameraDelegate> {
    unsigned long long _regionChangeCount;
}

@property (weak, nonatomic) id<VKMapViewCameraDelegate> cameraDelegate;
@property (nonatomic) BOOL isChangingMapType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)mapLayerCanEnter3DModeDidChange:(BOOL)a0;
- (void)mapLayerWillAnimateToLocation:(struct { double x0; double x1; })a0;
- (void)mapLayerDidChangeVisibleRegion;
- (void)mapLayerDidBecomePitched:(BOOL)a0;
- (void)mapLayerWasUnableToAnimate;
- (void)mapLayerDidChangeRegionAnimated:(BOOL)a0;
- (void)mapLayerDidFinishInitialTrackingAnimation;
- (void)mapLayerMuninAvailabilityDidChange:(long long)a0;
- (id)mapLayerPresentationForAnnotation:(id)a0;
- (void)mapLayerCanZoomInDidChange:(BOOL)a0;
- (void)mapLayerNavigationCameraHasStartedPanning;
- (void)mapLayerWillChangeRegionAnimated:(BOOL)a0;
- (void)mapLayerNavigationCameraDidLeaveDefaultZoom;
- (id)init;
- (void)mapLayerNavigationCameraHasStoppedPanning;
- (void)mapLayerNavigationCameraDidReturnToDefaultZoom;
- (void)mapLayerCanZoomOutDidChange:(BOOL)a0;
- (void).cxx_destruct;

@end
