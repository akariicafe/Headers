@class NSString;

@interface EMRenameMailboxChangeAction : EMMailboxChangeAction

@property (readonly, copy, nonatomic) NSString *name;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithMailboxObjectID:(id)a0 newName:(id)a1;
- (id)initWithMailbox:(id)a0 newName:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
