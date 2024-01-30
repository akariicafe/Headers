@class NSLock, NSString, REPeriodOfDayPredictor, NSDateInterval, NSNumber, NSObject, REUpNextTimer;
@protocol OS_dispatch_queue;

@interface REDailyRoutinePredictor : REObservableSingleton <REPeriodOfDayPredictorDelegate> {
    REPeriodOfDayPredictor *_periodOfDayPredictor;
    REUpNextTimer *_endMorningRoutineTimer;
    REUpNextTimer *_beginEveningRoutineTimer;
    REUpNextTimer *_endEveningRoutineTimer;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _currentRoutine;
    NSDateInterval *_currentRoutineInterval;
    NSLock *_routineLock;
    NSNumber *_overrideRoutineType;
}

@property (readonly, nonatomic) unsigned long long currentRoutineType;
@property (readonly, nonatomic) NSDateInterval *currentRoutineInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (id)_init;
- (void)periodOfDayPredictorDidUpdatePredictedIntervals:(id)a0;
- (void)periodOfDayPredictorDidUpdateCurrentPeriodOfDay:(id)a0;
- (id)_eveningRoutineIntervalForEvening:(id)a0;
- (id)_morningRoutineIntervalForMorning:(id)a0;
- (void)_updateCurrentRoutine;
- (void)_queue_setupMorningBeginTimerIfNeeded;
- (void)_queue_setupEveningBeginTimerIfNeeded;
- (void)_queue_didEndMorningRoutine;
- (void)_queue_didEndEveningRoutine;
- (void)_queue_didBeginMorningRoutine;
- (void)_queue_didBeginEveningRoutine;
- (id)routineIntervalForNextRoutine:(unsigned long long)a0;
- (id)routineIntervalForPreviousRoutine:(unsigned long long)a0;
- (void)_setOverrideRoutineType:(unsigned long long)a0;

@end
