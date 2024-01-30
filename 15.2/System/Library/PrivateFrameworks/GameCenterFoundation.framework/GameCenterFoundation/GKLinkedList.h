@class GKListNode;

@interface GKLinkedList : NSObject

@property (retain, nonatomic) GKListNode *headNode;
@property (retain, nonatomic) GKListNode *tailNode;

- (void)removeNode:(id)a0;
- (void)removeAllNodes;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)insertNode:(id)a0 before:(id)a1;
- (BOOL)hasCycle;
- (id)nodeForInsertionWithValue:(id)a0;
- (void)insertNodeAtBeginning:(id)a0;
- (id)insertNodeAtBeginningWithValue:(id)a0 forKey:(id)a1;
- (BOOL)isConsistent;

@end
