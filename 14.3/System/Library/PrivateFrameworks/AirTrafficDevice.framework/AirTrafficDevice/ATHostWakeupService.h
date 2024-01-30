@class NSString, ATEnvironmentMonitor;

@interface ATHostWakeupService : NSObject <ATEnvironmentMonitorObserver> {
    ATEnvironmentMonitor *_environmentMonitor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)stop;
- (void)environmentMonitorDidChangePower:(id)a0;
- (void)_wakeupHost:(id)a0;
- (void)start;
- (void)getWakeableHostsWithCompletion:(id /* block */)a0;
- (void)sendWakeupToHostWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)sendWakeupToAllHostsWithCompletion:(id /* block */)a0;

@end
