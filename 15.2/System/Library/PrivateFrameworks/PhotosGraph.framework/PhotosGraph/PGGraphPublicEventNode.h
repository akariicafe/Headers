@class PPNamedEntity, NSString, MARelation, PGGraphBusinessNode, NSSet, PGGraphPublicEventNodeCollection;

@interface PGGraphPublicEventNode : PGGraphOptimizedNode <PGGraphPortraitNamedEntity>

@property (class, readonly, nonatomic) MARelation *categoryOfPublicEvent;
@property (class, readonly, nonatomic) MARelation *performerOfPublicEvent;
@property (class, readonly, nonatomic) MARelation *businessOfPublicEvent;

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
@property (readonly, nonatomic) PGGraphPublicEventNodeCollection *collection;
@property (readonly, copy, nonatomic) NSSet *performers;
@property (readonly, nonatomic) long long expectedAttendance;

+ (id)filter;
+ (id)momentOfPublicEvent;
+ (id)unsupportedCategoriesForTitles;

- (BOOL)hasProperties:(id)a0;
- (id)propertyDictionary;
- (id)label;
- (void).cxx_destruct;
- (unsigned short)domain;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;
- (void)enumerateMomentEdgesAndNodesUsingBlock:(id /* block */)a0;
- (id)keywordDescription;
- (id)associatedNodesForRemoval;
- (id)initWithMUID:(unsigned long long)a0 name:(id)a1 expectedAttendance:(long long)a2;
- (void)enumerateCategoryEdgesAndNodesUsingBlock:(id /* block */)a0;
- (void)enumerateCategoryNodesUsingBlock:(id /* block */)a0;
- (void)enumerateLocalizedSubcategoryEdgesAndNodesUsingBlock:(id /* block */)a0;
- (void)enumerateLocalizedSubcategoryNodesUsingBlock:(id /* block */)a0;
- (void)enumeratePerformerEdgesAndNodesUsingBlock:(id /* block */)a0;
- (void)enumeratePerformerNodesUsingBlock:(id /* block */)a0;
- (void)enumeratePublicEventCategoryEdgesAndNodesUsingBlock:(id /* block */)a0;
- (void)enumeratePublicEventCategoryNodesUsingBlock:(id /* block */)a0;

@end
