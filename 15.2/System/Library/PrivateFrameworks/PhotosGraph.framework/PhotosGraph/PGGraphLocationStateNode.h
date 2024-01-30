@class PGGraphLocationStateNodeCollection;

@interface PGGraphLocationStateNode : PGGraphNamedLocationNode

@property (readonly, nonatomic) PGGraphLocationStateNodeCollection *collection;

+ (id)filter;
+ (id)countryOfState;
+ (id)addressOfState;
+ (id)momentOfState;

- (id)label;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;
- (unsigned long long)featureType;
- (Class)collectionClass;

@end
