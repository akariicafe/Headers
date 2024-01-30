@class NSString, HDProfile, NSCalendar, NSObject, NSNumber;
@protocol OS_dispatch_queue;

@interface CHCompanionWorkoutCreditManager : NSObject <HDProfileReadyObserver, HDDataObserver> {
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
- (void)profileDidBecomeReady:(id)a0;
- (id)initWithProfile:(id)a0;
- (void)_queue_performWorkoutCreditFixup;
- (void)stopObservingWorkouts;
- (void)performWorkoutCreditFixup;
- (void)_queue_processWorkouts;
- (void)dealloc;
- (id)_queue_userLocalProtectedDomain;
- (void)_queue_fastForwardAnchor;
- (BOOL)_queue_generateAndSaveSamplesForIntervals:(id)a0 withExerciseMinuteTable:(id)a1 standHourTable:(id)a2 standMinuteTable:(id)a3 moveMinuteTable:(id)a4 error:(id)a5;
- (id)_queue_samplesForType:(id)a0 fromStartTime:(id)a1 toEndTime:(id)a2;
- (id)_queue_workoutsSinceAnchor:(id *)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)_queue_workoutAnchor;
- (void)_queue_setWorkoutAnchor:(id)a0;

@end
