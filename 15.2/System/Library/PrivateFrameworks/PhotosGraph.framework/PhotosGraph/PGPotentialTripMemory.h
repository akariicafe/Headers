@class NSString;

@interface PGPotentialTripMemory : PGPotentialMemory

@property (retain, nonatomic) NSString *tripNodeUUID;

- (void).cxx_destruct;
- (unsigned long long)memoryCategory;
- (id)memoryFeatureNodesInGraph:(id)a0;
- (id)initWithSubcategory:(unsigned long long)a0 momentNodes:(id)a1;

@end
