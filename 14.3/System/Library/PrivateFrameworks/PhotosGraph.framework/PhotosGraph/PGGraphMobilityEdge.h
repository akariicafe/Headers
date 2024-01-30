@interface PGGraphMobilityEdge : PGGraphPropertylessEdge {
    float _weight;
}

+ (id)filter;

- (id)edgeDescription;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4;
- (id)initFromMomentNode:(id)a0 toMobilityNode:(id)a1 weight:(float)a2;
- (void)setWeight:(float)a0;
- (unsigned short)domain;
- (id)label;
- (float)weight;

@end
