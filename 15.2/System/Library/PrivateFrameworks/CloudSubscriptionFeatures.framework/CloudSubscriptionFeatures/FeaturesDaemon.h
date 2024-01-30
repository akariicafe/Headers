@class DaemonController;

@interface FeaturesDaemon : NSObject

@property (retain, nonatomic) DaemonController *controller;

+ (id)sharedInstance;

- (void)start;
- (void).cxx_destruct;
- (id)init;

@end
