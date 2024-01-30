@interface PGGraphSocialGroupEdge : PGGraphPropertylessEdge

+ (id)filter;

- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4;
- (id)initFromMomentNode:(id)a0 toSocialGroupNode:(id)a1;
- (unsigned short)domain;
- (id)label;

@end
