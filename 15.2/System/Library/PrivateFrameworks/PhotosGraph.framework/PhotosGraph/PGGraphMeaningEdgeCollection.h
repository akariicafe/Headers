@class PGGraphMomentNodeCollection, PGGraphMeaningNodeCollection;

@interface PGGraphMeaningEdgeCollection : PGGraphEdgeCollection

@property (readonly) PGGraphMomentNodeCollection *momentNodes;
@property (readonly) PGGraphMeaningNodeCollection *meaningNodes;

+ (Class)edgeClass;

@end
