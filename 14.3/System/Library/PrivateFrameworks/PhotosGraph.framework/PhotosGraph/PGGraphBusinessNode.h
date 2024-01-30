@class PPNamedEntity, NSString, MARelation, NSSet;

@interface PGGraphBusinessNode : PGGraphOptimizedNode <PGGraphPortraitNamedEntity>

@property (class, readonly, nonatomic) MARelation *categoryOfBusiness;

@property (readonly, nonatomic) PPNamedEntity *pg_namedEntity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *UUID;
@property (readonly, nonatomic) long long venueCapacity;
@property (readonly, nonatomic) NSSet *businessCategories;
@property (readonly, nonatomic) double latitude;
@property (readonly, nonatomic) double longitude;
@property (readonly, nonatomic) double radius;
@property (readonly, nonatomic) NSSet *publicEventNodes;
@property (readonly, nonatomic) NSSet *momentNodes;

- (id)associatedNodesForRemoval;
- (void)enumerateMomentNodesUsingBlock:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)hasProperties:(id)a0;
- (id)propertyDictionary;
- (void)setLocalProperties:(id)a0;
- (unsigned short)domain;
- (id)label;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2;
- (id)keywordDescription;
- (void)enumerateBusinessCategoryNodesUsingBlock:(id /* block */)a0;

@end
