@class NSArray;

@interface EMMessageFlagChangeAllAction : EMMessageFlagChangeAction

@property (readonly, copy, nonatomic) NSArray *mailboxObjectIDs;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithMailboxes:(id)a0 messageListItemsToExclude:(id)a1 flagChange:(id)a2;
- (long long)signpostType;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
