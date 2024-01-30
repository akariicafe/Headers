@class UIApplication;

@interface IMAppStateMonitor : NSObject

@property (retain, nonatomic) UIApplication *app;
@property (nonatomic) long long applicationState;
@property (nonatomic) double backgroundTimeRemaining;

+ (id)sharedInstance;

- (void)applicationDidEnterBackground;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (id)init;
- (void).cxx_destruct;
- (void)applicationDidFinishLaunching;

@end
