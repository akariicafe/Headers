@class NSDate, NSTimer, CLLocationManager, NSError, NSString, CLInUseAssertion, NSMutableArray, CLLocation;

@interface IMLocationManager : NSObject <CLLocationManagerDelegate, IMLocationManager>

@property (retain, nonatomic) CLLocation *location;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSTimer *locationUpdateTimer;
@property (retain, nonatomic) CLLocationManager *locationManager;
@property (retain, nonatomic) NSMutableArray *handlers;
@property (retain, nonatomic) NSDate *locateStartTime;
@property (nonatomic) BOOL inRequestPreciseLocation;
@property (nonatomic) BOOL firstAuthorizationCallbackArrived;
@property (retain, nonatomic) CLInUseAssertion *inUseAssertion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL locationAuthorizationDetermined;
@property (readonly, nonatomic) BOOL locationAuthorizationDenied;
@property (readonly, nonatomic) BOOL preciseLocationAuthorized;

+ (id)sharedInstance;
+ (id)locationShifter;
+ (Class)__CLInUseAssertionClass;
+ (Class)__CLLocationManagerClass;

- (void)locationManager:(id)a0 didChangeAuthorizationStatus:(int)a1;
- (void)shiftedLocationWithLocation:(id)a0 completion:(id /* block */)a1;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)_errorHappend:(id)a0;
- (void)_fireCompletionHandlers;
- (void)_locationManagerTimedOut;
- (void)_locationUpdateTimerFired:(id)a0;
- (BOOL)_shouldSendLocation:(id)a0 timeIntervalSinceStart:(double)a1;
- (void)_startLocationUpdateTimerWithAuthorizedHandler:(id /* block */)a0 updateHandler:(id /* block */)a1;
- (void)startUpdatingCurrentLocationWithAuthorizedHandler:(id /* block */)a0 updateHandler:(id /* block */)a1;
- (void)startUpdatingCurrentLocationWithForegroundAssertionForBundleIdentifier:(id)a0 withAuthorizedHandler:(id /* block */)a1 updateHandler:(id /* block */)a2;

@end
