@interface IMDoubleLinkedListNode : NSObject

@property (retain) IMDoubleLinkedListNode *prev;
@property (retain) IMDoubleLinkedListNode *next;
@property (retain) id object;

- (void).cxx_destruct;
- (id)initWithObject:(id)a0;
- (void)orphan;
- (void)removeFromList;

@end
