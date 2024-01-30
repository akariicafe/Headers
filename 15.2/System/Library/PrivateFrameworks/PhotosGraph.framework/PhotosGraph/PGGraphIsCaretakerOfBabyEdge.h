@interface PGGraphIsCaretakerOfBabyEdge : PGGraphPropertylessEdge

+ (id)filter;

- (id)label;
- (unsigned short)domain;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4 properties:(id)a5;
- (id)initFromPersonNode:(id)a0 toBabyNode:(id)a1;

@end
