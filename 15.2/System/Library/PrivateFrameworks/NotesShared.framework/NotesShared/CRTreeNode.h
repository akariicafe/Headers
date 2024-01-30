@class CRTree, NSArray, CRWeakReference;

@interface CRTreeNode : CRObject

@property (weak, nonatomic) CRTree *tree;
@property (weak, nonatomic) CRTreeNode *parent;
@property (retain, nonatomic) CRWeakReference *parentRef;
@property (retain, nonatomic) id value;
@property (retain, nonatomic) NSArray *children;

+ (id)CRProperties;

- (void)removeNode:(id)a0;
- (void)insertNode:(id)a0 atIndex:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)moveNode:(id)a0 toIndex:(unsigned long long)a1;
- (BOOL)isInLoop;
- (id)parentReference;
- (id)initWithValue:(id)a0 parent:(id)a1 tree:(id)a2;
- (BOOL)isLoopNode;
- (id)insertNodeWithValue:(id)a0 atIndex:(unsigned long long)a1;

@end
