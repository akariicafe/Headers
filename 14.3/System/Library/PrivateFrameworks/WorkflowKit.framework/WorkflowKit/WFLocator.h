@class NSString, CLInUseAssertion, CLLocationManager, CLLocation;

@interface WFLocator : NSObject <CLLocationManagerDelegate>

@property (retain, nonatomic) CLLocationManager *locationManager;
@property (retain, nonatomic) CLInUseAssertion *inUseAssertion;
@property (retain, nonatomic) CLLocation *bestEffortLocation;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) double timeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)determineLocationWithWorkflowEnvironment:(long long)a0 completion:(id /* block */)a1;
+ (void)determineLocationWithWorkflowEnvironment:(long long)a0 desiredAccuracy:(double)a1 completion:(id /* block */)a2;
+ (void)determineLocationWithWorkflowEnvironment:(long long)a0 desiredAccuracy:(double)a1 timeout:(double)a2 completion:(id /* block */)a3;

- (void)requestLocation;
- (void)startUpdatingLocation;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)start;
- (id)initWithWorkflowEnvironment:(long long)a0;
- (BOOL)useRequestLocation;
- (void)finishUpdatingLocation;

@end
