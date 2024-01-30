@interface VNMPClusteringTreeNodeWrapper : NSObject

@property void *node;
@property BOOL freeNodeOnDealloc;

- (float)distance;
- (int)nodeId;
- (id)descriptor;
- (id)right;
- (void)dealloc;
- (id)left;
- (id)initWithNode:(void *)a0 freeNodeOnDealloc:(BOOL)a1;
- (float)avgDistance;
- (int)leafsCount;
- (id)getLeafNodes;

@end
