@interface PGGraphLocationCountyEdge : PGGraphLocationEdge

+ (id)filter;

- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4;
- (id)initFromLocationNode:(id)a0 toCountyNode:(id)a1;
- (unsigned short)domain;
- (id)label;

@end
