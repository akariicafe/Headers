@class PGGraphLocationCountryNodeCollection, MARelation;

@interface PGGraphLocationCountryNode : PGGraphNamedLocationNode

@property (class, readonly) MARelation *momentInCountry;

@property (readonly, nonatomic) PGGraphLocationCountryNodeCollection *collection;

+ (id)filter;
+ (id)addressOfCountry;
+ (id)languageOfCountry;

- (unsigned long long)featureType;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (id)label;
- (Class)collectionClass;

@end
