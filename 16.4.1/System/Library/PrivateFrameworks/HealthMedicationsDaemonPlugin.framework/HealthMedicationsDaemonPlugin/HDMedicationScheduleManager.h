@class HDAssertion, HKObserverSet, HDXPCGatedActivity, HDMedicationNotificationManager, HDProfile, NSObject, HDMedicationTimeZoneManager, NSNumber;
@protocol OS_dispatch_queue, HDMedicationScheduleObserver;

@interface HDMedicationScheduleManager : NSObject <HDProfileReadyObserver> {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    HKObserverSet<HDMedicationScheduleObserver> *_observers;
    HDMedicationNotificationManager *_notificationManager;
    HDMedicationTimeZoneManager *_timeZoneManager;
    HDXPCGatedActivity *_gatedRescheduleActivity;
    long long _gatedRescheduleRetryCount;
    BOOL _gatedRescheduleRetryAbort;
    HDAssertion *_accessibilityAssertion;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) HDMedicationNotificationManager *notificationManager;
@property (copy, nonatomic) id /* block */ unitTesting_willTriggerGatedActivity;
@property (readonly, nonatomic) long long _unitTesting_gatedRescheduleRetryCount;
@property (retain, nonatomic) NSNumber *_unitTesting_activity_result;

- (void)registerObserver:(id)a0 queue:(id)a1;
- (void)profileDidBecomeReady:(id)a0;
- (id)initWithProfile:(id)a0;
- (BOOL)medicationSchedule:(id *)a0 identifier:(id)a1 error:(id *)a2;
- (id)deletedSchedulesWithError:(id *)a0;
- (BOOL)pruneAllScheduleItemsBeforeDate:(id)a0 createDoseEvents:(BOOL)a1 error:(id *)a2;
- (BOOL)_updateSchedulesToTimeZone:(id)a0 maintainCalendarDatesAndTimes:(BOOL)a1 error:(id *)a2;
- (BOOL)insertMedicationSchedules:(id)a0 syncProvenance:(long long)a1 syncIdentity:(long long)a2 error:(id *)a3;
- (BOOL)rescheduleMedicationsWithError:(id *)a0;
- (void)rescheduleMedicationsWithSyncProvenance:(long long)a0;
- (BOOL)medicationSchedule:(id *)a0 medicationIdentifier:(id)a1 error:(id *)a2;
- (void)triggerGatedRescheduleWithMaximumDelay:(double)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (BOOL)deleteMedicationSchedule:(id)a0 error:(id *)a1;
- (BOOL)insertMedicationSchedule:(id)a0 error:(id *)a1;
- (void)unregisterObserver:(id)a0;
- (id)medicationSchedulesWithPredicate:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)updateSchedulesToLocalTimeZoneAndMaintainCalendarDatesAndTimes:(BOOL)a0 error:(id *)a1;
- (BOOL)insertMedicationSchedules:(id)a0 error:(id *)a1;
- (id)medicationSchedulesWithError:(id *)a0;
- (void).cxx_destruct;
- (BOOL)updateNotificationSent:(BOOL)a0 scheduleItemIdentifier:(id)a1 error:(id *)a2;
- (BOOL)scheduleMedicationsFromDate:(id)a0 error:(id *)a1;

@end
