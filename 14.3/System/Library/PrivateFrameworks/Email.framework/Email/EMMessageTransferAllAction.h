@class NSArray;

@interface EMMessageTransferAllAction : EMMessageTransferAction

@property (readonly, copy, nonatomic) NSArray *mailboxObjectIDs;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)signpostType;
- (id)initWithCoder:(id)a0;
- (id)initWithMailboxes:(id)a0 messageListItemsToExclude:(id)a1 destinationMailbox:(id)a2 copyMessages:(BOOL)a3;
- (id)initWithMailboxes:(id)a0 messageListItemsToExclude:(id)a1 specialDestinationMailboxType:(long long)a2 flagChange:(id)a3 copyMessages:(BOOL)a4;
- (void)encodeWithCoder:(id)a0;

@end
