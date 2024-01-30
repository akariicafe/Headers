@class NSString;

@interface HDOntologyMedsScanningFeatureEvaluator : HDOntologyMedicationFeatureEvaluator <HDOntologyFeatureEvaluator>

@property (class, readonly, nonatomic) double minimumTimeToLive;

@property (readonly, copy, nonatomic) NSString *featureIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerRequiredObserversForProfile:(id)a0 queue:(id)a1;
- (long long)requiresFeatureShardForProfile:(id)a0;
- (id)init;

@end
