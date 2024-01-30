@interface CFXApplicationState : NSObject

@property (class, readonly, nonatomic) CFXApplicationState *sharedInstance;

@property (nonatomic) BOOL isRegisteredForEvents;
@property (nonatomic) long long applicationState;

+ (void)beginMonitoringApplicationState;

- (void)applicationWillResignActive:(id)a0;
- (void)applicationDidEnterBackground:(id)a0;
- (void)applicationDidBecomeActive:(id)a0;
- (void)unregisterForEvents;
- (id)init;
- (void)registerForEvents;
- (void)dealloc;

@end
