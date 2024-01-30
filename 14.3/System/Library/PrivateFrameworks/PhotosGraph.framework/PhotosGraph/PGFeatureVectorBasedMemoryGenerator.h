@class NSSet;

@interface PGFeatureVectorBasedMemoryGenerator : PGMemoryGenerator

@property (retain, nonatomic) NSSet *featureVectors;
@property (nonatomic) unsigned long long relatedType;
@property (nonatomic) unsigned long long memoryCategory;
@property (nonatomic) unsigned long long memorySubcategory;
@property (nonatomic) double minimumLocationMatchingScore;
@property (nonatomic) double maximumLocationMatchingDistance;
@property (nonatomic) double minimumPeopleMatchingScore;

- (void).cxx_destruct;
- (id)initWithController:(id)a0;
- (id)_potentialMemoriesForDryTesting;
- (id)generateMemories:(unsigned long long)a0;
- (id)_createMemoryDebugWithPotentialMemory:(id)a0;
- (unsigned long long)_postProcessMatch:(id)a0;

@end
