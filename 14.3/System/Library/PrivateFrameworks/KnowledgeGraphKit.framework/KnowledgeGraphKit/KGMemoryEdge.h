@class NSArray, KGMemoryNode, NSDictionary;

@interface KGMemoryEdge : NSObject

@property (readonly, nonatomic) unsigned long long identifier;
@property (nonatomic) float weight;
@property (readonly, nonatomic) NSArray *labels;
@property (readonly, nonatomic) KGMemoryNode *targetNode;
@property (readonly, nonatomic) KGMemoryNode *sourceNode;
@property (retain, nonatomic) NSDictionary *properties;

- (void).cxx_destruct;
- (id)initWithIdentifier:(unsigned long long)a0 labels:(id)a1 weight:(float)a2 properties:(id)a3 sourceNode:(id)a4 targetNode:(id)a5;
- (id)oppositeNodeFromNode:(id)a0;

@end
