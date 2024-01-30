@class PGGraphMomentNodeCollection, PGGraphPersonNodeCollection;

@interface PGGraphBabyNodeCollection : PGGraphNodeCollection

@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *caretakerNodes;

+ (Class)nodeClass;

@end
