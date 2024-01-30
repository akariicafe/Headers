@class NSString, HDProfile, HDKeyValueDomain, NSObject;
@protocol OS_dispatch_queue, HKFeatureStatusProviding;

@interface HDHRAFibBurdenRescindedNotificationManager : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, HKFeatureStatusProvidingObserver> {
    HDProfile *_profile;
    id<HKFeatureStatusProviding> _featureStatusProvider;
    HDKeyValueDomain *_localKeyValueDomain;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (copy, nonatomic) id /* block */ unitTesting_postNotificationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)daemonReady:(id)a0;
- (BOOL)_isFeatureRescindedWithRequirementsEvaluation:(id)a0;
- (void)_queue_presentRescindedOrReEnabledAlertIfNeededWithFeatureStatus:(id)a0;
- (void)_showRescindedNotificationWithTitleKey:(id)a0 bodyKey:(id)a1;
- (void)_sendNotificationRequest:(id)a0;
- (BOOL)_isFeatureUnavailableForNonRescindedReasonsWithRequirementsEvaluation:(id)a0;
- (id)_rescindedAlertBodyKeyForUnsatisfiedRequirementIdentifiers:(id)a0;
- (id)_rescindedRequirementIdentifiers;
- (id)initWithProfile:(id)a0 featureStatusProvider:(id)a1 keyValueDomain:(id)a2;
- (id)initWithProfile:(id)a0 featureStatusProvider:(id)a1;
- (void)dealloc;
- (void)featureStatusProviding:(id)a0 didUpdateFeatureStatus:(id)a1;
- (id)_rescindedAlertTitleKeyForUnsatisfiedRequirementIdentifiers:(id)a0;
- (void)_queue_pullFeatureStatusAndPresentAlertIfNeeded;
- (void).cxx_destruct;

@end
