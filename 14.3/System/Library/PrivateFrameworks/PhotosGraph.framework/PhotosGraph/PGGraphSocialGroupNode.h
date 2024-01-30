@class NSArray, NSSet, NSString, NSNumber;

@interface PGGraphSocialGroupNode : PGGraphOptimizedNode {
    NSNumber *_uuid;
    float _weight;
}

@property (class, readonly) NSArray *weightSortDescriptors;

@property (readonly) long long socialGroupID;
@property (readonly, nonatomic) unsigned long long rank;
@property (readonly) unsigned long long numberOfMomentNodes;
@property (readonly) unsigned long long numberOfPersonNodes;
@property (readonly, nonatomic) NSSet *momentNodes;
@property (readonly, nonatomic) NSSet *personNodes;
@property (readonly, nonatomic) NSArray *sortedPersonNodes;
@property (readonly, nonatomic) NSString *socialGroupName;
@property (readonly, nonatomic) BOOL isFrequentSocialGroup;

- (void)enumerateMomentNodesUsingBlock:(id /* block */)a0;
- (void)enumeratePersonNodesUsingBlock:(id /* block */)a0;
- (void)setWeight:(float)a0;
- (void).cxx_destruct;
- (BOOL)hasProperties:(id)a0;
- (id)propertyDictionary;
- (id)UUID;
- (void)setLocalProperties:(id)a0;
- (unsigned short)domain;
- (id)description;
- (id)label;
- (float)weight;
- (id)initWithWeight:(float)a0;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2;

@end
