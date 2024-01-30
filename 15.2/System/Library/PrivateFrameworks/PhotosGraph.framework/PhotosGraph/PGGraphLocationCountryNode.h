@class PGGraphLocationCountryNodeCollection, MARelation;

@interface PGGraphLocationCountryNode : PGGraphNamedLocationNode

@property (class, readonly) MARelation *momentInCountry;

@property (readonly, nonatomic) PGGraphLocationCountryNodeCollection *collection;

+ (id)filter;
+ (id)addressOfCountry;
+ (id)languageOfCountry;

- (id)label;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;
- (unsigned long long)featureType;
- (Class)collectionClass;

@end
