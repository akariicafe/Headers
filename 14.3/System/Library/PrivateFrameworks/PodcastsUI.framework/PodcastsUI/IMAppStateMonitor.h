@class UIApplication;

@interface IMAppStateMonitor : NSObject

@property (retain, nonatomic) UIApplication *app;
@property (nonatomic) long long applicationState;
@property (nonatomic) double backgroundTimeRemaining;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)applicationDidFinishLaunching;

@end
