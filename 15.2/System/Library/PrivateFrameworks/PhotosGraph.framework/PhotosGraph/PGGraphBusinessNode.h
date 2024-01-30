@class PPNamedEntity, NSString, MARelation, NSSet, PGGraphBusinessNodeCollection;

@interface PGGraphBusinessNode : PGGraphOptimizedNode <PGGraphPortraitNamedEntity, PGAssetCollectionFeature>

@property (class, readonly, nonatomic) MARelation *categoryOfBusiness;
@property (class, readonly, nonatomic) MARelation *publicEventOfBusiness;
@property (class, readonly, nonatomic) MARelation *momentOfBusiness;

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
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } coordinate;
@property (readonly, nonatomic) double radius;
@property (readonly, nonatomic) NSSet *publicEventNodes;
@property (readonly, nonatomic) PGGraphBusinessNodeCollection *collection;
@property (readonly, nonatomic) unsigned long long featureType;
@property (readonly, nonatomic) NSString *featureIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)filter;

- (BOOL)hasProperties:(id)a0;
- (id)propertyDictionary;
- (id)label;
- (void).cxx_destruct;
- (unsigned short)domain;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;
- (void)enumerateMomentEdgesAndNodesUsingBlock:(id /* block */)a0;
- (id)keywordDescription;
- (id)associatedNodesForRemoval;
- (id)initWithName:(id)a0 uuid:(id)a1 venueCapacity:(long long)a2 latitude:(double)a3 longitude:(double)a4 radius:(double)a5;
- (void)enumerateBusinessCategoryNodesUsingBlock:(id /* block */)a0;

@end
