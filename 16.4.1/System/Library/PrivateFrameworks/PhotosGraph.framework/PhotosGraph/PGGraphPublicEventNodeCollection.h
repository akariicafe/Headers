@class PGGraphMomentNodeCollection, NSSet, PGGraphPublicEventCategoryNodeCollection, PGGraphPerformerNodeCollection, PGGraphBusinessNodeCollection;

@interface PGGraphPublicEventNodeCollection : PGGraphNodeCollection

@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;
@property (readonly, nonatomic) PGGraphPublicEventCategoryNodeCollection *categoryNodes;
@property (readonly, nonatomic) PGGraphPerformerNodeCollection *performerNodes;
@property (readonly, nonatomic) PGGraphBusinessNodeCollection *businessNodes;
@property (readonly, nonatomic) NSSet *eventNames;

+ (Class)nodeClass;
+ (id)publicEventNodesWithCategories:(id)a0 inGraph:(id)a1;

@end
