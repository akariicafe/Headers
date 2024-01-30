@class NSString, NSMutableSet, NSArray;

@interface PGPotentialMeaningfulEventAggregationMemory : PGPotentialMemory {
    NSMutableSet *_mutableMomentNodes;
}

@property (readonly, nonatomic) long long year;
@property (readonly) unsigned long long meaning;
@property (retain, nonatomic) NSMutableSet *meaningfulEvents;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSArray *relevantAssetLocalIdentifiers;

- (double)score;
- (void).cxx_destruct;
- (unsigned long long)memoryCategory;
- (id)memoryFeatureNodesInGraph:(id)a0;
- (id)initWithMeaning:(unsigned long long)a0 features:(id)a1 year:(long long)a2;
- (void)addMeaningfulEvent:(id)a0 controller:(id)a1;
- (id)peopleUUIDs;
- (id)supportedFeatureTypesForMeaning:(unsigned long long)a0;

@end
