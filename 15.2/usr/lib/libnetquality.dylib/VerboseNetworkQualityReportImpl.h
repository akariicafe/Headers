@class NetworkQualityExecutions, NetworkQualityExecutionsReporter;

@interface VerboseNetworkQualityReportImpl : NSObject <NetworkQualityReportImpl> {
    NetworkQualityExecutionsReporter *ctx;
    NetworkQualityExecutions *exec;
}

- (void).cxx_destruct;
- (void)printHumanInt:(long long)a0 withName:(id)a1 withDescription:(id)a2 withMeaning:(int)a3;
- (void)printHumanAverage:(id)a0 withName:(id)a1 withDescription:(id)a2 withMeaning:(int)a3;
- (id)formatRatingForResponsiveness:(long long)a0;
- (void)startReportWithContext:(id)a0 withExecutions:(id)a1;
- (void)visitThroughputTestResult:(id)a0 withDescription:(id)a1 withThroughput:(long long)a2;
- (void)visitLatencyTestResult:(id)a0 withDescription:(id)a1 withLatencies:(id)a2;
- (void)visitRpmTestResult:(id)a0 withDescription:(id)a1 withRpm:(long long)a2;
- (void)reportSummary:(id)a0;
- (void)finishReport:(id)a0;

@end
