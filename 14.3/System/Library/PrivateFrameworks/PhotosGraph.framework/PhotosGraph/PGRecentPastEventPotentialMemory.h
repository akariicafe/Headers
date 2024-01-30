@class NSSet;

@interface PGRecentPastEventPotentialMemory : PGPotentialMemory

@property (retain) NSSet *personNodes;
@property double meanContentScore;
@property double neighborScore;
@property BOOL isBirthday;

- (void).cxx_destruct;
- (id)description;
- (id)initWithAssetCollection:(id)a0 momentNode:(id)a1 subcategory:(unsigned long long)a2;
- (id)initWithCategory:(unsigned long long)a0 subcategory:(unsigned long long)a1 momentNodes:(id)a2 sourceType:(long long)a3;
- (void)computeRemainingScoresWithController:(id)a0 previousPotentialMemory:(id)a1;

@end
