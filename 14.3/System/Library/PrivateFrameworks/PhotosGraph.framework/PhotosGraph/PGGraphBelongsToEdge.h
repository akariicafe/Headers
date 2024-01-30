@interface PGGraphBelongsToEdge : PGGraphPropertylessEdge

@property (nonatomic) float weight;

- (id)edgeDescription;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4;
- (unsigned short)domain;
- (id)label;
- (id)initFromPersonNode:(id)a0 toSocialGroupNode:(id)a1 weight:(float)a2;

@end
