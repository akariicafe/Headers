@class NSString;

@interface PUAirPlayActivity : PXActivity <PHAirPlayControllerRouteObserver>

@property (readonly, nonatomic, getter=isRouteAvailable) BOOL routeAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)activityType;
- (void)tearDownForCompletion;
- (id)init;
- (void)dealloc;
- (id)activityTitle;
- (void)_registerForAirPlayNotifications;
- (void)_unregisterForAirPlayNotifications;
- (void)airPlayControllerRouteAvailabilityChanged:(id)a0;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)_systemImageName;
- (void)performActivity;

@end
