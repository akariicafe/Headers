@class NSArray, NSDictionary, NSString;
@protocol KGNode;

@interface KGSnapshotEdge : NSObject <KGEdge>

@property (readonly, nonatomic) id<KGNode> targetNode;
@property (readonly, nonatomic) id<KGNode> sourceNode;
@property (readonly, nonatomic) unsigned long long identifier;
@property (readonly, nonatomic) float weight;
@property (readonly, copy, nonatomic) NSArray *labels;
@property (readonly, copy, nonatomic) NSDictionary *properties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)resolveIdentifier:(unsigned long long)a0;
- (id)initWithIdentifier:(unsigned long long)a0 labels:(id)a1 weight:(float)a2 properties:(id)a3 sourceNode:(id)a4 targetNode:(id)a5;
- (id)oppositeNodeFromNode:(id)a0;

@end
