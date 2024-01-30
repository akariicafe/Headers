@class NSString;

@interface RTService : RTNotifier <RTWatchdogProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setup;
- (void)shutdownWithHandler:(id /* block */)a0;
- (void)_setup;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (id)name;
- (void)checkInWithHandler:(id /* block */)a0;

@end
