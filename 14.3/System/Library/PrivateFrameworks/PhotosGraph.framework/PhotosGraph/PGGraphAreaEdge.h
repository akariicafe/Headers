@interface PGGraphAreaEdge : PGGraphPropertylessEdge {
    float _weight;
}

- (id)edgeDescription;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4;
- (void)setWeight:(float)a0;
- (id)initFromAddressNode:(id)a0 toAreaNode:(id)a1 weight:(float)a2;
- (unsigned short)domain;
- (id)label;
- (float)weight;

@end
