@interface FMDaemon : NSObject

- (void)initialize;
- (void)run;
- (id)xpcDistributedEventHandlers;
- (void)startupWithCompletion:(id /* block */)a0;
- (id)xpcDarwinEventHandlers;
- (id)verifyLaunchEventsConfiguration:(id)a0 withExclusions:(id)a1;
- (void)startup;
- (void)registerXPCEventHandlers;

@end
