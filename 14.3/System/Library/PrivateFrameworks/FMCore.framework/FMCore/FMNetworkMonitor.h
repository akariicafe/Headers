@class NWPathEvaluator;

@interface FMNetworkMonitor : NSObject

@property (retain, nonatomic) NWPathEvaluator *evaluator;

+ (id)sharedInstance;

- (void)startMonitoring;
- (BOOL)isNetworkUp;
- (void).cxx_destruct;
- (void)registerNetworkMonitorLaunchEvent:(BOOL)a0;
- (void)stopMonitoring;
- (BOOL)isMonitoring;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
