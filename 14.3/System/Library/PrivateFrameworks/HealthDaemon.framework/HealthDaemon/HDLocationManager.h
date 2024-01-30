@class HKObserverSet, NSString, HDAssertionManager, CLLocationManager, CLInUseAssertion;
@protocol HDLocationManagerUnitTestDelegate;

@interface HDLocationManager : NSObject <HDAssertionObserver, CLLocationManagerDelegate> {
    HDAssertionManager *_assertionManager;
    CLLocationManager *_locationManager;
    CLInUseAssertion *_inUseAssertion;
    HKObserverSet *_observers;
}

@property (copy, nonatomic) id /* block */ locationManagerConfiguration;
@property (weak, nonatomic) id<HDLocationManagerUnitTestDelegate> unitTestDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)assertionManager:(id)a0 assertionInvalidated:(id)a1;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)requestWhenInUseAuthorization;
- (id)init;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)_unitTest_setLocationManagerConfiguration:(id /* block */)a0;
- (void)dealloc;
- (void)_mainQueue_takeLocationUpdatingAssertion;
- (id)_unitTest_locationManager;
- (void)addObserver:(id)a0;
- (void)_mainQueue_updateLocationManager;
- (void)_mainQueue_releaseLocationUpdatingAssertion;
- (void)_unitTest_didTakeAssertion:(id)a0;
- (id)takeLocationUpdatingAssertionForOwnerIdentifier:(id)a0;
- (void)_unitTest_didInvalidateAssertion:(id)a0;
- (id)_mainQueue_newLocationManagerWithEffectiveBundle:(id)a0;

@end
