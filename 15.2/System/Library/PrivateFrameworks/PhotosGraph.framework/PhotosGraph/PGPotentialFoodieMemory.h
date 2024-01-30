@class NSDictionary, NSSet, PGGraphNode;
@protocol PGGraphLocationOrArea, PGAssetCollectionFeature;

@interface PGPotentialFoodieMemory : PGPotentialMemory

@property (readonly, nonatomic) unsigned long long kind;
@property (readonly, nonatomic) unsigned long long foodieType;
@property (readonly, nonatomic) unsigned long long relevantFoodAssetCount;
@property (retain, nonatomic) NSDictionary *relevantFoodAssetUUIDsByMomentNodeLocalIdentifier;
@property (retain, nonatomic) NSDictionary *personAssetUUIDsByMomentNodeLocalIdentifier;
@property (retain, nonatomic) NSSet *uuidsOfRequiredAssets;
@property (retain, nonatomic) NSSet *relevantAssetLocalIdentifiers;
@property (retain, nonatomic) PGGraphNode<PGAssetCollectionFeature> *featuredNode;
@property (retain, nonatomic) PGGraphNode<PGGraphLocationOrArea> *tripLocationNode;
@property (readonly, nonatomic) long long year;
@property (nonatomic) unsigned long long tripTitleLocationType;

- (void).cxx_destruct;
- (unsigned long long)memoryCategory;
- (id)memoryFeatureNodesInGraph:(id)a0;
- (id)initWithMomentNodes:(id)a0 kind:(unsigned long long)a1 type:(unsigned long long)a2 year:(long long)a3;

@end
