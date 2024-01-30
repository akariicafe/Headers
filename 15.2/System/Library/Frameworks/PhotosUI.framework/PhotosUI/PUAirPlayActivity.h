@class NSString;

@interface PUAirPlayActivity : PXActivity <PHAirPlayControllerRouteObserver>

@property (readonly, nonatomic, getter=isRouteAvailable) BOOL routeAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)activityType;
- (void)tearDownForCompletion;
- (void)_registerForAirPlayNotifications;
- (void)_unregisterForAirPlayNotifications;
- (id)init;
- (id)activityTitle;
- (id)_systemImageName;
- (void)dealloc;
- (void)airPlayControllerRouteAvailabilityChanged:(id)a0;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;

@end
