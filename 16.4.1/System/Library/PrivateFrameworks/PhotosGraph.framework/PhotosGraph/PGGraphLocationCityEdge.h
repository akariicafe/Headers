@interface PGGraphLocationCityEdge : PGGraphLocationEdge

+ (id)filter;

- (unsigned short)domain;
- (id)label;
- (id)initFromLocationNode:(id)a0 toCityNode:(id)a1;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 properties:(id)a4;

@end
