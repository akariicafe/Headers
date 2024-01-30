@class PPNamedEntity, NSString, MARelation, PGGraphBusinessNode, NSSet;

@interface PGGraphPublicEventNode : PGGraphOptimizedNode <PGGraphPortraitNamedEntity>

@property (class, readonly, nonatomic) MARelation *categoryOfPublicEvent;

@property (readonly, nonatomic) PPNamedEntity *pg_namedEntity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long muid;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) PGGraphBusinessNode *businessNode;
@property (readonly, nonatomic) NSSet *categories;
@property (readonly, nonatomic) NSSet *localizedCategories;
@property (readonly, nonatomic) NSSet *preciseLocalizedCategoryNames;
@property (readonly, copy, nonatomic) NSSet *performers;
@property (readonly, nonatomic) long long expectedAttendance;

+ (id)momentNodesForPublicEventNodes:(id)a0;
+ (id)unsupportedCategoriesForTitles;

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
- (void)enumerateCategoryNodesUsingBlock:(id /* block */)a0;
- (void)enumerateLocalizedSubcategoryNodesUsingBlock:(id /* block */)a0;
- (void)enumeratePerformerNodesUsingBlock:(id /* block */)a0;
- (void)enumeratePublicEventCategoryNodesUsingBlock:(id /* block */)a0;

@end
