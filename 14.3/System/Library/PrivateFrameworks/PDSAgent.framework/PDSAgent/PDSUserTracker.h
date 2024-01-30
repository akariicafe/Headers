@interface PDSUserTracker : NSObject

@property (copy, nonatomic) id /* block */ accountStoreBlock;

+ (id)standardAccountStore;

- (id)_accountForUser:(id)a0 withError:(id *)a1;
- (id)init;
- (void).cxx_destruct;
- (BOOL)validUser:(id)a0 withError:(id *)a1;
- (id)initWithAccountStoreBlock:(id /* block */)a0;
- (id)tokenAndIdentifier:(id *)a0 forUser:(id)a1 withError:(id *)a2;
- (void)refreshCredentialsForUser:(id)a0 withError:(id *)a1 completion:(id /* block */)a2;

@end
