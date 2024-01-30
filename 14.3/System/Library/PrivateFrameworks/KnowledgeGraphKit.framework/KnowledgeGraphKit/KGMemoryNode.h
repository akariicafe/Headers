@class NSArray, NSMutableArray, NSDictionary;

@interface KGMemoryNode : NSObject

@property (readonly, nonatomic) unsigned long long identifier;
@property (nonatomic) float weight;
@property (readonly, nonatomic) NSArray *labels;
@property (retain, nonatomic) NSMutableArray *edges;
@property (retain, nonatomic) NSDictionary *properties;

- (void).cxx_destruct;
- (void)removeEdge:(id)a0;
- (void)addEdge:(id)a0;
- (id)initWithIdentifier:(unsigned long long)a0 labels:(id)a1 weight:(float)a2 properties:(id)a3;
- (void)removeAllEdges;

@end
