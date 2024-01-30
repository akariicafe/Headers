@class CLLocation, NSDate;

@interface PGGraphAddressEdge : PGGraphOptimizedEdge {
    float _weight;
}

@property (retain, nonatomic) NSDate *universalStartDate;
@property (retain, nonatomic) NSDate *universalEndDate;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } photoCoordinate;
@property (retain, nonatomic) CLLocation *photoLocation;
@property (readonly, nonatomic) double timestampUTCStart;
@property (readonly, nonatomic) double timestampUTCEnd;

+ (id)filter;

- (id)edgeDescription;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4;
- (void)setWeight:(float)a0;
- (BOOL)hasProperties:(id)a0;
- (id)propertyDictionary;
- (void)setLocalProperties:(id)a0;
- (unsigned short)domain;
- (id)label;
- (float)weight;
- (id)initWithLabel:(id)a0 fromMomentNode:(id)a1 toAddressNode:(id)a2 weight:(float)a3;

@end
