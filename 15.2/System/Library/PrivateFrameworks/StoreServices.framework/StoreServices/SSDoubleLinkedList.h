@class NSString, NSArray, SSDoubleLinkedListNode;

@interface SSDoubleLinkedList : NSObject

@property (retain, nonatomic) NSString *listIdentifier;
@property (readonly, nonatomic) NSArray *allNodes;
@property (readonly, nonatomic) unsigned long long count;
@property (retain, nonatomic) SSDoubleLinkedListNode *head;
@property (retain, nonatomic) SSDoubleLinkedListNode *tail;

- (void)removeNode:(id)a0;
- (id)appendObject:(id)a0;
- (void)removeAllNodes;
- (void)insertNode:(id)a0;
- (id)description;
- (void)appendNode:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)insertObject:(id)a0;

@end
