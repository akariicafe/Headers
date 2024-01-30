@class NSMutableArray, TRITrialSystemTelemetry;

@interface TRIRolloutTaskSupportGuardedData : NSObject {
    NSMutableArray *metrics;
    NSMutableArray *dimensions;
    TRITrialSystemTelemetry *trialSystemTelemetry;
}

- (void).cxx_destruct;

@end
