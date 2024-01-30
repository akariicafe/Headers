@class NSString;
@protocol HDMedicationCountProvider;

@interface HDOntologyCoreMedsFeatureEvaluator : HDOntologyMedicationFeatureEvaluator <HDMedicationCountObserver, HDOntologyFeatureEvaluator> {
    id<HDMedicationCountProvider> _medicationCountProvider;
}

@property (class, readonly, nonatomic) double minimumTimeToLive;

@property (readonly, copy, nonatomic) NSString *featureIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithDaemon:(id)a0;
- (void)medicationCountProvider:(id)a0 didObserveChangeForProfile:(id)a1 ontologyBackedMedicationCount:(long long)a2;
- (void)registerRequiredObserversForProfile:(id)a0 queue:(id)a1;
- (long long)requiresFeatureShardForProfile:(id)a0;
- (id)init;
- (id)initWithDaemon:(id)a0 medicationCountProvider:(id)a1;
- (void).cxx_destruct;

@end
