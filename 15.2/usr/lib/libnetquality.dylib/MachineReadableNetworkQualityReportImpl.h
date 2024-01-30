@class NSMutableDictionary, NetworkQualityExecutions, NetworkQualityExecutionsReporter;

@interface MachineReadableNetworkQualityReportImpl : NSObject <NetworkQualityReportImpl> {
    NetworkQualityExecutionsReporter *ctx;
    NetworkQualityExecutions *exec;
    NSMutableDictionary *dict;
}

- (void).cxx_destruct;
- (void)startReportWithContext:(id)a0 withExecutions:(id)a1;
- (void)visitThroughputTestResult:(id)a0 withDescription:(id)a1 withThroughput:(long long)a2;
- (void)visitLatencyTestResult:(id)a0 withDescription:(id)a1 withLatencies:(id)a2;
- (void)visitRpmTestResult:(id)a0 withDescription:(id)a1 withRpm:(long long)a2;
- (void)reportSummary:(id)a0;
- (void)finishReport:(id)a0;

@end
