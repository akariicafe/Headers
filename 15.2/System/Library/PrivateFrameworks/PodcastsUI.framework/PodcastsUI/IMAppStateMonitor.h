@class UIApplication;

@interface IMAppStateMonitor : NSObject

@property (retain, nonatomic) UIApplication *app;
@property (nonatomic) long long applicationState;
@property (nonatomic) double backgroundTimeRemaining;

+ (id)sharedInstance;

- (void)applicationDidEnterBackground;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void).cxx_destruct;
- (id)init;
- (void)applicationDidFinishLaunching;

@end
