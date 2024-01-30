@class HKObserverSet, HKFeatureAvailabilityRequirementSet, NSString, HKFeatureAvailabilityRequirementEvaluationDataSource, HKFeatureStatus, _HKDelayedOperation, NSObject;
@protocol OS_dispatch_queue, HKFeatureAvailabilityProviding;

@interface HKFeatureStatusManager : NSObject <HKFeatureAvailabilityProvidingObserver, HKFeatureAvailabilityRequirementSatisfactionObserver, HKFeatureStatusProviding>

@property (readonly, nonatomic) HKObserverSet *observers;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) _HKDelayedOperation *notifyObserversOperation;
@property (retain, nonatomic) HKFeatureStatus *currentFeatureStatus;
@property (retain, nonatomic) HKFeatureAvailabilityRequirementSet *requirements;
@property (readonly, nonatomic) id<HKFeatureAvailabilityProviding> featureAvailabilityProviding;
@property (readonly, nonatomic) HKFeatureAvailabilityRequirementEvaluationDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *featureIdentifier;

- (void)registerObserver:(id)a0 queue:(id)a1;
- (id)_requirementSatisfactionOverrides;
- (void)featureAvailabilityProvidingDidUpdateSettings:(id)a0;
- (id)initWithFeatureAvailabilityProviding:(id)a0 featureAvailabilityDataSource:(id)a1;
- (void)registerObserver:(id)a0;
- (void)_updateSatisfactionOfRequirement:(id)a0 isSatisfied:(BOOL)a1;
- (id)initWithFeatureAvailabilityProviding:(id)a0 healthDataSource:(id)a1;
- (id)initWithFeatureIdentifier:(id)a0 healthStore:(id)a1;
- (void)_queue_unregisterForFeatureStatusChanges;
- (id)initWithFeatureIdentifier:(id)a0 healthStore:(id)a1 currentCountryCode:(id)a2;
- (void)_registerForRequirementSatisfactionOverrideChangesForRequirements:(id)a0;
- (void).cxx_destruct;
- (void)_updateOverriddenSatisfactionOfRequirement:(id)a0 overriddenSatisfaction:(id)a1;
- (void)featureAvailabilityRequirement:(id)a0 didUpdateSatisfaction:(BOOL)a1;
- (void)unregisterObserver:(id)a0;
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)a0;
- (void)_queue_attemptFeatureStatusUpdate;
- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)a0;
- (void)dealloc;
- (void)_queue_registerForFeatureStatusChanges;
- (void)_notifyObserversWithFeatureStatus:(id)a0;
- (id)featureStatusWithError:(id *)a0;
- (id)_queue_updateFeatureStatusAndNotifyObserversWithError:(id *)a0;

@end
