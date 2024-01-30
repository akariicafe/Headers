@class NSString, NSMapTable;
@protocol INIntentResponseObserver;

@interface INExtensionContextIntentResponseObserver : NSObject <INGetRideStatusIntentResponseObserver, INGetCarPowerLevelStatusIntentResponseObserver> {
    id<INIntentResponseObserver> _remoteObserver;
}

@property (readonly, nonatomic) NSMapTable *remoteObservers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)getCarPowerLevelStatusResponseDidUpdate:(id)a0;
- (void)getRideStatusResponseDidUpdate:(id)a0;
- (void)setObserver:(id)a0 forConnection:(id)a1;
- (void)_intentResponseDidUpdate:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
