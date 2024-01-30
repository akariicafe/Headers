@class NSString;

@interface SSDoubleLinkedListNode : NSObject

@property (retain, nonatomic) NSString *listIdentifier;
@property (retain, nonatomic) SSDoubleLinkedListNode *previous;
@property (retain, nonatomic) id object;
@property (retain, nonatomic) SSDoubleLinkedListNode *next;

- (id)initWithObject:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
