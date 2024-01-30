@class UIGestureGraphNode;

@interface UIGestureGraphEdge : UIGestureGraphElement

@property (readonly, nonatomic) UIGestureGraphNode *sourceNode;
@property (readonly, nonatomic) UIGestureGraphNode *targetNode;
@property (readonly, nonatomic, getter=isDirected) BOOL directed;
@property (readonly, nonatomic, getter=isLoop) BOOL loop;

- (id)description;
- (id)commonNode:(id)a0;
- (void).cxx_destruct;
- (id)oppositeNode:(id)a0;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 directed:(BOOL)a3;

@end
