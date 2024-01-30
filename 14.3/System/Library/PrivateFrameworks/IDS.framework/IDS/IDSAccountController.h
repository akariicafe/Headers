@class NSSet, _IDSAccountController;

@interface IDSAccountController : NSObject {
    _IDSAccountController *_internal;
}

@property (readonly, nonatomic) NSSet *accounts;

- (void)addDelegate:(id)a0 queue:(id)a1;
- (void)disableAccount:(id)a0;
- (void)removeDelegate:(id)a0;
- (void)enableAccount:(id)a0;
- (id)_initWithService:(id)a0;
- (void)addAccount:(id)a0;
- (id)enabledAccounts;
- (void)_enableAccount:(id)a0;
- (void)_removeAccount:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)accountWithUniqueID:(id)a0;
- (id)initWithService:(id)a0;
- (void)setupAccountWithLoginID:(id)a0 password:(id)a1 completionHandler:(id /* block */)a2;
- (void)_disableAccount:(id)a0;
- (void)removeAccount:(id)a0;
- (id)serviceName;
- (void)setupAccountWithLoginID:(id)a0 aliases:(id)a1 password:(id)a2 completionHandler:(id /* block */)a3;
- (void)setupAccountWithSetupParameters:(id)a0 aliases:(id)a1 completionHandler:(id /* block */)a2;
- (id)accountWithLoginID:(id)a0 service:(id)a1;
- (id)_internal;
- (id)_initWithService:(id)a0 onIDSQueue:(BOOL)a1;

@end
