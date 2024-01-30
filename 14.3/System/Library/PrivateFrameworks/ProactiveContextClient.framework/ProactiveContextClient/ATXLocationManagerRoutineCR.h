@class RTRoutineManager;

@interface ATXLocationManagerRoutineCR : NSObject <ATXLocationManagerRoutine> {
    RTRoutineManager *_routineManager;
}

+ (id)closestLOI:(id)a0 toLocation:(id)a1;

- (void)fetchClosestLOIWithinDistance:(double)a0 ofLocation:(id)a1 reply:(id /* block */)a2;
- (id)init;
- (void).cxx_destruct;
- (void)fetchLOILocationOfType:(long long)a0 reply:(id /* block */)a1;
- (void)fetchNextPredictedLOIFromLocation:(id)a0 startDate:(id)a1 timeInterval:(double)a2 requireHighConfidence:(BOOL)a3 reply:(id /* block */)a4;
- (void)fetchLOIVisitedDuring:(id)a0 reply:(id /* block */)a1;
- (unsigned long long)fetchRoutineModeFromLocation:(id)a0;
- (void)fetchPredictedExitDatesFromLocation:(id)a0 onDate:(id)a1 requireHighConfidence:(BOOL)a2 reply:(id /* block */)a3;
- (id)initWithRoutineManager:(id)a0;

@end
