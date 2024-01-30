@class NSString;

@interface SSDoubleLinkedListNode : NSObject

@property (retain, nonatomic) NSString *listIdentifier;
@property (retain, nonatomic) SSDoubleLinkedListNode *previous;
@property (retain, nonatomic) id object;
@property (retain, nonatomic) SSDoubleLinkedListNode *next;

- (id)init;
- (void).cxx_destruct;
- (id)initWithObject:(id)a0;

@end
