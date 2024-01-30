@class PGGraphMomentNodeCollection, PGGraphAddressNodeCollection;

@interface PGGraphLocationCountyNodeCollection : PGGraphNamedLocationNodeCollection

@property (readonly, nonatomic) PGGraphAddressNodeCollection *addressNodes;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;

+ (Class)nodeClass;

@end
