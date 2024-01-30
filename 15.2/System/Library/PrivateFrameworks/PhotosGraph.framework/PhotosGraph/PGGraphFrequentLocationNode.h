@class PGGraphFrequentLocationNodeCollection, NSArray, NSString, NSDateInterval, NSDate, PGGraphAddressNode;

@interface PGGraphFrequentLocationNode : PGGraphOptimizedNode <PLFrequentLocationProtocol, PGAssetCollectionFeature>

@property (readonly) struct CLLocationCoordinate2D { double x0; double x1; } coordinate;
@property (readonly) NSDateInterval *dateInterval;
@property (readonly) NSArray *sortedMoments;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSDate *localStartDate;
@property (readonly) NSDate *localEndDate;
@property (readonly) NSDateInterval *localDateInterval;
@property (readonly) PGGraphAddressNode *addressNode;
@property (readonly, nonatomic) PGGraphFrequentLocationNodeCollection *collection;
@property (readonly, nonatomic) unsigned long long featureType;
@property (readonly, nonatomic) NSString *featureIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)filter;
+ (id)momentOfFrequentLocation;
+ (id)addressOfFrequentLocation;

- (BOOL)hasProperties:(id)a0;
- (unsigned long long)numberOfMomentNodes;
- (id)propertyDictionary;
- (id)label;
- (void).cxx_destruct;
- (unsigned short)domain;
- (id)name;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;
- (id)initWithLocalDateInterval:(id)a0;

@end
