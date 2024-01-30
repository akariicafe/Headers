@interface PGGraphIsOwnedByEdge : PGGraphPropertylessEdge

+ (id)filter;

- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4;
- (unsigned short)domain;
- (id)label;
- (id)initFromHomeWorkNode:(id)a0 toPersonNode:(id)a1;

@end
