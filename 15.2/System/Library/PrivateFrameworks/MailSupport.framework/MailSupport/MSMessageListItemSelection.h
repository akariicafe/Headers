@class NSArray;

@interface MSMessageListItemSelection : NSObject

@property (readonly, nonatomic) NSArray *messageListItems;
@property (readonly, nonatomic) NSArray *mailboxes;
@property (readonly, nonatomic) BOOL isSelectAll;

- (void).cxx_destruct;
- (id)initWithMessageListItems:(id)a0;
- (id)initWithMailboxes:(id)a0 excludedMessageListItems:(id)a1;

@end
