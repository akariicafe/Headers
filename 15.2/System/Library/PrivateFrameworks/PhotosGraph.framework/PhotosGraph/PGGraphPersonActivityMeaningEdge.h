@interface PGGraphPersonActivityMeaningEdge : PGGraphPropertylessEdge

+ (id)filter;

- (id)label;
- (unsigned short)domain;
- (id)meaningLabel;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4 properties:(id)a5;
- (id)edgeDescription;
- (id)initFromMomentNode:(id)a0 toPersonActivityMeaningNode:(id)a1;

@end
