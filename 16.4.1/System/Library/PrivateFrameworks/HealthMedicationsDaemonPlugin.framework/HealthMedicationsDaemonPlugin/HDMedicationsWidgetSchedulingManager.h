@class NSString, HDProfile, NSObject, _HKDelayedOperation;
@protocol OS_dispatch_queue;

@interface HDMedicationsWidgetSchedulingManager : NSObject <HDHealthDaemonReadyObserver, HDDataObserver, HDMedicationScheduleObserver> {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    _HKDelayedOperation *_reloadOperation;
}

@property (copy, nonatomic) id /* block */ reloadWidgetHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)daemonReady:(id)a0;
- (id)initWithProfile:(id)a0;
- (void)samplesOfTypesWereRemoved:(id)a0 anchor:(id)a1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_stopObservingMedicationChanges;
- (void)_reloadWidgetIfNecessaryWithDoseEvents:(id)a0;
- (void)_reloadWidgets;
- (void)_runReloadOperation;
- (void)_startObservingMedicationChanges;
- (void)scheduleManager:(id)a0 didPruneScheduleItems:(id)a1;
- (void)scheduleManagerDidRescheduleMedications:(id)a0;

@end
