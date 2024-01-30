@class RBSAssertionIdentifier;
@protocol RBDaemonContextProviding;

@interface RBThermalResponseManager : NSObject {
    id<RBDaemonContextProviding> _daemonContext;
    int _notifyToken;
    RBSAssertionIdentifier *_currentAssertion;
}

+ (long long)_thermalConditionLevelForThermalLevel:(unsigned long long)a0;
+ (id)managerWithDaemonContext:(id)a0 notificationName:(id)a1;

- (void).cxx_destruct;
- (id)_initWithDaemonContext:(id)a0 notificationName:(id)a1;
- (void)_queue_updateAssertion;
- (void)_takeAssertionForConditionLevel:(long long)a0 completion:(id /* block */)a1;

@end
