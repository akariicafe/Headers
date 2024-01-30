@class NWPathEvaluator;

@interface FMNetworkMonitor : NSObject

@property (retain, nonatomic) NWPathEvaluator *evaluator;

+ (id)sharedInstance;

- (BOOL)isMonitoring;
- (BOOL)isNetworkUp;
- (void)registerNetworkMonitorLaunchEvent:(BOOL)a0;
- (void)startMonitoring;
- (void).cxx_destruct;
- (void)stopMonitoring;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
