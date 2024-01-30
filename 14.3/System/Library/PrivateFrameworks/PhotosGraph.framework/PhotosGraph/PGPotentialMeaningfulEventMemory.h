@protocol PGGraphMeaningfulEvent;

@interface PGPotentialMeaningfulEventMemory : PGPotentialMemory

@property (readonly) id<PGGraphMeaningfulEvent> meaningfulEvent;
@property (readonly) unsigned long long meaning;

- (void).cxx_destruct;
- (id)initWithCategory:(unsigned long long)a0 meaningfulEvent:(id)a1 meaning:(unsigned long long)a2 controller:(id)a3;

@end
