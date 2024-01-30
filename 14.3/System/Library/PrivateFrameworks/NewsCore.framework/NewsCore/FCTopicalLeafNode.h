@class FCTopicalNode;

@interface FCTopicalLeafNode : NSObject

@property (retain, nonatomic) FCTopicalNode *node;
@property (nonatomic) double score;

- (void).cxx_destruct;
- (id)initWithNode:(id)a0 score:(double)a1;

@end
