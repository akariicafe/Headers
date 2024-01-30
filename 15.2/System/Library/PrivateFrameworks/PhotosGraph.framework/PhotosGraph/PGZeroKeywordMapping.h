@class PGGraphMeaningNode, NSArray;

@interface PGZeroKeywordMapping : NSObject

@property (readonly, nonatomic) PGGraphMeaningNode *displayNode;
@property (readonly, nonatomic) NSArray *mappedMeaningNodes;

- (void).cxx_destruct;
- (id)initWithDisplayNode:(id)a0 mappedMeaningNodes:(id)a1;

@end
