@interface IMDoubleLinkedListNode : NSObject

@property (retain) IMDoubleLinkedListNode *prev;
@property (retain) IMDoubleLinkedListNode *next;
@property (retain) id object;

- (void)orphan;
- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (void)removeFromList;

@end
