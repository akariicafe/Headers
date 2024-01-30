@interface PGGraphDayOfWeekEdge : PGGraphPropertylessEdge

- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4;
- (id)initFromDateNode:(id)a0 toDayOfWeekNode:(id)a1;
- (unsigned short)domain;
- (id)label;

@end
