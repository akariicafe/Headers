@class NSString, HDOntologyUpdateCoordinator;

@interface HDOntologyCHRFeatureEvaluator : NSObject <HDHealthRecordsAccountExistenceObserver, HDOntologyFeatureEvaluator>

@property (class, readonly, nonatomic) double minimumTimeToLive;

@property (readonly, weak, nonatomic) HDOntologyUpdateCoordinator *updateCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *featureIdentifier;


- (BOOL)canRequireShardWithError:(id *)a0;
- (id)initWithOntologyUpdateCoordinator:(id)a0;
- (void)accountExistenceNotifier:(id)a0 didChangeHealthRecordAccountExistence:(BOOL)a1;
- (void)registerRequiredObserversForProfile:(id)a0 queue:(id)a1;
- (long long)requiresFeatureShardForProfile:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
