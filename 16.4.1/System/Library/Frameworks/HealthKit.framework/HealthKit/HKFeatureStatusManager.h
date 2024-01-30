@class NSString, HKObserverSet, _HKDelayedOperation, HKFeatureAvailabilityRequirementEvaluationDataSource, HKFeatureStatus, NSObject, HKFeatureAvailabilityContextConstraint, HKFeatureAvailabilityRequirementSet;
@protocol OS_dispatch_queue, HKFeatureAvailabilityProviding;

@interface HKFeatureStatusManager : NSObject <HKFeatureAvailabilityProvidingObserver, HKFeatureAvailabilityRequirementSatisfactionObserver, HKFeatureStatusProviding>

@property (weak, nonatomic) HKFeatureAvailabilityRequirementEvaluationDataSource *weakDataSource;
@property (retain, nonatomic) HKFeatureAvailabilityRequirementEvaluationDataSource *strongDataSource;
@property (readonly, nonatomic) HKFeatureAvailabilityContextConstraint *contextConstraint;
@property (readonly, nonatomic) HKObserverSet *observers;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) _HKDelayedOperation *notifyObserversOperation;
@property (retain, nonatomic) HKFeatureStatus *currentFeatureStatus;
@property (nonatomic) BOOL isObserving;
@property (retain, nonatomic) HKFeatureAvailabilityRequirementSet *requirements;
@property (readonly, nonatomic) id<HKFeatureAvailabilityProviding> featureAvailabilityProviding;
@property (readonly, nonatomic) HKFeatureAvailabilityRequirementEvaluationDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *featureIdentifier;

+ (id)childFeatureStatusManagerWithFeatureAvailabilityProviding:(id)a0 featureAvailabilityDataSource:(id)a1 contextConstraint:(id)a2;

- (void)registerObserver:(id)a0 queue:(id)a1;
- (void)featureAvailabilityProvidingDidUpdateSettings:(id)a0;
- (id)initWithFeatureIdentifier:(id)a0 healthStore:(id)a1 cachingDefaults:(id)a2;
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)a0;
- (void)_updateOverriddenSatisfactionOfRequirement:(id)a0 overriddenSatisfaction:(id)a1;
- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)a0;
- (id)featureStatusWithError:(id *)a0;
- (id)_requirementSatisfactionOverrides;
- (void)_queue_registerForFeatureStatusChanges;
- (void)_queue_attemptFeatureStatusUpdateDrivenByObservation;
- (id)initWithFeatureAvailabilityProviding:(id)a0 healthDataSource:(id)a1 currentCountryCode:(id)a2;
- (id)initWithFeatureAvailabilityProviding:(id)a0 healthDataSource:(id)a1 countryCodeSource:(long long)a2;
- (void)registerObserver:(id)a0;
- (void)dealloc;
- (id)_queue_updateFeatureStatusWithRequestDrivenByObservation:(BOOL)a0 error:(id *)a1;
- (void)_queue_unregisterForFeatureStatusChanges;
- (void)_notifyObserversWithFeatureStatus:(id)a0;
- (id)initWithFeatureIdentifier:(id)a0 healthStore:(id)a1 countryCodeSource:(long long)a2;
- (void)unregisterObserver:(id)a0;
- (id)initWithFeatureAvailabilityProviding:(id)a0 featureAvailabilityDataSource:(id)a1;
- (void)_registerForRequirementSatisfactionOverrideChangesForRequirements:(id)a0;
- (id)initWithFeatureAvailabilityProviding:(id)a0 featureAvailabilityDataSource:(id)a1 contextConstraint:(id)a2;
- (id)initWithFeatureIdentifier:(id)a0 healthStore:(id)a1 currentCountryCode:(id)a2;
- (id)initWithFeatureAvailabilityProviding:(id)a0 healthDataSource:(id)a1;
- (void)_updateSatisfactionOfRequirement:(id)a0 isSatisfied:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFeatureIdentifier:(id)a0 healthStore:(id)a1;
- (void)featureAvailabilityRequirement:(id)a0 didUpdateSatisfaction:(BOOL)a1;
- (void)__unregisterForFeatureStatusChanges;

@end
