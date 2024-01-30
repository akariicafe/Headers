@interface PGGraphPerformerEdge : PGGraphPropertylessEdge

- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4;
- (unsigned short)domain;
- (id)label;
- (id)initFromPublicEventNode:(id)a0 toPerformerNode:(id)a1;

@end
