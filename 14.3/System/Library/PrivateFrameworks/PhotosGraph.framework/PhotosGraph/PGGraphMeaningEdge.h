@class NSString;

@interface PGGraphMeaningEdge : PGGraphPropertylessEdge

@property (nonatomic) float weight;
@property (readonly) BOOL isReliable;
@property (readonly) NSString *meaningLabel;

+ (id)filter;

- (id)edgeDescription;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4;
- (unsigned short)domain;
- (id)label;
- (id)initFromMomentNode:(id)a0 toMeaningNode:(id)a1 weight:(float)a2;

@end
