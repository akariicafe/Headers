@class ATXGamePlayKitDecisionTree;

@interface ATXGamePlayKitDecisionNode : NSObject {
    struct ATXGamePlayKitCDecisionNode { struct vector<std::__1::pair<id, ATXGamePlayKitCDecisionNode *>, std::__1::allocator<std::__1::pair<id, ATXGamePlayKitCDecisionNode *> > > { struct pair<id, ATXGamePlayKitCDecisionNode *> *x0; struct pair<id, ATXGamePlayKitCDecisionNode *> *x1; struct __compressed_pair<std::__1::pair<id, ATXGamePlayKitCDecisionNode *> *, std::__1::allocator<std::__1::pair<id, ATXGamePlayKitCDecisionNode *> > > { struct pair<id, ATXGamePlayKitCDecisionNode *> *x0; } x2; } x0; struct ATXGamePlayKitCDecisionNode *x1; unsigned long long x2; unsigned long long x3; id x4; id x5; id x6; id x7; id x8; } *_node;
    ATXGamePlayKitDecisionTree *_tree;
}

- (void).cxx_destruct;
- (void)setAttribute:(id)a0;
- (void)dealloc;
- (id)attribute;
- (id)branches;
- (id)description;
- (id)initWithNode:(struct ATXGamePlayKitCDecisionNode { struct vector<std::__1::pair<id, ATXGamePlayKitCDecisionNode *>, std::__1::allocator<std::__1::pair<id, ATXGamePlayKitCDecisionNode *> > > { struct pair<id, ATXGamePlayKitCDecisionNode *> *x0; struct pair<id, ATXGamePlayKitCDecisionNode *> *x1; struct __compressed_pair<std::__1::pair<id, ATXGamePlayKitCDecisionNode *> *, std::__1::allocator<std::__1::pair<id, ATXGamePlayKitCDecisionNode *> > > { struct pair<id, ATXGamePlayKitCDecisionNode *> *x0; } x2; } x0; struct ATXGamePlayKitCDecisionNode *x1; unsigned long long x2; unsigned long long x3; id x4; id x5; id x6; id x7; id x8; } *)a0 tree:(id)a1;
- (id)createChildWithAttribute:(id)a0 randomSource:(id)a1 withBranch:(id)a2;
- (id)createBranchWithValue:(id)a0 attribute:(id)a1;
- (id)createBranchWithPredicate:(id)a0 attribute:(id)a1;
- (id)createBranchWithWeight:(long long)a0 attribute:(id)a1;
- (id)getNodeAtBranch:(id)a0;

@end
