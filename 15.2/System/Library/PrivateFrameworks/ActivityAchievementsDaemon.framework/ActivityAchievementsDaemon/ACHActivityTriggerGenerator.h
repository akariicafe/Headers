@interface ACHActivityTriggerGenerator : NSObject

+ (unsigned long long)allPossibleTriggers;

- (unsigned long long)_triggersForNewActivityDataWithGoalType:(long long)a0 dataProvider:(id)a1 goalMetHandler:(id /* block */)a2;
- (struct { long long x0; long long x1; double x2; double x3; double x4; double x5; double x6; long long x7; long long x8; long long x9; long long x10; double x11; double x12; double x13; BOOL x14; BOOL x15; double x16; })_incrementWithInitialState:(struct { long long x0; long long x1; double x2; double x3; double x4; double x5; double x6; long long x7; long long x8; long long x9; long long x10; double x11; double x12; double x13; BOOL x14; BOOL x15; double x16; })a0 forGoalType:(long long)a1 dataProvider:(id)a2 goalMetHandler:(id /* block */)a3;
- (BOOL)_goalTypeIsMoveType:(long long)a0;
- (unsigned long long)triggersForNewMoveDataWithDataProvider:(id)a0;
- (unsigned long long)triggersForNewMoveTimeDataWithDataProvider:(id)a0;
- (unsigned long long)triggersForNewExerciseDataWithDataProvider:(id)a0;
- (unsigned long long)triggersForNewStandDataWithDataProvider:(id)a0;

@end
