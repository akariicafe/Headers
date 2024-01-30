@class NSString;
@protocol VKMapViewCameraDelegate;

@interface VKCameraDelegateMediator : NSObject <VKMapViewCameraDelegate> {
    unsigned long long _regionChangeCount;
}

@property (nonatomic) id<VKMapViewCameraDelegate> cameraDelegate;
@property (nonatomic) BOOL isChangingMapType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)mapLayerDidFinishInitialTrackingAnimation;
- (void)mapLayerWasUnableToAnimate;
- (id)init;
- (void)mapLayerWillChangeRegionAnimated:(BOOL)a0;
- (id)mapLayerPresentationForAnnotation:(id)a0;
- (void)mapLayerDidChangeVisibleRegion;
- (void)mapLayerDidChangeRegionAnimated:(BOOL)a0;
- (void)mapLayerMuninAvailabilityDidChange:(long long)a0;
- (void)mapLayerNavigationCameraDidReturnToDefaultZoom;
- (void)mapLayerNavigationCameraHasStartedPanning;
- (void)mapLayerCanEnter3DModeDidChange:(BOOL)a0;
- (void)mapLayerDidBecomePitched:(BOOL)a0;
- (void)mapLayerNavigationCameraHasStoppedPanning;
- (void)mapLayerCanZoomInDidChange:(BOOL)a0;
- (void)mapLayerNavigationCameraDidLeaveDefaultZoom;
- (void)mapLayerWillAnimateToLocation:(struct { double x0; double x1; })a0;
- (void)mapLayerCanZoomOutDidChange:(BOOL)a0;

@end
