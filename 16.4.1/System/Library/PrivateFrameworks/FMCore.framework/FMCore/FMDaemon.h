@interface FMDaemon : NSObject

- (void)initialize;
- (void)run;
- (void)startup;
- (id)verifyLaunchEventsConfiguration:(id)a0 withExclusions:(id)a1;
- (id)xpcDarwinEventHandlers;
- (void)registerXPCEventHandlers;
- (void)startupWithCompletion:(id /* block */)a0;
- (id)xpcDistributedEventHandlers;

@end
