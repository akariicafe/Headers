@class PGGraphPublicEventNodeCollection;

@interface PGGraphPublicEventCategoryNodeCollection : PGGraphNodeCollection

@property (readonly, nonatomic) PGGraphPublicEventNodeCollection *publicEventNodes;

+ (Class)nodeClass;
+ (id)publicEventCategoryNodesForCategory:(id)a0 inGraph:(id)a1;
+ (id)publicEventCategoryNodesForCategories:(id)a0 inGraph:(id)a1;

@end
