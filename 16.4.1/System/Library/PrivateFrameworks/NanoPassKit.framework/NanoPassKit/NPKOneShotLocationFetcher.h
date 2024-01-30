@class NSString, CLInUseAssertion, CLLocationManager, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface NPKOneShotLocationFetcher : NSObject <CLLocationManagerDelegate>

@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *locationFixTimeout;
@property (retain, nonatomic) CLLocationManager *locationManager;
@property (retain, nonatomic) CLInUseAssertion *inUseAssertion;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *locationManagerQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)dealloc;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)_finishLocationFixWithLocation:(id)a0;
- (void)fetchLocationWithCompletion:(id /* block */)a0;

@end
