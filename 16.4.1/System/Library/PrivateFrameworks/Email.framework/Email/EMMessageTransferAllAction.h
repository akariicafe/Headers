@class NSArray;

@interface EMMessageTransferAllAction : EMMessageTransferAction

@property (readonly, copy, nonatomic) NSArray *mailboxObjectIDs;

+ (BOOL)supportsSecureCoding;

- (long long)signpostType;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithMailboxes:(id)a0 messageListItemsToExclude:(id)a1 destinationMailbox:(id)a2 copyMessages:(BOOL)a3;
- (id)initWithMailboxes:(id)a0 messageListItemsToExclude:(id)a1 specialDestinationMailboxType:(long long)a2 flagChange:(id)a3 copyMessages:(BOOL)a4;

@end
