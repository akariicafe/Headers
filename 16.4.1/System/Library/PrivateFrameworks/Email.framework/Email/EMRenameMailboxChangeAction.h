@class NSString;

@interface EMRenameMailboxChangeAction : EMMailboxChangeAction

@property (readonly, copy, nonatomic) NSString *name;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithMailbox:(id)a0 newName:(id)a1;
- (id)initWithMailboxObjectID:(id)a0 newName:(id)a1;

@end
