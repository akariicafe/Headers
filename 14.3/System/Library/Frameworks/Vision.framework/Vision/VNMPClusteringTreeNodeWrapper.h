@interface VNMPClusteringTreeNodeWrapper : NSObject

@property void *node;
@property BOOL freeNodeOnDealloc;

- (id)left;
- (float)distance;
- (int)nodeId;
- (void)dealloc;
- (id)descriptor;
- (id)right;
- (id)initWithNode:(void *)a0 freeNodeOnDealloc:(BOOL)a1;
- (float)avgDistance;
- (int)leafsCount;
- (id)getLeafNodes;

@end
