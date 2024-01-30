@class NSSet, PGGraphBusinessNodeCollection;

@interface PGGraphBusinessCategoryNodeCollection : PGGraphNodeCollection

@property (readonly) NSSet *categories;
@property (readonly, nonatomic) PGGraphBusinessNodeCollection *businessNodes;

+ (Class)nodeClass;
+ (id)businessCategoryNodesForCategories:(id)a0 inGraph:(id)a1;
+ (id)businessCategoryNodesForCategory:(id)a0 inGraph:(id)a1;

@end
