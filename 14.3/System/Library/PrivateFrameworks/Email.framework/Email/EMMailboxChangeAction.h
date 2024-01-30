@class EMMailboxObjectID;

@interface EMMailboxChangeAction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) EMMailboxObjectID *mailboxObjectID;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithMailbox:(id)a0;
- (id)initWithMailboxObjectID:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
