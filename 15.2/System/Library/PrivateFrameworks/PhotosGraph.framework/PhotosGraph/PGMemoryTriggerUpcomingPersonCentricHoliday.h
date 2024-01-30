@class PGGraphMemoryNodeCollection;

@interface PGMemoryTriggerUpcomingPersonCentricHoliday : PGHolidayMemoryTrigger {
    PGGraphMemoryNodeCollection *_allSingleMomentMemoryNodes;
    PGGraphMemoryNodeCollection *_singleMomentMemoryNodesWithPartner;
    PGGraphMemoryNodeCollection *_singleMomentMemoryNodesWithMother;
    PGGraphMemoryNodeCollection *_singleMomentMemoryNodesWithFather;
}

- (unsigned long long)triggerType;
- (void).cxx_destruct;
- (id)resultsTriggeredWithContext:(id)a0 inGraph:(id)a1 progressReporter:(id)a2;
- (id)relevantFeatureNodesInFeatureNodes:(id)a0;
- (id)allSingleMomentMemoryNodesInGraph:(id)a0;
- (id)singleMomentMemoryNodesWithRelevantPersonNodes:(id)a0 inGraph:(id)a1;

@end
