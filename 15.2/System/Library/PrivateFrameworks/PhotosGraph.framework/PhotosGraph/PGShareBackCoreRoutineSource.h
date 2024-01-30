@class CLSRoutineService;

@interface PGShareBackCoreRoutineSource : PGShareBackSource {
    CLSRoutineService *_routineService;
}

- (void).cxx_destruct;
- (BOOL)prepareSourceWithGraph:(id)a0;
- (id)suggesterResultsForInputs:(id)a0 momentNodes:(id)a1 inGraph:(id)a2 error:(id *)a3;
- (id)initWithLoggingConnection:(id)a0;
- (BOOL)suggesterInput:(id)a0 isCloseEnoughToLocation:(id)a1 inDateInterval:(id)a2;

@end
