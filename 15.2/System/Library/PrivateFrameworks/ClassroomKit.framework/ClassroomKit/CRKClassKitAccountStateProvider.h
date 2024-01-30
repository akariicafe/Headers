@class ACAccountStore;

@interface CRKClassKitAccountStateProvider : NSObject

@property (readonly, nonatomic) ACAccountStore *accountStore;
@property (nonatomic) long long accountState;

- (void).cxx_destruct;
- (id)init;
- (void)accountStoreDidChange:(id)a0;
- (void)dealloc;
- (void)endObservingAccountChanges;
- (void)beginObservingAccountChanges;
- (void)updateAccountState;
- (long long)currentAccountState;

@end
