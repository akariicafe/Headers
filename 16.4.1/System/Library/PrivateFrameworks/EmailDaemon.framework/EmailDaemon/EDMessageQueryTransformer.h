@class EDMailboxPersistence, EDMessagePersistence;
@protocol EMVIPManager, EDAccountsProvider;

@interface EDMessageQueryTransformer : NSObject

@property (readonly, nonatomic) id<EDAccountsProvider> accountsProvider;
@property (readonly, nonatomic) EDMailboxPersistence *mailboxPersistence;
@property (readonly, nonatomic) EDMessagePersistence *messagePersistence;
@property (readonly, nonatomic) id<EMVIPManager> vipManager;

- (void).cxx_destruct;
- (id)initWithAccountsProvider:(id)a0 mailboxPersistence:(id)a1 messagePersistence:(id)a2 vipManager:(id)a3;
- (id)simplifyAndPredicate:(id)a0;
- (id)simplifyCompoundPredicate:(id)a0;
- (id)simplifyNotPredicate:(id)a0;
- (id)simplifyOrPredicate:(id)a0;
- (id)simplifySingleSubpredicate:(id)a0;
- (id)transformComparisonPredicate:(id)a0;
- (id)transformCompoundPredicate:(id)a0;
- (id)transformPredicate:(id)a0;
- (id)transformSubpredicates:(id)a0;

@end
