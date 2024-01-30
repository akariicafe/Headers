@interface FMDaemon : NSObject

- (void)initialize;
- (id)verifyLaunchEventsConfiguration:(id)a0 withExclusions:(id)a1;
- (void)startup;
- (void)run;
- (id)xpcDarwinEventHandlers;
- (void)startupWithCompletion:(id /* block */)a0;
- (void)registerXPCEventHandlers;
- (id)xpcDistributedEventHandlers;

@end
