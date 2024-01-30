@class NSString;

@interface ATHostWakeupService : NSObject <ICEnvironmentMonitorObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)getWakeableHostsWithCompletion:(id /* block */)a0;
- (void)start;
- (id)init;
- (void)sendWakeupToHostWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_wakeupHost:(id)a0;
- (void)sendWakeupToAllHostsWithCompletion:(id /* block */)a0;
- (void)environmentMonitorDidChangePower:(id)a0;
- (void)stop;

@end
