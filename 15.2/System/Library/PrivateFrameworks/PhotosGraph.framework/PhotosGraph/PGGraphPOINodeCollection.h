@class PGGraphMomentNodeCollection;

@interface PGGraphPOINodeCollection : PGGraphNodeCollection

@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;

+ (Class)nodeClass;
+ (id)poiNodesWithLabel:(id)a0 inGraph:(id)a1;

@end
