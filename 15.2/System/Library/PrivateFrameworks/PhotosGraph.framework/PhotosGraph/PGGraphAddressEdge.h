@class MAEdgeFilter, CLLocation, NSDate;

@interface PGGraphAddressEdge : PGGraphOptimizedEdge <MAUniquelyIdentifiableEdge> {
    float _weight;
}

@property (readonly, nonatomic) double timestampUTCStart;
@property (readonly, nonatomic) double timestampUTCEnd;
@property (readonly, nonatomic) NSDate *universalStartDate;
@property (readonly, nonatomic) NSDate *universalEndDate;
@property (readonly, nonatomic) unsigned long long numberOfAssets;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } photoCoordinate;
@property (readonly, nonatomic) CLLocation *photoLocation;
@property (readonly, nonatomic) MAEdgeFilter *uniquelyIdentifyingFilter;

+ (id)filter;
+ (void)setUniversalStartDate:(id)a0 onAddressEdgeForIdentifier:(unsigned long long)a1 inGraph:(id)a2;
+ (void)setUniversalEndDate:(id)a0 onAddressEdgeForIdentifier:(unsigned long long)a1 inGraph:(id)a2;

- (float)weight;
- (BOOL)hasProperties:(id)a0;
- (id)propertyDictionary;
- (id)label;
- (void).cxx_destruct;
- (unsigned short)domain;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4 properties:(id)a5;
- (id)edgeDescription;
- (id)initFromMomentNode:(id)a0 toAddressNode:(id)a1 weight:(float)a2 universalStartDate:(id)a3 universalEndDate:(id)a4 photoCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a5 numberOfAssets:(unsigned long long)a6;

@end
