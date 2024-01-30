@class NSArray, NSSet, NSString, PGGraphSocialGroupNodeCollection, NSNumber;

@interface PGGraphSocialGroupNode : PGGraphOptimizedNode <PGAssetCollectionFeature> {
    NSNumber *_uuid;
}

@property (class, readonly) NSArray *importanceSortDescriptors;

@property (readonly) long long socialGroupID;
@property (readonly) double importance;
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
+ (id)filterWithSocialGroupIdentifier:(long long)a0;
+ (long long)identifierForPersonNodes:(id)a0;
+ (id)momentOfSocialGroup;
+ (id)personOfSocialGroup;

- (unsigned short)domain;
- (BOOL)hasProperties:(id)a0;
- (id)UUID;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (id)label;
- (id)propertyDictionary;
- (void).cxx_destruct;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;
- (void)enumeratePersonNodesUsingBlock:(id /* block */)a0;
- (void)enumeratePersonEdgesAndNodesUsingBlock:(id /* block */)a0;
- (id)initWithSocialGroupIdentifier:(long long)a0 importance:(double)a1;
- (unsigned long long)rankInGraph:(id)a0;

@end
