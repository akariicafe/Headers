@class NSMutableDictionary;
@protocol TRILatencyMetricTelemetryValidating;

@interface TRIDownloadLatencyTaskResultTelemetryBuilder : NSObject

@property (readonly, nonatomic) id<TRILatencyMetricTelemetryValidating> validator;
@property (readonly, nonatomic) NSMutableDictionary *telemetryForDeployment;

- (void).cxx_destruct;
- (id)builtTelemetry;
- (id)initWithTelemetryValidator:(id)a0;
- (void)updateWithTask:(id)a0 runResult:(id)a1;
- (void)_handleActivationTask:(id)a0 runResult:(id)a1;
- (void)_handleFetchTask:(id)a0 runResult:(id)a1;
- (void)_updateBuiltTelemetryWithDeployment:(id)a0 rolloutFields:(id)a1 downloadStatus:(int)a2;

@end
