@class NSDictionary, PGGraphNode;
@protocol PGGraphLocationOrArea;

@interface PGPotentialFoodieMemory : PGPotentialMemory

@property (readonly, nonatomic) unsigned long long kind;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long relevantFoodAssetCount;
@property (retain, nonatomic) NSDictionary *relevantFoodAssetUUIDsByMomentNodeLocalIdentifier;
@property (retain, nonatomic) NSDictionary *personAssetUUIDsByMomentNodeLocalIdentifier;
@property (retain, nonatomic) PGGraphNode *featuredNode;
@property (retain, nonatomic) PGGraphNode<PGGraphLocationOrArea> *tripLocationNode;
@property (nonatomic) unsigned long long tripTitleLocationType;

- (void).cxx_destruct;
- (id)initWithMomentNodes:(id)a0 kind:(unsigned long long)a1 type:(unsigned long long)a2;

@end
