@class NSString, HDDaemon;

@interface HDOntologyMedicationFeatureEvaluator : NSObject

@property (readonly, weak, nonatomic) HDDaemon *daemon;
@property (readonly, copy, nonatomic) NSString *featureIdentifier;

- (id)initWithDaemon:(id)a0;
- (BOOL)canRequireShardWithError:(id *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)triggerShardEvaluatorWithReason:(id)a0;

@end
