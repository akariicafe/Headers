@interface PGGraphPublicEventBusinessEdge : PGGraphBusinessEdge

+ (id)filter;

- (id)label;
- (unsigned short)domain;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4 properties:(id)a5;
- (id)initFromPublicEventNode:(id)a0 toBusinessNode:(id)a1 weight:(float)a2 hasRoutineInfo:(BOOL)a3 universalStartDate:(id)a4 universalEndDate:(id)a5;

@end
