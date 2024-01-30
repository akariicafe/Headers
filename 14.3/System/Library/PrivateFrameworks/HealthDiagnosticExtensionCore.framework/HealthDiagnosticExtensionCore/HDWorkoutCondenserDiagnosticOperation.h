@interface HDWorkoutCondenserDiagnosticOperation : HDDiagnosticOperation

- (void)run;
- (id)reportFilename;
- (void)_reportCondensedWorkoutsWithTaskClient:(id)a0;
- (void)_reportCondensableWorkoutsWithTaskClient:(id)a0;
- (void)_reportWorkoutCondenserTTRValuesWithDatabase:(id)a0;

@end
