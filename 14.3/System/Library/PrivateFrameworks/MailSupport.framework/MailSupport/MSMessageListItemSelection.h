@class NSArray;

@interface MSMessageListItemSelection : NSObject

@property (readonly, nonatomic) NSArray *messageListItems;
@property (readonly, nonatomic) NSArray *mailboxes;
@property (readonly, nonatomic) BOOL isSelectAll;

- (id)initWithMessageListItems:(id)a0;
- (void).cxx_destruct;
- (id)initWithMailboxes:(id)a0 excludedMessageListItems:(id)a1;

@end
