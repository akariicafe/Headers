@class NSDictionary, ACAccountStore, NSMutableDictionary;
@protocol AIDAServiceOwnerProtocol, AIDAAccountManagerDelegate;

@interface AIDAAccountManager : NSObject {
    id<AIDAServiceOwnerProtocol> _serviceOwnersManager;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _accountManagerLock;
    NSMutableDictionary *_handlerByObserver;
}

@property (readonly, nonatomic) ACAccountStore *accountStore;
@property (copy, nonatomic) NSDictionary *accounts;
@property (weak, nonatomic) id<AIDAAccountManagerDelegate> delegate;

+ (id)_accountStoreChangeQueue;

- (void)_accountStoreDidChange:(id)a0;
- (id)initWithAccountStore:(id)a0;
- (id)init;
- (void)removeAccountChangeObserver:(id)a0;
- (void).cxx_destruct;
- (id)aidaAccountForService:(id)a0;
- (void)dealloc;
- (void)addAccountChangeObserver:(id)a0 handler:(id /* block */)a1;
- (id)_delegate_accountsForAccountManager;

@end
