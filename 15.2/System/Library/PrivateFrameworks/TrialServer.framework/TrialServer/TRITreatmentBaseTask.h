@class NSString;
@protocol TRITaskAttributing;

@interface TRITreatmentBaseTask : TRIExperimentBaseTask

@property (readonly, nonatomic) NSString *treatmentId;
@property (readonly, nonatomic) id<TRITaskAttributing> taskAttributing;

- (id)initWithExperiment:(id)a0 treatmentId:(id)a1 taskAttributing:(id)a2;
- (id)trialSystemTelemetry;
- (id)description;
- (id)metrics;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)dimensions;

@end
