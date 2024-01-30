@interface PGGraphBirthdayEdge : PGGraphPropertylessEdge {
    float _weight;
}

- (id)edgeDescription;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4;
- (void)setWeight:(float)a0;
- (unsigned short)domain;
- (id)label;
- (float)weight;
- (id)initFromMomentNode:(id)a0 toPersonNode:(id)a1 weight:(float)a2;

@end
