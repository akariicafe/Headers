@interface PGPotentialSeasonMemory : PGPotentialMemory

@property (nonatomic) long long year;

- (unsigned long long)memoryCategory;
- (id)memoryFeatureNodesInGraph:(id)a0;
- (id)initWithCategory:(unsigned long long)a0 momentNodes:(id)a1;

@end
