@interface PGGraphContainsEdge : PGGraphPropertylessEdge

- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4;
- (unsigned short)domain;
- (id)initFromHighlightNode:(id)a0 toMomentNode:(id)a1;
- (id)label;

@end
