@class NSString, NSArray, SSDoubleLinkedListNode;

@interface SSDoubleLinkedList : NSObject

@property (retain, nonatomic) NSString *listIdentifier;
@property (readonly, nonatomic) NSArray *allNodes;
@property (readonly, nonatomic) unsigned long long count;
@property (retain, nonatomic) SSDoubleLinkedListNode *head;
@property (retain, nonatomic) SSDoubleLinkedListNode *tail;

- (void)removeNode:(id)a0;
- (id)appendObject:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)appendNode:(id)a0;
- (id)description;
- (void)removeAllNodes;
- (id)insertObject:(id)a0;
- (void)insertNode:(id)a0;

@end
