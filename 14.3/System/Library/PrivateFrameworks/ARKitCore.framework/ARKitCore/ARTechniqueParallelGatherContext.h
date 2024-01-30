@class NSIndexSet, NSMutableDictionary, NSMutableIndexSet, NSMapTable;

@interface ARTechniqueParallelGatherContext : ARTechniqueGatherContext {
    ARTechniqueParallelGatherContext *_previousContext;
    NSIndexSet *_requiredTechniqueIndices;
    NSIndexSet *_deterministicTechniqueIndices;
    unsigned long long _techniqueCount;
    NSMutableDictionary *_gatheredDataByTechniqueIndex;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _gatherLock;
    NSMutableIndexSet *_lateResultTechniqueIndices;
    NSMapTable *_techniquesByIndex;
    BOOL _resultsCaptured;
}

@property BOOL requiredTimeIntervalComplete;

- (void).cxx_destruct;
- (id)description;
- (id)gatheredData;
- (id)initWithParentContext:(id)a0 previousContext:(id)a1 requiredTechniqueIndices:(id)a2 deterministicTechniqueIndices:(id)a3 techniques:(id)a4;
- (BOOL)deterministicResultsCaptured;
- (id)addResultData:(id)a0 forTechniqueAtIndex:(unsigned long long)a1;
- (id)captureGatheredData;
- (id)_allGatheredDataByTechniqueIndex;
- (id)lateResultDataForTechniqueAtIndex:(unsigned long long)a0;

@end
