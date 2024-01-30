@class NSString, HDProfile, NSCalendar, NSObject, NSNumber;
@protocol OS_dispatch_queue;

@interface CHCompanionWorkoutCreditManager : NSObject <HDHealthDaemonReadyObserver, HDDataObserver> {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    NSNumber *_anchor;
    NSCalendar *_calendar;
    BOOL _hasPairedWatches;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)daemonReady:(id)a0;
- (id)initWithProfile:(id)a0;
- (BOOL)_queue_generateAndSaveSamplesForIntervals:(id)a0 withExerciseMinuteTable:(id)a1 standHourTable:(id)a2 standMinuteTable:(id)a3 moveMinuteTable:(id)a4 error:(id)a5;
- (void)_queue_processWorkouts;
- (id)_queue_samplesForType:(id)a0 fromStartTime:(id)a1 toEndTime:(id)a2;
- (id)_queue_workoutsSinceAnchor:(id *)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)_queue_userLocalProtectedDomain;
- (void)_queue_performWorkoutCreditFixup;
- (id)_queue_workoutAnchor;
- (void)dealloc;
- (void)_queue_setWorkoutAnchor:(id)a0;
- (void)stopObservingWorkouts;
- (void)_queue_fastForwardAnchor;
- (void)performWorkoutCreditFixup;

@end
