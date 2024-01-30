@class NSMutableArray, TRITrialSystemTelemetry;

@interface TRIExperimentBaseTaskGuardedData : NSObject {
    NSMutableArray *metrics;
    NSMutableArray *dimensions;
    TRITrialSystemTelemetry *trialSystemTelemetry;
    BOOL logAsRollout;
}

- (void).cxx_destruct;

@end
