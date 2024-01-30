@class ACAccountStore;

@interface CRKClassKitAccountStateProvider : NSObject

@property (readonly, nonatomic) ACAccountStore *accountStore;
@property (nonatomic) long long accountState;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)accountStoreDidChange:(id)a0;
- (void)endObservingAccountChanges;
- (void)beginObservingAccountChanges;
- (void)updateAccountState;
- (long long)currentAccountState;

@end
