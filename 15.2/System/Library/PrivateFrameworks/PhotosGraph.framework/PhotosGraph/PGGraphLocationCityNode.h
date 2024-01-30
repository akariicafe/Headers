@class PGGraphLocationCityNodeCollection, MARelation;

@interface PGGraphLocationCityNode : PGGraphNamedLocationNode

@property (class, readonly) MARelation *momentInCity;
@property (class, readonly) MARelation *addressOfCity;

@property (readonly, nonatomic) PGGraphLocationCityNodeCollection *collection;

+ (id)filter;
+ (id)countyOfCity;
+ (id)stateOfCity;
+ (id)countryOfCity;

- (id)label;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;
- (unsigned long long)featureType;
- (Class)collectionClass;

@end
