@class NSString, NSMutableSet, NSArray;

@interface PGPotentialMeaningfulEventAggregationMemory : PGPotentialMemory {
    NSMutableSet *_mutableMomentNodes;
}

@property (readonly) unsigned long long meaning;
@property (retain, nonatomic) NSMutableSet *meaningfulEvents;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSArray *relevantAssetLocalIdentifiers;

- (void).cxx_destruct;
- (double)score;
- (id)peopleUUIDs;
- (id)initWithMeaning:(unsigned long long)a0 features:(id)a1;
- (void)addMeaningfulEvent:(id)a0 controller:(id)a1;

@end
