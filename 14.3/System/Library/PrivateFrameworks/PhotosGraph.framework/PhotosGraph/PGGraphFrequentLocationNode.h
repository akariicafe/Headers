@class NSArray, NSString, NSDateInterval, NSDate, NSSet, PGGraphAddressNode;

@interface PGGraphFrequentLocationNode : PGGraphOptimizedNode <PLFrequentLocationProtocol>

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
@property (readonly) NSSet *momentNodes;
@property (readonly) unsigned long long numberOfMomentNodes;

+ (id)filter;

- (void)enumerateMomentNodesUsingBlock:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)hasProperties:(id)a0;
- (id)propertyDictionary;
- (void)setLocalProperties:(id)a0;
- (unsigned short)domain;
- (id)label;
- (id)name;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2;

@end
