@interface HDMedicationScheduleControlServer : HDStandardTaskServer <HDMedicationScheduleObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _shouldObserveChanges;
}

@property (copy, nonatomic) id /* block */ hkt_willTriggerNanoSyncHandler;

+ (id)createTaskServerWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3 error:(id *)a4;
+ (id)taskIdentifier;
+ (Class)configurationClass;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;

- (id)remoteInterface;
- (id)exportedInterface;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void).cxx_destruct;
- (void)remote_saveSchedule:(id)a0 completion:(id /* block */)a1;
- (void)remote_deleteSchedule:(id)a0 completion:(id /* block */)a1;
- (void)remote_fetchAllSchedulesWithCompletion:(id /* block */)a0;
- (void)remote_fetchScheduleWithMedicationIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)remote_observeMedicationScheduleChanges:(BOOL)a0 completion:(id /* block */)a1;
- (void)remote_rescheduleMedicationsWithCompletion:(id /* block */)a0;
- (void)remote_saveScheduleItems:(id)a0 completion:(id /* block */)a1;
- (void)remote_updateNotificationSent:(BOOL)a0 scheduleItemIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)remote_updateSchedulesToLocalTimeZoneAndMaintainCalendarDatesAndTimes:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)insertMedicationScheduleItems:(id)a0 error:(id *)a1;
- (void)scheduleManager:(id)a0 didPruneScheduleItems:(id)a1;
- (void)scheduleManagerDidRescheduleMedications:(id)a0;

@end
