@interface HomeAutomationInternal.ControlHomeIntentHandler : NSObject <INControlHomeIntentHandling>

- (id)init;
- (void)handleControlHome:(id)a0 completion:(id /* block */)a1;
- (void)resolveFiltersForControlHome:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveUserTaskForControlHome:(id)a0 withCompletion:(id /* block */)a1;

@end
