@class PGGraphMomentNodeCollection;

@interface PGGraphPOINodeCollection : PGGraphNodeCollection

@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;

+ (Class)nodeClass;
+ (id)poiNodesForLabel:(id)a0 inGraph:(id)a1;
+ (id)poiNodesForLabels:(id)a0 inGraph:(id)a1;

@end
