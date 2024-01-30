@class NSString;

@interface EDMailboxAction : NSObject

@property (readonly, nonatomic) long long actionID;
@property (readonly, nonatomic) long long actionType;
@property (readonly, copy, nonatomic) NSString *mailboxName;
@property (readonly, copy, nonatomic) NSString *renamedMailboxName;

+ (id)actionWithID:(long long)a0 toCreateMailbox:(id)a1;
+ (id)actionWithID:(long long)a0 toDeleteMailbox:(id)a1;
+ (id)actionWithID:(long long)a0 toRenameMailbox:(id)a1 toName:(id)a2;

- (void).cxx_destruct;
- (id)initWithID:(long long)a0 actionType:(long long)a1 mailboxName:(id)a2 renamedMailboxName:(id)a3;

@end
