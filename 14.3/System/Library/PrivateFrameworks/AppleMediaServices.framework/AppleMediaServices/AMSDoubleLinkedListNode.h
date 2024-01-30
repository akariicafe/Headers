@class NSString;

@interface AMSDoubleLinkedListNode : NSObject

@property (retain, nonatomic) NSString *listIdentifier;
@property (retain, nonatomic) AMSDoubleLinkedListNode *previous;
@property (retain, nonatomic) id object;
@property (retain, nonatomic) AMSDoubleLinkedListNode *next;

- (id)init;
- (void).cxx_destruct;
- (id)initWithObject:(id)a0;

@end
