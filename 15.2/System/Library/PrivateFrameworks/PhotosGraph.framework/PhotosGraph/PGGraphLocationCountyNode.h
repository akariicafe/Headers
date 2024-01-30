@class PGGraphLocationCountyNodeCollection;

@interface PGGraphLocationCountyNode : PGGraphNamedLocationNode

@property (readonly, nonatomic) PGGraphLocationCountyNodeCollection *collection;

+ (id)filter;
+ (id)momentOfCounty;
+ (id)addressOfCounty;

- (id)label;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;
- (Class)collectionClass;

@end
