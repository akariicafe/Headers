@class GKListNode;

@interface GKLinkedList : NSObject

@property (nonatomic) GKListNode *headNode;
@property (nonatomic) GKListNode *tailNode;

- (void)removeNode:(id)a0;
- (id)init;
- (void)dealloc;
- (id)description;
- (void)removeAllNodes;
- (BOOL)hasCycle;
- (void)insertNode:(id)a0 before:(id)a1;
- (id)nodeForInsertionWithValue:(id)a0;
- (void)insertNodeAtBeginning:(id)a0;
- (id)insertNodeAtBeginningWithValue:(id)a0 forKey:(id)a1;
- (BOOL)isConsistent;

@end
