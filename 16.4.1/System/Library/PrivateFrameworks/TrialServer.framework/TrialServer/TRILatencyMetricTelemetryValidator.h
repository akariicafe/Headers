@class TRIRolloutDatabase, NSSet;

@interface TRILatencyMetricTelemetryValidator : NSObject <TRILatencyMetricTelemetryValidating>

@property (readonly, nonatomic) TRIRolloutDatabase *rolloutDb;
@property (readonly, nonatomic) NSSet *namespacesAllowedForLogging;

- (id)validateAndReturnTelemetryForDeployment:(id)a0 factorPackSetId:(id)a1;
- (id)createRolloutFieldForDeployment:(id)a0 factorPackSetId:(id)a1 record:(id)a2;
- (BOOL)_isRecordContainingAllowedLoggingNamespace:(id)a0;
- (id)initWithRolloutDatabase:(id)a0 paths:(id)a1;
- (void).cxx_destruct;

@end
