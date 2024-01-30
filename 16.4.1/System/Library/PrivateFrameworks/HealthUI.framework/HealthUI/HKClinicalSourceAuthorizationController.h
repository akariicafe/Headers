@class NSDate, NSError, HKHealthRecordsStore, NSArray, NSSet, HKAuthorizationStore, HKHealthStore, HKSource, NSMutableSet;

@interface HKClinicalSourceAuthorizationController : NSObject

@property (readonly, nonatomic) HKHealthRecordsStore *healthRecordsStore;
@property (readonly, nonatomic) HKAuthorizationStore *authorizationStore;
@property (copy, nonatomic) NSSet *typesForReading;
@property (copy, nonatomic) NSError *fetchError;
@property (readonly, copy, nonatomic) NSSet *typesRequestedForReading;
@property (readonly, nonatomic) NSMutableSet *typesEnabledForReading;
@property (nonatomic) BOOL anyDeterminedTypeAllowsReading;
@property (nonatomic) long long authorizationModeForSource;
@property (copy, nonatomic) NSDate *displayReadAuthorizationAnchorDate;
@property (copy, nonatomic, setter=_unitTesting_setReminderRegistryCompletion:) id /* block */ _unitTesting_reminderRegistryCompletion;
@property (readonly, copy, nonatomic) HKSource *source;
@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly, copy, nonatomic) NSArray *orderedTypesForReading;
@property (readonly, nonatomic) BOOL anyTypeRequested;

- (void)reload;
- (void).cxx_destruct;
- (id)initWithHealthStore:(id)a0 healthRecordsStore:(id)a1 source:(id)a2 typesRequestedForReading:(id)a3;
- (BOOL)allTypesEnabled;
- (id)_authorizationModesWithMode:(long long)a0 types:(id)a1;
- (long long)_authorizationStatusWithType:(id)a0;
- (id)_authorizationStatusesWithTypes:(id)a0;
- (void)_commitModeConfirmationAlertRegistrationShouldDisplay:(BOOL)a0;
- (id)_fetchAllClinicalAuthorizationRecordsWithError:(id *)a0;
- (id)_orderTypes:(id)a0;
- (void)_setAuthorizationStatuses:(id)a0 modes:(id)a1 shouldUpdateAnchor:(BOOL)a2;
- (BOOL)_shouldUpdateDisplayReadAuthorizationAnchorDateWhenCommittingWithMode:(long long)a0;
- (void)_updateDisplayReadAuthorizationAnchorDateIfNeededForCommittingModes:(id)a0;
- (void)_updateReminderRegistrationIfNeededForCommittingModes:(id)a0 anyTypeEnabled:(BOOL)a1;
- (BOOL)anyTypeEnabled;
- (void)commitAllTypesAndUpdateAuthorizationAnchorWithMode:(long long)a0;
- (BOOL)isTypeEnabled:(id)a0;
- (void)setEnabled:(BOOL)a0 forType:(id)a1 commit:(BOOL)a2;
- (void)setEnabledForAllTypes:(BOOL)a0;

@end
