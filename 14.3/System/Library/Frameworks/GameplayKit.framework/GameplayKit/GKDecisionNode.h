@class GKDecisionTree;

@interface GKDecisionNode : NSObject {
    struct GKCDecisionNode { struct vector<std::__1::pair<id, GKCDecisionNode *>, std::__1::allocator<std::__1::pair<id, GKCDecisionNode *> > > { struct pair<id, GKCDecisionNode *> *x0; struct pair<id, GKCDecisionNode *> *x1; struct __compressed_pair<std::__1::pair<id, GKCDecisionNode *> *, std::__1::allocator<std::__1::pair<id, GKCDecisionNode *> > > { struct pair<id, GKCDecisionNode *> *x0; } x2; } x0; struct GKCDecisionNode *x1; unsigned long long x2; unsigned long long x3; id x4; id x5; id x6; id x7; id x8; } *_node;
    GKDecisionTree *_tree;
}

- (void).cxx_destruct;
- (void)setAttribute:(id)a0;
- (void)dealloc;
- (id)attribute;
- (id)branches;
- (id)description;
- (id)initWithNode:(struct GKCDecisionNode { struct vector<std::__1::pair<id, GKCDecisionNode *>, std::__1::allocator<std::__1::pair<id, GKCDecisionNode *> > > { struct pair<id, GKCDecisionNode *> *x0; struct pair<id, GKCDecisionNode *> *x1; struct __compressed_pair<std::__1::pair<id, GKCDecisionNode *> *, std::__1::allocator<std::__1::pair<id, GKCDecisionNode *> > > { struct pair<id, GKCDecisionNode *> *x0; } x2; } x0; struct GKCDecisionNode *x1; unsigned long long x2; unsigned long long x3; id x4; id x5; id x6; id x7; id x8; } *)a0 tree:(id)a1;
- (id)createChildWithAttribute:(id)a0 randomSource:(id)a1 withBranch:(id)a2;
- (id)createBranchWithValue:(id)a0 attribute:(id)a1;
- (id)createBranchWithPredicate:(id)a0 attribute:(id)a1;
- (id)createBranchWithWeight:(long long)a0 attribute:(id)a1;
- (id)getNodeAtBranch:(id)a0;

@end
