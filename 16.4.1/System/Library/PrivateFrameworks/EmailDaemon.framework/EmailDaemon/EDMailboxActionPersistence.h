@class EDPersistenceDatabase;

@interface EDMailboxActionPersistence : NSObject

@property (readonly, nonatomic) EDPersistenceDatabase *database;

+ (id)tablesAndForeignKeysToResolve:(id *)a0 associationsToResolve:(id *)a1;

- (id)initWithDatabase:(id)a0;
- (void)saveMailboxActionForAccountID:(id)a0 action:(id)a1;
- (id)allMailboxActionForAccountID:(id)a0;
- (void)deleteMailboxActions:(id)a0;
- (void)deleteMailboxAction:(long long)a0;
- (id)nextMailboxActionForAccountID:(id)a0;
- (void).cxx_destruct;

@end
