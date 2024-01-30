@interface PGPotentialYearSummaryMemory : PGPotentialMemory

@property (nonatomic) long long year;

- (unsigned long long)memoryCategory;
- (id)memoryFeatureNodesInGraph:(id)a0;
- (id)initWithMomentNodes:(id)a0;

@end
