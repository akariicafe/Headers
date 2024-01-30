@class NSMutableArray, _UIDebugLogNode;

@interface _UIDebugLogStack : NSObject {
    NSMutableArray *_stack;
}

@property (readonly, nonatomic) _UIDebugLogNode *rootNode;

- (void)addMessage:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)popNode;
- (id)_topNode;
- (void)performWithPushedNode:(id)a0 block:(id /* block */)a1;
- (void)pushNode:(id)a0;

@end
