@class PGNeighborScoreComputer;

@interface PGMemoryTriggerRecentBreakoutOfRoutine : PGMemoryTrigger {
    PGNeighborScoreComputer *_neighborScoreComputer;
}

- (unsigned long long)triggerType;
- (void).cxx_destruct;
- (id)resultsTriggeredWithContext:(id)a0 inGraph:(id)a1 progressReporter:(id)a2;
- (id)relevantFeatureNodesInFeatureNodes:(id)a0;
- (id)neighborScoreComputerWithGraph:(id)a0;

@end
