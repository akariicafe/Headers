@class NSArray, NSSet, NSString, PGGraphSocialGroupNodeCollection, NSNumber;

@interface PGGraphSocialGroupNode : PGGraphOptimizedNode <PGAssetCollectionFeature> {
    NSNumber *_uuid;
    float _weight;
}

@property (class, readonly) NSArray *weightSortDescriptors;

@property (readonly) long long socialGroupID;
@property (readonly) unsigned long long numberOfMomentNodes;
@property (readonly) unsigned long long numberOfPersonNodes;
@property (readonly, nonatomic) NSSet *personNodes;
@property (readonly, nonatomic) NSArray *sortedPersonNodes;
@property (readonly, nonatomic) NSString *socialGroupName;
@property (readonly, nonatomic) BOOL isFrequentSocialGroup;
@property (readonly, nonatomic) PGGraphSocialGroupNodeCollection *collection;
@property (readonly, nonatomic) unsigned long long featureType;
@property (readonly, nonatomic) NSString *featureIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)filter;
+ (id)personOfSocialGroup;
+ (id)momentOfSocialGroup;
+ (long long)identifierForPersonNodes:(id)a0;

- (float)weight;
- (BOOL)hasProperties:(id)a0;
- (id)UUID;
- (id)propertyDictionary;
- (id)label;
- (void).cxx_destruct;
- (unsigned short)domain;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;
- (id)initWithWeight:(float)a0 uuid:(id)a1;
- (unsigned long long)rankInGraph:(id)a0;
- (void)enumeratePersonEdgesAndNodesUsingBlock:(id /* block */)a0;
- (void)enumeratePersonNodesUsingBlock:(id /* block */)a0;

@end
