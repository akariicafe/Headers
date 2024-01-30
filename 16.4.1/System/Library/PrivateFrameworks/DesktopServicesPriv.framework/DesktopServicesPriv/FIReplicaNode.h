@class FIDSNode;

@interface FIReplicaNode : FINode {
    FIDSNode *_node;
}

- (id)init:(id)a0;
- (id)original;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void *)asTNode;

@end
