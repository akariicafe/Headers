@class EMMailboxObjectID;

@interface EMMoveMailboxChangeAction : EMMailboxChangeAction

@property (readonly, copy, nonatomic) EMMailboxObjectID *parentMailboxID;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithMailbox:(id)a0 newParent:(id)a1;
- (id)initWithMailboxObjectID:(id)a0 newParentMailboxID:(id)a1;

@end
