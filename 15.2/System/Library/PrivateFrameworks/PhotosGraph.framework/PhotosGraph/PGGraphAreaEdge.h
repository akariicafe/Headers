@class MAEdgeFilter;

@interface PGGraphAreaEdge : PGGraphPropertylessEdge <MAUniquelyIdentifiableEdge> {
    float _weight;
}

@property (readonly, nonatomic) MAEdgeFilter *uniquelyIdentifyingFilter;

+ (id)filter;

- (float)weight;
- (id)label;
- (unsigned short)domain;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4 properties:(id)a5;
- (id)edgeDescription;
- (id)initFromAddressNode:(id)a0 toAreaNode:(id)a1 weight:(float)a2;

@end
