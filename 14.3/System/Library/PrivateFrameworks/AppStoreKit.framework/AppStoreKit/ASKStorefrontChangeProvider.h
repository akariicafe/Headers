@class ACAccount, ACAccountStore, NSObject;
@protocol OS_dispatch_queue;

@interface ASKStorefrontChangeProvider : NSObject

@property (readonly, copy, nonatomic) id /* block */ block;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue;
@property (readonly, nonatomic) ACAccountStore *accountStore;
@property (retain, nonatomic) ACAccount *localAccount;
@property (retain, nonatomic) ACAccount *activeAccount;

- (BOOL)hasManagedStateChangedFromAccount:(id)a0 toAccount:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)hasStorefrontChangedFromAccount:(id)a0 toAccount:(id)a1;
- (id)initWithBlock:(id /* block */)a0;
- (void)accountStoreDidChange:(id)a0;

@end
