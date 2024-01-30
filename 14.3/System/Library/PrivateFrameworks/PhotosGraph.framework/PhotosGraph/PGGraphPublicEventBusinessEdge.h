@interface PGGraphPublicEventBusinessEdge : PGGraphBusinessEdge

+ (id)filter;

- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4;
- (unsigned short)domain;
- (id)label;
- (id)initFromPublicEventNode:(id)a0 toBusinessNode:(id)a1 weight:(float)a2;

@end
