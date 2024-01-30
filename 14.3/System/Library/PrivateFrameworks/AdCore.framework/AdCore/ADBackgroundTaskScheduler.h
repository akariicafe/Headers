@interface ADBackgroundTaskScheduler : ADSingleton

+ (id)sharedInstance;
+ (void)unregisterTaskDelegate:(id)a0;
+ (void)registerTaskDelegate:(id)a0 forRequestID:(id)a1;

- (id)init;
- (void)addBackgroundTask:(id)a0;
- (void)checkOnTask:(id)a0;
- (void)handleXPCActivity:(id)a0 withID:(id)a1;
- (void)cancelBackgroundTask:(id)a0;

@end
