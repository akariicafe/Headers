@class HDOntologyMedsScanningFeatureEvaluator, NSString, NSArray, HDMedicationPeriodicScheduler, HDOntologyCoreMedsFeatureEvaluator, HDOntologyMedsEducationFeatureEvaluator, HDDrugInteractionFactorStateProvider, HDMedicationCountProvider, HDOntologyInteractionsFeatureEvaluator;

@interface HDHealthMedicationsDaemonExtension : NSObject <HDHealthDaemonExtension> {
    HDMedicationPeriodicScheduler *_periodicScheduler;
    HDMedicationCountProvider *_medicationCountProvider;
    HDDrugInteractionFactorStateProvider *_drugInteractionStateProvider;
    HDOntologyCoreMedsFeatureEvaluator *_coreMedsFeatureEvaluator;
    HDOntologyMedsEducationFeatureEvaluator *_medsEducationFeatureEvaluator;
    HDOntologyInteractionsFeatureEvaluator *_interactionsFeatureEvaluator;
    HDOntologyMedsScanningFeatureEvaluator *_medsScanningFeatureEvaluator;
}

@property (readonly, nonatomic) NSArray *ontologyFeatureEvaluators;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHealthDaemon:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
