@class NSArray, KGMemoryNode, NSDictionary, NSString;

@interface KGMemoryEdge : NSObject <KGEdge>

@property (readonly, nonatomic) unsigned long long identifier;
@property (nonatomic) float weight;
@property (readonly, copy, nonatomic) NSArray *labels;
@property (readonly, nonatomic) KGMemoryNode *targetNode;
@property (readonly, nonatomic) KGMemoryNode *sourceNode;
@property (copy, nonatomic) NSDictionary *properties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)resolveIdentifier:(unsigned long long)a0;
- (id)initWithIdentifier:(unsigned long long)a0 labels:(id)a1 weight:(float)a2 properties:(id)a3 sourceNode:(id)a4 targetNode:(id)a5;
- (id)oppositeNodeFromNode:(id)a0;

@end
