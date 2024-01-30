@class NSObject, AnalyticsWorkspace;
@protocol OS_dispatch_queue;

@interface NetworkPerformanceFeed : NSObject {
    AnalyticsWorkspace *workspace;
    NSObject<OS_dispatch_queue> *internalQueue;
    NSObject<OS_dispatch_queue> *callerQueue;
}

@property (nonatomic) id delegate;

- (BOOL)getPreferCellOverWiFiWithOptions:(id)a0 reply:(id /* block */)a1;
- (id)_normalizedOpts:(id)a0 toNetwork:(int)a1;
- (BOOL)resetDataForKeys:(id)a0 reply:(id /* block */)a1;
- (id)initWithWorkspace:(id)a0;
- (id)_flowMetricsPresentationFromRoll:(id)a0 source:(struct flow_stats_stuct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; } *)a1;
- (BOOL)usageConsultOn:(int)a0 onlyRelativeToReferencePoint:(id)a1 reply:(id /* block */)a2;
- (void)setQueue:(id)a0;
- (BOOL)setPreferCellOverWiFiWithOptions:(id)a0 reply:(id /* block */)a1;
- (void)_consultReturn:(id /* block */)a0 advice:(int)a1;
- (id)_routeMetricsPresentationFromRoll:(id)a0 source:(struct route_stats_stuct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; double x17; double x18; double x19; double x20; double x21; double x22; double x23; } *)a1 since:(id)a2 isKnownGood:(id)a3 isLowInternetDL:(id)a4 isLowInternetUL:(id)a5 isHotSpot:(id)a6;
- (BOOL)setReferencePoint:(int)a0 reply:(id /* block */)a1;
- (void)dealloc;
- (id)_formatWatchpointHit:(id)a0;
- (BOOL)watchpointOn:(int)a0 forIdentifier:(id)a1 andKey:(id)a2 onThreshold:(double)a3 withOptions:(id)a4 uponHit:(id /* block */)a5;
- (id)_formatInstantRouteMetrics:(id)a0;
- (BOOL)predictWaitUntilKnownGoodNetworkFor:(int)a0 matchSignature:(BOOL)a1 reply:(id /* block */)a2;
- (BOOL)fullScorecardFor:(int)a0 options:(id)a1 reply:(id /* block */)a2;
- (BOOL)_rollFlowMetricsValuesFromDict:(id)a0 toDict:(id)a1 forKey:(id)a2 andRequest:(id)a3;
- (void).cxx_destruct;
- (BOOL)_rollRouteMetricsValuesFromDict:(id)a0 toDict:(id)a1 forKey:(id)a2;

@end
