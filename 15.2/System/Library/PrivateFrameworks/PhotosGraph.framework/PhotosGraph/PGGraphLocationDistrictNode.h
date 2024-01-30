@class PGGraphLocationDistrictNodeCollection;

@interface PGGraphLocationDistrictNode : PGGraphNamedLocationNode

@property (readonly, nonatomic) PGGraphLocationDistrictNodeCollection *collection;

+ (id)filter;

- (id)label;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;
- (unsigned long long)featureType;

@end
