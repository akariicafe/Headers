@class IMDoubleLinkedListNode;

@interface IMDoubleLinkedList : NSObject

@property (retain) IMDoubleLinkedListNode *first;
@property (retain) IMDoubleLinkedListNode *last;
@property (readonly) unsigned long long count;

- (void)appendObject:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)popObject;
- (void)pushObject:(id)a0;
- (void)appendLinkedListNode:(id)a0;
- (void)pushLinkedListNode:(id)a0;
- (void)removeLinkedListNode:(id)a0;
- (void)removeAllObjects;
- (id)allObjects;
- (BOOL)containsObject:(id)a0;

@end
