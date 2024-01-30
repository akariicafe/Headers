@class PGGraphMeaningNode;
@protocol PGGraphMeaningfulEvent;

@interface PGPotentialMeaningfulEventMemory : PGPotentialMemory {
    PGGraphMeaningNode *_preciseMeaningNode;
}

@property (readonly) id<PGGraphMeaningfulEvent> meaningfulEvent;
@property (readonly) unsigned long long meaning;

- (void).cxx_destruct;
- (unsigned long long)memoryCategory;
- (id)memoryFeatureNodesInGraph:(id)a0;
- (id)initWithCategory:(unsigned long long)a0 meaningfulEvent:(id)a1 meaning:(unsigned long long)a2 preciseMeaningNode:(id)a3 controller:(id)a4;

@end
