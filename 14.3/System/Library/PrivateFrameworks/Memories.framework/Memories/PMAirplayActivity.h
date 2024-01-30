@class NSString, UIViewController, UIBarButtonItem;
@protocol PMAirplayActivityDelegate;

@interface PMAirplayActivity : UIActivity <PHAirPlayControllerRouteObserver>

@property (nonatomic) BOOL _routeAvailable;
@property (weak, nonatomic) id<PMAirplayActivityDelegate> delegate;
@property (weak, nonatomic) UIBarButtonItem *barButtonItem;
@property (weak, nonatomic) UIViewController *parentViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)activityType;
- (void)tearDownForCompletion;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)activityTitle;
- (void)_registerForAirPlayNotifications;
- (void)_unregisterForAirPlayNotifications;
- (void)airPlayControllerRouteAvailabilityChanged:(id)a0;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)_systemImageName;
- (void)performActivity;

@end
