@interface PGMemoryTriggerRecentMeaningfulEvent : PGMemoryTrigger

- (unsigned long long)triggerType;
- (id)resultsTriggeredWithContext:(id)a0 inGraph:(id)a1 progressReporter:(id)a2;
- (id)relevantFeatureNodesInFeatureNodes:(id)a0;
- (id)meaningNodesSupportedForTriggerInGraph:(id)a0;

@end
