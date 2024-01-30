@interface PGMemoryTriggerUpcomingAnniversary : PGMemoryTrigger

- (unsigned long long)triggerType;
- (id)relevantFeatureNodesInFeatureNodes:(id)a0;
- (id)resultsTriggeredWithContext:(id)a0 inGraph:(id)a1 progressReporter:(id)a2;
- (id)upcomingAnniversaryDateFromLocalDate:(id)a0 originalAnniversaryDate:(id)a1;

@end
